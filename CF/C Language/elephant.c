//800

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int count;
    count= n/5;
    if(n%5==0){
    printf("%d",count);
    }
    else{
        count++;
        printf("%d",count);
    }
    return 0;
}