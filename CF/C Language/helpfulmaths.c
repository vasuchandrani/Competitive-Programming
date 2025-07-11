//800
#include<stdio.h>
#include<string.h>

int main(){
    char s[101];
    scanf("%s",s);
    
    int n=strlen(s);
    int i,j;
    for(i=0;i<n;i+=2){
        for(j=i+2;j<n;j+=2){
            if(s[i]>s[j]){
                int t;
                t=s[i];
                s[i]=s[j];
                s[j]=t;        
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%c",s[i]);
    }
    return 0;
}