//800
#include<stdio.h>
#include<string.h>

int main(){
    int n;
    scanf("%d",&n);
    struct str{
        char s[100];
        int num[n];
    }x[n];
    
    int l[n];
    for(int i=0;i<n;i++){
        scanf("%s",x[i].s);
        l[i] = strlen(x[i].s);
        x[i].num[i] = strlen(x[i].s) - 2;
    }
    for(int i=0;i<n;i++){
        if (l[i]>10)
            printf("%c%d%c\n",x[i].s[0],x[i].num[i],x[i].s[l[i]-1]);  
        else
            printf("%s\n",x[i].s);      
    }
    
    return 0;
}