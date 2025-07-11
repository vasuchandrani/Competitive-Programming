//800

//method -1

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a,b,c;
    int count[n];

    for(int i=0;i<n;i++){
        count[i]=0;
        scanf("%d%d%d",&a,&b,&c);
        if(a+b+c>=2 && a+b+c<4){
            count[i]=1;
        }
    }

    int x=0;
    for(int i=0;i<n;i++){
        if(count[i]==1){
            x++;
        }
    }
    printf("%d",x);
}


//method -2

// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int t,count[n],check[n];
//     for(int i=0;i<n;i++){
//         count[i]=0,check[i]=0;

//         for(int j=0;j<3;j++){
//             scanf("%d",&t);
//             if(t==0){
//                 count[i]++;
//             }
//         }
//         if(count[i]<2){
//             check[i]=1;       
//         }
//     }

//     int x=0;
//     for(int i=0;i<n;i++){
//         if(check[i]==1){
//             x++;
//         }
//     }
//     printf("%d",x);
// }

