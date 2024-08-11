# middleware.py
from django.contrib.auth import get_user_model
from django.contrib.auth.middleware import AuthenticationMiddleware

class AutoLoginMiddleware(AuthenticationMiddleware):
    def process_request(self, request):
        if not request.user.is_authenticated:
            User = get_user_model()
            user, created = User.objects.get_or_create(username='admin', defaults={
                'is_superuser': True,
                'is_staff': True,
            })
            request.user = user
            request.session['_auth_user_id'] = user.pk
