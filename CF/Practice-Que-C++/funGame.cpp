#include<iostream>
#include<string>
using namespace std;

bool IsCanBeEqual(int n, string s, string t){

    //Find L & R
    int l, r;
    for(int i=0;i<n;i++){
        if(s[i]!=t[i]){
            l = i+1;
            break;
        }
    }
    for(int i=l;i<n;i++){
        if(s[i]==t[i]){
            r = i+1;
            break;
        }
    }

    for(int i=l;i<=r;i++){
        int j = i - l + 1;
        if(s[i]=='1'){
            if(s[j]=='1'){
                s[i] = '0';
            }
            else{
                s[i]= '1';
            }
        } 
        else{
            if(s[j]=='1'){
                s[i] = '1';
            }
            else{
                s[i]= '0';
            } 
        }
    }

    if(s!=t && r!=(n-1)){
        IsCanBeEqual(n, s, t);
    }
    else if(s==t){
        return true;
    }
    else{
        return false;
    }
    return false;
}

int main(){
    int T;
    cin>>T;

    int n;
    string s, t;
    while(T--){

        cin>>n;
        cin>>s>>t;

        bool x = IsCanBeEqual(n, s, t);
        if(x){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}