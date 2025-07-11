//1300

#include<stdio.h>
#include<string.h>

int main(){
    int n;
    scanf("%d",&n);

    char name[n][33];
    for(int i=0;i<n;i++){
        scanf("%s",name[i]);
    }
    int count;
    for(int i=0;i<n;i++){
        count=0;
        for(int j=0;j<i;j++){
            int a = strcmp(name[i],name[j]);
            if(a==0){
                count++;
            }
        }
        if(count){
            printf("%s%d\n",name[i],count);
        }
        else{
            printf("OK\n");
        }
    }
    return 0;
}