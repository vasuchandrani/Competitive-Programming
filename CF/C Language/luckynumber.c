//1000

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int flag=0;
    int a=n;
    while(a){
        if(a%10==4 || a%10==7){
            flag=1;
        }
        else{
            flag=0;
            break;
        }    
        a /=10;
    }
    if(flag==0){
        if(n%4==0||n%7==0||n%44==0||n%77==0||n%47==0||n%74==0||n%444==0||n%447==0||n%477==0){
            printf("YES");
        } 
        else{
            printf("NO");
        }
    }
    else{
        printf("YES");
    }

    return 0;
}