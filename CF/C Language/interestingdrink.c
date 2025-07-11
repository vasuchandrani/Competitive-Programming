//1100
//time limit exceeded

#include<stdio.h>
 
int main(){
    int n;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    int q;
    scanf("%d",&q);
    int m[q];
    for(int i=0;i<q;i++){
        scanf("%d",&m[i]);
    }
    
    int count[q];
    for(int i=0;i<q;i++){
        count[i]=0;
        for(int j=0;j<n;j++){
            if(m[i]>=x[j]){
                count[i]++;
            }
        }
    }
    for(int i=0;i<q;i++){
        printf("%d ",count[i]);
    }
 
    return 0;
}