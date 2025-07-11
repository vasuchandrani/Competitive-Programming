#include<bits/stdc++.h>
using namespace std;

char solvee() {
    
    vector<vector<char>> grid(8, vector<char>(8));

    string blue = "BBBBBBBB";
    string red = "RRRRRRRR";

    for (int i=0; i<8; i++) {
        for (int j=0; j<8; j++) {
            cin>>grid[i][j];
        }
    }

    string temp;
    for (int i=0; i<8; i++) {

        temp = "";
        for (int j=0; j<8; j++) {
            temp.push_back(grid[i][j]);
        }
        if (temp == red) {
            return 'R';
        }
    }

    for (int i=0; i<8; i++) {

        temp = "";
        for (int j=0; j<8; j++) {
            temp.push_back(grid[j][i]);
        }
        if (temp == blue) {
            return 'B';
        }
    }

    return 'N';
}

int main() {
    int t;  cin>>t;
    while(t--) {
        cout<<solvee()<<endl;;
    }
}