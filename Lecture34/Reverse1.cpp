#include <bits/stdc++.h>
using namespace std;

void reverse(string& s, int start, int end){
    if(start > end){
        return;
    }
    char temp = s[start];
    s[start] = s[end];
    s[end] = temp;
    reverse(s, start + 1, end - 1);
}

int main(){
    string s;
    cin >> s;
    reverse(s, 0, s.length() - 1);
    cout << s;
}
