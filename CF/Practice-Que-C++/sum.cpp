#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int a[3];
    while(t--){
        for(int i=0;i<3;i++){
            cin>>a[i];
        }
        int sum = 0;
        int max = 0;
        for(int i=0;i<3;i++){
            if(max<a[i]){
                sum += max;
                max = a[i];
            }
            else{
                sum += a[i];
            }
        }

        if(sum == max){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}