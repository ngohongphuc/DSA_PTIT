#include<iostream> 
#include<cmath>
#include<string>

using namespace std;

bool solve(string s){
    if((s[0]-'0') + (s[2]-'0') == (s[4]-'0')){
        return 1;
    }
    else
        return 0;
}

int main(){
    string s; 
    cin >> s; 
    if(solve(s)){
        cout <<"YES" << endl; 
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}