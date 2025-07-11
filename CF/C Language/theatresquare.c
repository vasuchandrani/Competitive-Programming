//1000

#include<stdio.h>
int main(){
    int n,m,a;
    scanf("%d%d%d",&n,&m,&a);
    int l,w;
    l= n/a;
    if(n%a!=0){
        l++;
    }
    w= m/a;
    if(m%a!=0){
        w++;
    }

    int sqr= l*w;
    printf("%d",sqr);
    return 0;
}