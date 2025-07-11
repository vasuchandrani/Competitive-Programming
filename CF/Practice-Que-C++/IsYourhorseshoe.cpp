#include<iostream>
using namespace std;

int main(){
    int a[4];
    for(int i=0;i<4;i++){
        cin>>a[i];
    }

    for(int i=1;i<4;i++){
        int temp = a[i];
        int j = i-1;
        while(j>=0){
            if(a[j]>temp){
                a[j+1] = a[j];
            }
            else{
                break;
            }
            j--;
        }
        a[j+1] = temp;
    }

    int NumOfShoe = 0;
    for(int i=0;i<3;i++){
        if(a[i]==a[i+1]){
            NumOfShoe++;
        }
    }
    cout<<NumOfShoe<<endl;
    return 0;
}