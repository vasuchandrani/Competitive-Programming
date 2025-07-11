#include<iostream>
using namespace std;

int Max(int a[], int n){
    int max = 0;
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    return max;
}

int main(){

    int t;
    cin>>t;
    while(t--){

        int l, n;
        cin>>l>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int max = Max(a, n);
        
        int count = 0;
        int flag = 0;
        for(int i=0;i<n;i++){
            if(a[i]==max){
                if(flag==0){    
                    flag = 1;
                    continue;
                }
                else{
                    count += ((2*a[i] - 1));
                }
            }
            else if(a[i] == 1){
                count++;
            }
            else{
                count += ((2*a[i] - 1));
            }
        }
        cout<<count<<endl;
    }
    return 0;
}