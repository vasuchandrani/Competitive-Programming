//1100

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    
    int frd; 
    int freq[5]={0};
    for(int i=0;i<n;i++){
        scanf("%d",&frd);
        freq[frd]++;
    }

    int taxi=0;
    taxi +=freq[4];
    taxi +=freq[3];
    if(freq[2]%2==0)
        taxi +=(freq[2]/2);
    else{
        taxi +=(freq[2]/2)+1;
        freq[1] -=2;
    }
    if(freq[1]>freq[3]){
        freq[1] =freq[1]-freq[3];
        if(freq[1]<=4)
            taxi++;
        else if(freq[1]%4==0)
            taxi +=(freq[1]/4);
        else
            taxi +=(freq[1]/4)+1;

    }

    printf("%d",taxi);
    return 0;   
}