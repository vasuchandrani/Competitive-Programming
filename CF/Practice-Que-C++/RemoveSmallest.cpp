#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=1;i<n;i++){
            int temp =v[i];
            int j =i-1;
            while(j>=0){
                if(v[j]>temp){
                    v[j+1] = v[j];
                }
                else{
                    break;
                }   
                j--;
            }
            v[j+1] = temp;
        }

        int count = 0;
        for(int i=0;i<(n-1);i++){
            if(v[i+1]-v[i] <= 1){
                count++;
            }
        }
        if(count==(n-1)) 
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}