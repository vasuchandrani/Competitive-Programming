//900(A)

#include<iostream>
using namespace std;;

int additionOf(int a[], int start, int end){

    int sum = 0;
    for(int i=start;i<end;i++){
        sum += a[i];
    }
    return sum;
}

int additionOf(int a[], int end){

    int sum = 0;
    for(int i=0;i<=end;i++){
        sum += a[i];
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n-1;i++){
        bool swapped =false;
        for(int j=0;j<n-1-i;j++){
            if(a[j]<a[j+1]){
                swap(a[j],a[j+1]);
                swapped =true;
            }
        }
        if(swapped==false){
            break;
        }
    }

    int answer;
    for(int i=0;i<n;i++){
        if(additionOf(a,i)>additionOf(a,i+1,n)){
            answer = i+1;
            break;
        }
        else{
            continue;
        }
    }
    cout<<answer;
}