#include<iostream>
#include<cmath> 
#include<string>
#include<sstream>
#include<vector>

#define ll long long

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int dem = 0;
        for(int i = 2; i <= n;i++){
            if(n%i==0 && i%2==0){
                dem++;
            }
        }
        cout << dem << endl;
    }
    return 0;
}