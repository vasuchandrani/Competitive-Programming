//800

#include<stdio.h>
#include<string.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);

    int count=0;
    for(int i=0;a<=b;i++){
        a *=3;
        b *=2;
        count++;
    }
    printf("%d",count);
    return 0;
}


