#include<iostream>
using namespace std;;

int main(){
    int n;
    cin>>n;

    long long int num;
    for(int i=0;i<n;i++){

        cin>>num;
        int count = 0;
        long long int j = 1;

        while(j<=num){
            if(num%j==0){
                j++;
                count++;
            }
            else{
                j++;
                continue;
            }
        }
        if(count==3){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}