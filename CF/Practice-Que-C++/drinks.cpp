#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];
    int count = 0;
    int sum = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum += a[i];
        count++;
    }
    double ans = (double)sum/count;
    cout<<fixed<<setprecision(12)<<ans<<endl;
    return 0;
}