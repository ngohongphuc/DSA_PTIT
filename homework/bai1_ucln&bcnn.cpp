#include<iostream>
#include<cmath> 
#define ll long long

using namespace std;

ll gcd(ll a, ll b){
    if(b==0){
        return a;
    }
    else return gcd(b,a%b);
}

ll lcm(ll a, ll b){
    return a/gcd(a,b)*b;
}

int main(){
    int t; cin >> t; 
    while(t--){
        ll a, b; cin >> a >> b; 
        cout << gcd(a,b) << " " << lcm(a,b); 
        cout << endl;
    }
    return 0;
}