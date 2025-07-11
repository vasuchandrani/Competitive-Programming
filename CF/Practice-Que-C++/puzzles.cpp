#include<iostream>
using namespace std;
 
int main(){
    int n,m;
    cin>>n>>m;
 
    int arr[m];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }

    for(int i=1;i<m;i++){
        int temp =arr[i];
        int j =i-1;
        while(j>=0){
            if(arr[j]>temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }   
            j--;
        }
        arr[j+1] = temp;
    }
    int min = arr[m-1];

    for(int i=0; (i+n-1)<m ;i++){
        int temp = arr[i+n-1] - arr[i];
        if(temp<min){
            min = temp;
        }
    }
    cout<<min;
    return 0;
}

