#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int a[n], b[n];

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }

        int first = 0, second = 0;
        int negative = 0, positive = 0;
        for (int i=0;i<n;i++){
            if(a[i]!=b[i]){
                if(a[i]>b[i]) first += a[i];
                else second += b[i];
            }
            else{
                if(a[i]<0 && b[i]<0)
                    negative++;
                else if(a[i]>0 && b[i]>0) 
                    positive++;
            }
        }
        if(first>=second){
            first -= negative;
            second +=positive;
        }
        else{
            second -= negative;
            first += positive;
        }

        if(first<second){
            cout<<first<<endl;
        }
        else{
            cout<<second<<endl;
        }
    }
    return 0;
}