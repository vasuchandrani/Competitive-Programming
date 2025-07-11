//800
 
#include<stdio.h>
#include<string.h>
 
int main(){
    char s[100];
    char t[100];
    scanf("%s%s",s,t);
 
    int l=strlen(s);
    int i,j;
    int flag=0;
    for(i=0,j=l-1;i<l;i++,j--){
        if(s[i]!=t[j]){
            flag=1;
            break;
        }
    }
 
    if(flag==1)
        printf("NO");
    else
        printf("YES");
 
    return 0;
}