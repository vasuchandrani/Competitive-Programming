// #include<iostream>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n, k;
//         cin>>n>>k;
        
//         int a[n][n];
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 cin>>a[i][j];
//             }
//         }

//         for (int i = 0; i < n; i += k) {
//             for (int j = 0; j < n; j += k) {
//                 cout << a[i][j];
//             }
//             cout << endl;
//         }

//         // int row = n/k;
//         // int col = n/k;
//         // int i=0, j=0;
//         // while(row--){
//         //     col = n/k;
//         //     j = 0;
//         //     while(col--){
//         //         cout<<a[i][j];
//         //         j += k;
//         //     }
//         //     i += k;
//         //     cout<<endl;
//         // }
//     }
//     return 0;
// }

// if CF give the input as a matrix then upper code is valid, but :) ....***

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solveeee(int n, int k){
    
    vector<vector<char>> grid(n, vector<char>(n));

    // pehle isko matrix banao -_-
    for(int i=0;i<n;i++){
        string row;
        cin>>row;

        for(int j=0 ; j<n ; j++){
            grid[i][j] = row[j];
        }
    }

    // ab logic vala code likho :)
    for(int i=0; i<n ; i+=k){
        for(int j=0; j<n; j+=k){
            cout<<grid[i][j];
        }
        cout<<endl;
    }
}

int main()
{
    int t;
    cin>>t;

    while (t--){
        int n, k;
        cin >> n >> k;
        solveeee(n,k);
    }

    return 0;
}