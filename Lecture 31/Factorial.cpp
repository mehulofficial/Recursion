#include <bits/stdc++.h>
using namespace std;
int factorial(int n){
    //Base condition
    if(n == 0){
        return 1;
    }

    //Recursive function
    int small_problem = factorial(n - 1);
    int big_problem = n * small_problem;
    return big_problem;
}
int main() {
	int n;
    cin >> n;
    cout << factorial(n) << endl;
}
