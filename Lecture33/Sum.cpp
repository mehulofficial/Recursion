#include <bits/stdc++.h>
using namespace std;

int isSum(int arr[], int size){
    if(size == 0){
        return 0;
    }
    int sum = arr[0] + isSum(arr + 1, size - 1);
    return sum;
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
    cout << isSum(arr, size);
}
