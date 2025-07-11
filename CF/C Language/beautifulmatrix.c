//800
#include<stdio.h>
#include<stdlib.h>
int main(){

    int m[5][5];
    int i,j;
    int x,y;

    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            scanf("%d",&m[i][j]);
            
            if(m[i][j]==1){
                x= abs(3-i);
                y= abs(3-j);
            }
        }
        printf("\n");
    }
    printf("%d",x+y);   
    return 0;
}