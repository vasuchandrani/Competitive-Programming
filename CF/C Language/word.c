//800

#include<stdio.h>
#include<string.h>

int main(){
    char s[100];
    scanf("%s",s);
    int i,n=strlen(s);

    int l=0,u=0;
    for(i=0;i<n;i++){
        if(s[i]>=65 && s[i]<=90){
            u++;
        }
        else if(s[i]>=97 && s[i]<=122){
            l++;
        }
    }
    if(u>l){
        for(i=0;i<n;i++){
            if(s[i]>=97 && s[i]<=122){
                s[i] -=32;
            }
        }
        for(i=0;i<n;i++){
            printf("%c",s[i]);
        }
    }
    else{
        for(i=0;i<n;i++){
            if(s[i]>=65 && s[i]<=90){
                s[i] +=32;
            }
        }
        for(i=0;i<n;i++){
            printf("%c",s[i]);
        }
    }
    return 0;
}