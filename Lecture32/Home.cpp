#include <bits/stdc++.h>
using namespace std;

void reachedHome(int src, int dest){

    //Base Condition
    if(src == dest){
        cout << "reached" << endl;
        return;
    }

    //Process
    cout << "source " << src << " destination " << dest << endl;

    //Recursive Function
    reachedHome(src + 1, dest);
}

int main(){
    int src;
    int dest;
    cin >> src;
    cin >> dest;
    reachedHome(src, dest);
}
