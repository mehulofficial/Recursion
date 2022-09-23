#include <bits/stdc++.h>
using namespace std;

string reverse(string s, int start, int end){
    if(start > end){
        return s;
    }
    char temp = s[start];
    s[start] = s[end];
    s[end] = temp;
    string ans = reverse(s, start + 1, end - 1);
    return ans;
}

int main(){
    string s;
    cin >> s;
    cout << reverse(s, 0, s.length() - 1);
    
}
