#include<iostream>
#include<cmath> 
#define ll long long

using namespace std;
bool check(string s){
    if(s[0] != s[s.length()-1]){
        return 0;
    }
    return 1;
}

int main(){
    int t; cin >> t; 
    while(t--){
        string s; 
        cin >> s; 
        if(check(s)){
            cout << "YES" << endl; 
        }
        else 
            cout << "NO" << endl;
    }
    return 0;
}