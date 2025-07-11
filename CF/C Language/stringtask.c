//1000

#include<stdio.h>
#include<string.h>

int main(){
    char s[101];
    scanf("%s",s);
    int i,j,c=0;
    int l=strlen(s);
    
    //remove vowels
    for(i=0;i<l;i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i'|| s[i]=='o'|| s[i]=='u'|| s[i]=='y'|| s[i]=='A'|| s[i]=='E'|| s[i]=='I'|| s[i]=='O'|| s[i]=='U'|| s[i]=='Y' ){
            c++;
            for(j=i;j<l;j++){
                s[j]=s[j+1];
            }
            i--;
        }   
    }

    //replaces all uppercase consonants with corresponding lowercase ones
    for(i=0;s[i]!='\0';i++){
        if(s[i]>=65 && s[i]<=90){
            s[i] +=32;
        }
    }

    //print string with "." before each consonant
    for(i=0;i<l-c;i++){
        printf(".%c",s[i]);
    }
    return 0;
}