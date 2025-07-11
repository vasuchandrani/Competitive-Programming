#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        int sum1 = 0;
        int sum2 = 0;
        int x=0;
        while(x<6){
            if(x>2){
                sum2 += a[i]%10;
                a[i] /= 10;
            }
            else{
                sum1 += a[i]%10;
                a[i] /= 10;
            }
            x++;
        }
        if(sum1 == sum2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}