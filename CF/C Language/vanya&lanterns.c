//incomplete

#include<stdio.h>

void sort(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,n);
    
    int max_diff=a[0],diff;
    for(int i=0;i<n;i++){
        diff=a[i+1]-a[i];
        if(diff>max_diff){
            max_diff=diff;
        }
    }
    if(a[0]!=0){
        if((max_diff/2)>a[0]){
            printf("%d",max_diff);
        }
        else{
            printf("%d",a[0]);
        }
    }
    
    return 0;
}