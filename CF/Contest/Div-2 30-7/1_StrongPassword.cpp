#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.length();
        int idx = 0;
        if(n == 1 ){
            if(s[0] != 'z')
                cout<<char(s[0]+1)<<s<<endl;
            else
                cout<<char(s[0]-1)<<s<<endl;
        }
        else{
            for(int i=1;i<n;i++){
                if(s[i-1] == s[i]){
                    idx = i;
                    break;
                }
                else{
                    continue; 
                }
            }
            for(int i=0;i<idx;i++){
                cout<<s[i];
            }
            if(s[idx] != 'z')
                cout<<char(s[idx]+1);
            else
                cout<<char(s[idx]-1);
            for(int i=idx;i<n;i++){
                cout<<s[i];
            }cout<<endl;
        }
    }
    return 0;
}
