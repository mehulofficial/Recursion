#include <bits/stdc++.h>
using namespace std;

void say(int n, string arr[]){
    if(n == 0){
        return;
    }
    int digit = n % 10;
    say(n / 10, arr);
    cout << arr[digit] << " ";
}

int main(){
    int n;
    cin >> n;
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    say(n, arr);
}
