#include<iostream>
#include<string>
using namespace std;;

int main(){
    int n;
    cin>>n;

    string s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }      
    if(n==1){
        cout<<s[0];
        return 0;
    } 

    string s1,s2;
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){
            s1 = s[i-1];
            s2 = s[i];
            continue;
        }
        else{
            s1 = s[i-1];
            s2 = s[i];
            break;
        }
    }

    int c1=0, c2=0;
    for(int i=0;i<n;i++){
        if (s[i]==s1)
            c1++;
        else
            c2++;
    }
    if(c1>c2)
        cout<<s1;
    else
        cout<<s2;

    return 0;
}
