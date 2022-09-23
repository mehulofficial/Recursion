#include <bits/stdc++.h>
using namespace std;

int fib(int n){

    //Base Condition
    if(n <= 1){
        return n;
    }
    
    //Recursive Function
    int ans = fib(n - 1) + fib(n - 2);
    return ans;
}

int main(){
    int n;
    cin >> n;
    cout << fib(n) << endl;
}
