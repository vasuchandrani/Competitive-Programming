//1000
//incomplete

#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;    
    cin>>s;
    char ans[] = "hello";

    int j = 0, count = 0;
    for(int i=0;i<5;i++){
        while(s[j]!='\0'){
            if(ans[i]==s[j]){
                count++;
                j++;
                break;
            }
            else{
                j++;
            }
        }
    }   
    if(count==5){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0; 
}