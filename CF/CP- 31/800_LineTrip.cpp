#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n, x;
    while(t--){
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int max = 2*(x-a[n-1]);
        int count = 0;
        int j = 0;
        for(int i=0;i<=x;i++){
            
            if(i==a[j]){
                j++;
                if(max < count){
                    max = count;
                }
                count = 0;
            }count++;  
        }
        cout<<max<<endl;
    }
}