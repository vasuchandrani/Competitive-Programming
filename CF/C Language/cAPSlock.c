//1000

#include<stdio.h>
#include<string.h>

int main(){
    char str[101];
    gets(str);
    int n=strlen(str);

    int flag=0;
    for(int i=1;i<n;i++){
        if(str[i]>=97 && str[i]<=122){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("%s",str);
    }
    else if(flag==0 && (str[0]>=97 && str[0]<=122)){
        str[0] -=32;
        for(int i=1;i<n;i++){
            str[i] +=32; 
        }
        printf("%s",str);
    }
    else{
        for(int i=0;i<n;i++){
            str[i] +=32; 
        }
        printf("%s",str);
    }

    
    return 0;
}