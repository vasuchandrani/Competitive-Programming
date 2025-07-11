//800(B)

#include<iostream>
using namespace std;;

int main(){
    int n,t;
    cin>>n>>t;
    char s[n];
    scanf("%s",s);

    for(int i=0;i<t;i++){
        int j=0;
        while(s[j] != '\0'){
            if(s[j]=='B' && s[j+1]=='G'){
                s[j]='G';
                s[j+1]='B';
                j++;
            }j++;
        }
    }
    printf("%s",s);
    return 0;
}