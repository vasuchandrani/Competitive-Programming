//1000
//incomplete
//in c++

#include<stdio.h>
#include<string.h>

int main(){
    char s[100];
    scanf("%s",s);
    int l=strlen(s);

    int c=0;
    for(int i=0;i<l;i++){
        if(s[i]=='h'){
            for(int j=i+1;j<l;j++){
                if(s[j]!='h' && s[j]!='e'){
                    break;
                }
                
            }
        }
        else{
            continue;
        }
    }
    

    return 0;
}