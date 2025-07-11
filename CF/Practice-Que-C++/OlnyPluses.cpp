#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int a, b, c;
    while(t--){

        cin>>a>>b>>c;
        int maxBanana = 0;
        for(int i=0;i<=5;i++){
            for(int j=0;j<=5-i;j++){
                int k = 5 - i - j;
                maxBanana = maxBanana > ((a+i)*(b+j)*(c+k)) ? maxBanana : ((a+i)*(b+j)*(c+k));
            }
        }
        cout<<maxBanana<<endl;
    }
    return 0;
}