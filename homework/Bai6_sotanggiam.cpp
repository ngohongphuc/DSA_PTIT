#include<iostream>
#include<cmath> 
#define ll long long

using namespace std;

bool stringup(string s){
    for(int i = 1; i < s.length(); i++){
        if(s[i] < s[i-1]){
            return 0;
        }
    }
    return 1;
}

bool stringdown(string s){
    for(int i = 1; i <s.length();i++){
        if(s[i] > s[i-1]){
            return 0;
        }
    }
    return 1;
}

int main(){
    int t; cin >> t; 
    while(t--){
        string s; cin >> s; 
        if(stringup(s) || stringdown(s)){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}