#include <bits/stdc++.h>
using namespace std;
int power(int n){
    //Base condition
    if(n == 0){
        return 1;
    }

    //Recursive function
    int small_problem = power(n - 1);
    int big_problem = 2 * small_problem;
    return big_problem;
}
int main() {
	int n;
    cin >> n;
    cout << power(n) << endl;
}
