#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count1 = 0;
        int count2 = 0;

        int maxNum = 0;
        for(int i=0;i<n;i++){
            if(s[i] == '<'){
                count2 = 0;
                count1++;
            }
            else{
                count1 = 0;
                count2++;
            }
            maxNum = max(maxNum,(max(count1, count2)));
        }
        cout<<maxNum+1<<endl;
    }
}