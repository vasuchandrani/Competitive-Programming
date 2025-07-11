#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int flag=1,year=n;
    while(flag){
        year++;
        int x=year;
        int a=x%10;
        x /=10;
        int b=x%10;
        x /=10;
        int c=x%10;
        x /=10;
        if(a!=b && a!=c && a!=x && b!=c && b!=x && c!=x){
            printf("%d",year);
            break;
        }
    }
    return 0;    
}