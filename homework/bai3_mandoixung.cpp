#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
    int t ; cin >> t; 
    while(t--){
    int n; cin >> n; 
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int ok = 1;
    for(int i = 0; i < n/2; i++){
        if(a[i] != a[n-i-1]){
            ok = 0;
            break;
        }
    }
    if(ok) cout << "YES" << endl;
    else cout << "NO" << endl;
    }
}

