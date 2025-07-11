#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        string a;
        cin>>a;

        int zeros = 0, ones = 0;
        int count = 0;
        for(int i=0;i<=n;i++){
            if(a[i] == '1' && count == 0){
                ones++;
            }
            else if(a[i] == '1' && count != 0){
                ones++;
                zeros++;
                count = 0;
            }
            else if(a[i] == '0'){
                count++;
            }
            else if(i==n){
                if(count != 0)
                    zeros++;
            }
        }

        if(zeros<ones){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}