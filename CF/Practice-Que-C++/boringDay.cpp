#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;
    int n, l, r;
    while(t!=0){

        cin>>n>>l>>r;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int sum = 0;
        int count = 0;
        for(int i=0;i<n;i++){
            if((a[i]>=l && a[i]<=r) && sum == 0){
                count++;
            }
            else if(sum==0 && a[i]>r){
                continue;
            }
            else{
                sum += a[i];
                if(sum>=l && sum<=r){
                    count++;
                    sum = 0;
                    continue;
                }
                else if(sum>r){
                    sum = 0;
                    i--;
                    continue;
                }
                else if(sum<l){
                    continue;
                }
            }
        }
        cout<<count<<endl;
        t--;
    }
    return 0;
}