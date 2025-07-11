#include<stdio.h>
#include<math.h>

int main(){
    long long int n,k;
    scanf("%I64d %I64d",&n,&k);

    long long mid,a;
    if(n%2==0){
        mid =n/2;
        a =n-1;
    }
    else{
        mid =(n+1)/2;
        a =n;
    }

    if(k<mid){
        printf("%I64d\n",2*k-1);
    }
    else if(k>mid){
        printf("%I64d\n",2*(k-mid));
    }
    else{
        printf("%I64d\n",a);
    }
    return 0;

}