#include <bits/stdc++.h>
using namespace std;

int binary(int arr[], int low, int high, int size, int key){
    if(low > high){
        return -1;
    }
    int mid = low + (high - low) / 2;
    if(arr[mid] == key){
        return mid;
    }
    if(arr[mid] > key){
        high = mid - 1;
    }
    if(arr[mid] < key){
        low = mid + 1;
    }
    int ans = binary(arr, low, high, high - low + 1, key);
    return ans;
}

int main(){
    int size;
    cin >> size;
    int arr[size];
    int index = 0;
    while(index != size){
        cin >> arr[index];
        index++;
    }
    int key;
    cin >> key;
    cout << binary(arr, 0, size - 1, size, key);
}
