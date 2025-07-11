//800

#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);

    int lucky=0;
    while(a!=0){
        if(a%10==4 || a%10==7){
            lucky++;
            a /=10;
        }
    }
    if(lucky==4||lucky==7)
        printf("YES");
    else
        printf("NO");

    return 0;
}