## Getting Started

1. Make sure you have [python](https://www.python.org) and [docker](https://docs.docker.com/get-docker/) installed on your machine.

1. Setup and start virtual environment. If you don't have `python3`, replace with `python`.

```bash
python3 -m venv venv
source venv/bin/activate
```

2. Install dependencies and migrate

```bash
pip install -r requirements.txt
python manage.py migrate
```

3. Run server and open *localhost:8000* in a browser

```bash
python manage.py runserver
```

```bash
python manage.py test
```

