#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        int a = 1, b = 1, c = 1;

        int count = 0;
        while(a < x-b-c && a <= ((n - b*c)/(b + c)) ){
            if((a + b + c <= x) && (a*b + b*c + c*a <= n)){
                count++;
                a++;
            }
            else{break;}
        }
        while(b < x-a-c && b <= ((n - a*c)/(a + c))){
            if((a + b + c <= x) && (a*b + b*c + c*a <= n)){
                count++;
                b++;
            }
            else{break;}
        }while(c < x-a-b && c <= ((n - b*a)/(b + a))){
            if((a + b + c <= x) && (a*b + b*c + c*a <= n)){
                count++;
                c++;
            }
            else{break;}
        }
        count *= 3;
        while((a + b + c <= x) && (a*b + b*c + c*a <= n)){
            a++;
            b++;
            c++;
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}