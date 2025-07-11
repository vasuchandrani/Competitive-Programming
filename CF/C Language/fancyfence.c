//1100

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++){
        int flag=0;
        int temp = 180-a[i];

        for(int j=3;temp<=(360/j);j++){
            if(temp*j==360){
                flag=1;
                break;
            }
        }

        if(flag==1)
            printf("YES\n");
        else
            printf("NO\n");
    }    
    return 0;
}