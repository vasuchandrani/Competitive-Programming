#include<iostream>
#include<iomanip>
using namespace std;;

int main(){
    int n, l;
    cin>>n>>l;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=1;i<n;i++){
        int temp =a[i];
        int j =i-1;
        while(j>=0){
            if(a[j]>temp){
                a[j+1] = a[j];
            }
            else{
                break;
            }   
            j--;
        }
        a[j+1] = temp;
    }

    int max = 0;
    for(int i=0; i<n-1 ;i++){
        if((a[i+1] - a[i])>max){
            max = a[i+1] - a[i];
        }
    }

    double first = a[0];
    double ans = (double)max/2;

    ans = first>ans?first:ans;
    double temp = l-a[n-1];
    ans = ans>temp?ans:temp;
        
    cout<<fixed<<setprecision(10)<<ans<<endl;
    
    return 0;
}
