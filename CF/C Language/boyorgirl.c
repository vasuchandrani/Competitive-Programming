//800
#include<stdio.h>
#include<string.h>
 
int main(){
    char a[100];
    scanf("%s",a);
 
    int i,j,count=0;
 
    for(i=0;a[i]!='\0';i++){
        for(j=0;j<i;j++){
            if(a[i]==a[j]){
                count -=1;
                break;
            }
        }
        count +=1;
    }
    if(count%2==0){
        printf("CHAT WITH HER!");
    }
    else{
        printf("IGNORE HIM!");
    }
    return 0;
}