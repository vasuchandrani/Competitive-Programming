#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    int a[t];
    for(int i=0;i<t;i++){
        cin>>a[i];
    }
    int max = 0;
    int count = 0;
    for(int i=0;i<t;i++){
        int j = i+1;
        count = 1;
        while(a[i]<a[j] && j<t){
            count++;
            j++;
            i++;
        }
        if(max<count)
            max = count;
        else
            continue;
    }    
    cout<<max;
    return 0;
}