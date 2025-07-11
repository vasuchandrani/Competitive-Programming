//1500

#include<stdio.h>
 
int main(){
    int n;
    scanf("%d",&n);
 
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
 
    int freq[] = {0};
    for(int i=0;i<n;i++){
        freq[a[i]]++;
    }
    for(int i=0;i<n;i++){
        printf("%d ",freq[i]);
    }
    int max=0;
    for(int i=0;i<n;i++){
        if(max < i*freq[i]){
            max = i*freq[i];
        }
    }
    printf("%d",max);
    return 0;
}