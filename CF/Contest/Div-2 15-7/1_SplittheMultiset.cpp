#include<iostream>
using namespace std;

int count = 0;
void Count(int n, int k){

    count++;
    int sum = 0;
    sum += (k-1)*1;
    int temp = (n-sum); 

    if(temp <= 1){
        cout<<count<<endl;
        count = 0;
    }
    else{
        Count(temp, k);
    }
}
int main(){
    int t;
    cin>>t;
    int  n, k;
    while(t--){
        cin>>n>>k;
        
        if(n==1){
            cout<<0<<endl;
        }
        else{
            Count(n, k);
        }
    }
    return 0;
}