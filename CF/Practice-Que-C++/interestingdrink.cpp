//1100
//time limit exceeded

#include<iostream>
using namespace std;
 
int main(){
    int n;
    cin>>n;

    int x[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    int q;
    cin>>q;

    int m[q];
    for(int i=0;i<q;i++){
        cin>>m[i];
    }
    
    int count[q];
    for(int i=0;i<q;i++){
        count[i]=0;
        for(int j=0;j<n;j++){
            if(m[i]>=x[j]){
                count[i]++;
            }
        }
        cout<<count[i]<<endl;
    }

    for(int i=0;i<q;i++){
    }
 
    return 0;
}