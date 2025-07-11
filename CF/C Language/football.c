//900

#include<stdio.h>
#include<string.h>

int main(){
    char a[100];
    scanf("%s",a);

    int count=1;
    int l=strlen(a);
    for(int i=0;i<l;i++){
        for(int j=i+1;a[i]==a[j];j++){
            count++;
        }
        if(count==7){
            break;
        }
        else{
            count=1;
        }
    }

    if(count==7)
        printf("YES");
    else
        printf("NO");

    return 0;
}