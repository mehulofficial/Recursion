#include <bits/stdc++.h>
using namespace std;

bool isThere(int arr[], int size, int key){
    if(size == 0){
        return false;
    }
    if(arr[0] == key){
        return true;
    }
    bool ans = isThere(arr + 1, size - 1, key);
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
    cout << isThere(arr, size, key);
}
