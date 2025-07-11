#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int term;
        cin>>term;

        int Kth = 0;
        while(term--){
            Kth++;
            while(Kth%3 == 0 || Kth%10 == 3){
                Kth++;
            }
        }
        cout<<Kth<<endl;
    }
}