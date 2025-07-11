#include<iostream>
using namespace std;

int main(){

    int n, m;
    cin>>n>>m;

    int a[m+1];
    a[0] = 1;
    for(int i=1;i<=m;i++){
        cin>>a[i];
    }

    long long int time = 0;
    for(int i=1;i<=m;i++){
        if(a[i]<a[i-1]){
            time += (n + a[i] - a[i-1]);
        }
        else if(a[i]>a[i-1]){
            time += (a[i] - a[i-1]);
        }
        else{
            continue;
        }
    }
    cout<<time<<endl;

    return 0;
}