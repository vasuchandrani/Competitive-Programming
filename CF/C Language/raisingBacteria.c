//1000

#include<stdio.h>

int main(){
    int x;
    scanf("%d",&x);

    int bacteria=0;
    while(x>0){
        if(x%2==1){
            x--;
            bacteria++;
        }
        else{
            x =x/2;
        }
    }
    printf("%d",bacteria);

    return 0;
}