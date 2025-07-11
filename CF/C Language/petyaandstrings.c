//800

// not support in all compilers

#include<stdio.h>
#include<string.h>
int main(){
    char s1[100];
    char s2[100];
    scanf("%s",s1);
    scanf("%s",s2);

    int n=strlen(s1);
    int i,c=0,x;
    for(i=0;i<n;i++){
        if(s1[i]==s2[i]){
            continue;
        }
        else if(s1[i]==s2[i]+32){
            continue;
        }
        else if(s1[i]==s2[i]-32){
            continue;
        }
        else{
            c++;
            break;
        }
    }
    if(c==1){
        x= strcmp(s1,s2);
        printf("%d",x);
    }
    return 0;
}

// support in all compilers

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char s1[100];
    char s2[100];
    gets(s1);
    gets(s2);
    
    int n,count=0;
    n=strlen(s1);

    for(int i=0; i<n; i++){
        if(toupper(s1[i])>toupper(s2[i])){
            printf("1\n");
           break; 
        }
        else if(toupper(s1[i])<toupper(s2[i])){
            printf("-1\n");
            break;  
        }
        else if (toupper(s1[i])==toupper(s2[i])){
           count++;
        }
    }
    if(count==n) {
        printf("0\n");  
    }

    return 0;
 }