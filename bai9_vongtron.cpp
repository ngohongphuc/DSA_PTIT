#include<iostream>
#include<cmath> 
#include<string>
#include<sstream>
#include<vector>
#define ll long long

using namespace std;

ll nCk(ll n, ll k){
    if(n == k || k == 0){
        return 1;
    }
    return nCk(n-1,k) + nCk(n-1,k-1);
}

void solve(string s){
    int a = 26;
    // so cap chu cai
    for(int i = 1; i < s.length();i++){
        if(s[i] == s[i-1]){
            a--;
        }
    }
    if(s[0]==s[s.length()-1]){
        a--;
    }
    cout << nCk(a,2) << endl;
}

int main(){
    string s;
    getline(cin,s);
    solve(s);
    return 0;
}