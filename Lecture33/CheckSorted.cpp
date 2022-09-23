#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int size){
    if(size == 1){
        return true;
    }
    if(arr[0] > arr[1]){
        return false;
    }
    else{
        bool ans = isSorted(arr + 1, size - 1);
        return ans;
    }
    
}

int main(){
    int size;
    cin >> size;
    int arr[size];
    int index = 0;
    while(index++ != size){
        cin >> arr[index];
    }
    cout << isSorted(arr, size);
}
