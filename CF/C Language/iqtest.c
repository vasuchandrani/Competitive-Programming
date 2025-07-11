//1300

#include<stdio.h>
#include<string.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int odd=0,even=0,odd_pos,even_pos;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            even++;
            even_pos=i;
        }    
        else if(a[i]%2!=0){
            odd++;
            odd_pos=i;
        }
    }
    if(even==1){
        printf("%d",even_pos+1);
    }
    else if(odd==1){
        printf("%d",odd_pos+1);
    }

    return 0;
}