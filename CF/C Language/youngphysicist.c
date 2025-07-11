//1000

#include<stdio.h>

int main(){
    int n,i,j;
    scanf("%d",&n);
    int a[n][3];

    for(i=0;i<n;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int sum=0,flag=0;
    for(j=0;j<3;){
        for(i=0;i<n;i++){
            sum += a[i][j];
        }
        if(sum!=0){
            flag=1;
            break;
        }
        j++;
    }    

    if(flag==1)
        printf("NO");
    else
        printf("YES");

    return 0;
}