#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while (t--) {
        int points = 0;
        char a[10][10];
        for (int i=0;i<10;i++) {
            for (int j=0;j<10;j++) {
                cin>>a[i][j];
                if(a[i][j] == '.') continue;
        
                if (i==0 || j==0 || i==9 || j==9){
                    points += 1;
                }
                else if(((i==1 || i==8) && j>0 && j<9) || ((j==1 || j==8) && i>0 && i<9)) {
                    points += 2;
                }
                else if(((i==2 || i==7) && j>1 && j<8) || ((j==2 || j==7) && i>1 && i<8)) {
                    points += 3;
                }
                else if(((i==3 || i==6) && j>2 && j<7) || ((j==3 || j==6) && i>2 && i<7)) {
                    points += 4;
                }
                else {
                    points += 5;
                }
            }
        }
        cout<<points<<endl;
    }
    return 0;
}