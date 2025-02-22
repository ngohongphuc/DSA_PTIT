#include<iostream>
#include<cmath> 
#include<string>
#include<sstream>
#include<vector>

#define ll long long

using namespace std;

int main(){
    int t; cin >> t; 
    cin.ignore();
        while(t--){
            string s; getline(cin,s);
            stringstream ss(s);
            string word;
            vector<string> ve ;
            while(ss >> word){
                string res ="";
                res+= toupper(word[0]);
                for(int i = 1; i < word.length(); i++){
                    res += tolower(word[i]);
                }
                ve.push_back(res);
                res ="";
            }            
            for(int i = 0; i < ve[0].size(); i++){
                ve[0][i] = toupper(ve[0][i]);
            }
            for(int i = 1; i < ve.size();i++){
                cout << ve[i]; 
                if(i != ve.size() - 1){
                    cout << " ";
                }
            }
            cout << ", "; 
            cout << ve[0] << endl;
    }
    return 0;
}
