#include<iostream>
#include<cmath> 
#include<string>
#include<sstream>

#define ll long long

using namespace std;

void chuanhoaxau_1(string s){
    stringstream ss(s);
    string res = "", word;
    while(ss >> word){
        res += toupper(word[0]);
        for(int i = 1; i < word.length();i++){
            res += tolower(word[i]);
        }
        res += " ";
    }
    res.pop_back();
    cout << res << endl;
}
int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s; getline(cin,s);
        chuanhoaxau_1(s);
    }
    return 0;
}