//1000

#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int exp[6]; //maximum possible expression =6 

    exp[0]= a+b+c;
    exp[1]= a*b*c;
    exp[2]= a+b*c;
    exp[3]= a*b+c;
    exp[4]= (a+b)*c;
    exp[5]= a*(b+c);

    int max=exp[0];
    for(int i=0;i<6;i++){
        if(max<exp[i]){
            max=exp[i];
        }
    }
    printf("%d",max);

    return 0;
}