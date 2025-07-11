#include <bits/stdc++.h>
using namespace std;

int partition(int a[],int s,int e){
    
    int pivot = a[s];
    int count = 0;
    
    for(int i=s+1;i<=e;i++){
        if(a[i]<pivot){
            count++;
        }
    }
    int pivotIndex = s + count;
    swap(a[pivotIndex],a[s]);

    //left aur right vale part ko dekhte hai
    int i = s, j = e;
    while(i<pivotIndex && j>pivotIndex){

        while(a[i]<pivot){
            i++;
        }
        while(a[j]>pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(a[i++],a[j--]);
        }
    }
    return pivotIndex;
}
void quickSort(int arr[],int s,int e)
{

    if(s>=e){
        return;
    }
    else{
        //partition karenge
        int p = partition(arr,s,e);
        //left vala part sort karenge
        quickSort(arr,s,p-1);
        //right vala part sort kaenge 
        quickSort(arr,p+1,e);
    }
}
             
 
int main() {
    int arr[] = {};
    int n=sizeof(arr)/sizeof(arr[0]);

    quickSort(arr, 0, n-1);

    cout<<"Sorted Array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}