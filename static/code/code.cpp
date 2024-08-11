#include<bits/stdc++.h>

using namespace std;

#include<bits/stdc++.h>

using namespace std;

#include <iostream>
using namespace std;

// Function to sort an array of 0s, 1s, and 2s
void solve(int arr[], int size) {
    int low = 0, mid = 0, high = size - 1;

    while (mid <= high) {
        switch (arr[mid]) {
            case 0:
                swap(arr[low++], arr[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[mid], arr[high--]);
                break;
        }
    }
}


int main(){
    
    int size;
    cin>>size;
    int * arr = new int[size];

    for(int i = 0;i<size;i++){
        cin>>arr[i];
    }

    solve(arr,size);

    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}