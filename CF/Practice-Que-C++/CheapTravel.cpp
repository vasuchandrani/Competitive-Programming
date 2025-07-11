//1200

#include<iostream>
using namespace std;

int main(){

    int n, m, a, b;
    cin>>n>>m>>a>>b;

    int miniCost = n*a;

    int temp = n;
    int M_tickets = 0;
    int x;
    while(temp>0){
        if(temp>m){
            temp -= m;
            M_tickets++;
        }
        else{
            x = M_tickets + 1;
            break;
        }
    }
    miniCost = (temp*a + M_tickets*b) > miniCost ? miniCost:(temp*a + M_tickets*b);
    miniCost = miniCost > (x*b) ? (x*b):miniCost;

    cout<<miniCost;
}