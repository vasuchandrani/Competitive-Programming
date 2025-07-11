//800

#include<stdio.h>
#include<string.h>
 
int main(){
    int n;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);
 
    int anton=0,danik=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            anton++;
        }
        else if(s[i]=='D'){
            danik++;
        }
    }
 
    if(danik>anton){
        printf("Danik\n");
    }
    else if(anton==danik){
        printf("Friendship\n");
    }
    else if(anton>danik){
        printf("Anton\n");
    }
 
    return 0;
}