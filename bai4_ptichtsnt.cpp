#include<iostream>
#include<cmath>

using namespace std; 


void ptichtsnt(int n){
    for(int i = 2; i <= sqrt(n);i++){
        int cnt = 0; 
        while(n%i==0){
            cnt++;
            n/=i;
        }
        if(cnt > 0){
            cout << i <<"(" << cnt<< ")" << " ";
        }
    }
    if(n > 1){
        cout << n << "(1)";
    }
    cout << endl;
}
int main(){
    int t; cin >> t; 
    while(t--){
        int n; cin >> n; 
        ptichtsnt(n);
    }
    return 0;
}