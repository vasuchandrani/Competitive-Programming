#include<bits/stdc++.h>
using namespace std;

void solvee() {
    int n;  cin>>n;
    vector<int> arr(n);
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }

    int m = 0;
    stack<pair<int, int>> st;
    for(int i=1;i<n;i++){
        
        int temp = arr[i];
        int j = i - 1;
        while(j>=0){
            
            if(arr[j]>temp){
                // overtake
                st.push({arr[j], temp});
                m++;
                arr[j+1] = arr[j];
            }
            else{
                break;
            }   
            j--;
        }
        arr[j+1] = temp;
    }

    cout<<m<<endl;
    while (m && !st.empty()) {
        cout<<st.top().first<<" "<<st.top().second<<endl;
        st.pop();
    }
}

int main () {
    // int t;  cin>>t;
    // while (t--) {
        solvee();
    // }
}