#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){ 
        int a[3];
        for(int i=0;i<3;i++){
            cin>>a[i];
        }
        int temp = a[0];    
        int cnt = 0;     
        for(int i=1;i<3;i++){
            if(a[i] != 0 && a[i] == temp) {
                cnt++;
            }
        }
        if(cnt == 2){
            cout<<-1<<endl;
            return 0;
        } 

        int pair = 0;
        for(int i=0;i<2;i++) {
            
        }
    }
}