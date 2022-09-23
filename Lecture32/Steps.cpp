#include <bits/stdc++.h>
using namespace std;

int steps(int n){

    //Base Condition
    if(n < 0){
        return 0;
    }
    if(n == 0){
        return 1;
    }
    
    //Recursive Function
    int nthStep = steps(n - 1) + steps(n - 2);
    return nthStep;
}

int main(){
    int n;
    cin >> n;
    cout << steps(n) << endl;
}
