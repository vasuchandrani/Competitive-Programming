//800
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int x=0;
    char s[4];
    int i;
    for(i=0;i<n;i++){
        scanf("%s",s);

        if(s[0]=='+' || s[2]=='+'){
            x++;
        }
        else if(s[0]=='-' || s[2]=='-'){
            x--;
        }
    }
    printf("%d",x);
    return 0;
}