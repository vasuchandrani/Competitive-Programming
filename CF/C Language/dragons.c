//1000
//test case wrong in cf

#include<stdio.h>

int main(){
    int s,n;
    scanf("%d%d",&s,&n);
    int x,y;

    int flag=0;
    for(int i=0;i<n;i++){
        scanf("%d%d",&x,&y);
        if(s>x){
            flag=1;
            s=s+y;
            continue;
        }
        if(s<x){
            continue;
        }
    }
    if(flag==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}