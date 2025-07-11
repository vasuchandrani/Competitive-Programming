//1400

#include<stdio.h>
#include<stdlib.h>

int main(){
    int t;  //test case
    scanf("%d",&t); 
    long long int a[t][2];    //array which contain a & b
    long long int r;

    for(int i=0;i<t;i++){
        for(int j=0;j<2;j++){
            scanf("%lld",&a[i][j]);   //a & b 
        }
        scanf("%lld",&r); // r

        long long int ans[r]; 
        for(int x=0;x<=r;x++){
            ans[x]=abs((a[i][0]^x) - (a[i][1]^x));  //-|(a^x)-(b^x)|
        }

        long long int min=ans[0];
        for(int j=1;j<r;j++){
            if(ans[j]<min){
                min=ans[j];   // for smallest number
            }
        }
        printf("%lld",min);
    }    
    return 0;
}