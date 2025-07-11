#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int a,b;
    int count = 0;
    int capacity = 0;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        count -=a;
        count +=b;
        if(capacity < count){
            capacity = count;
        }
        else{
            continue;
        }
    }
    cout<<capacity;
    return 0;
}