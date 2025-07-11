//wrong in furthur test cases

#include<iostream>
using namespace std;;

int main(){
    int t;
    cin>>t;

    while(t--){

        int n, m;
        cin>>n>>m;
        char a[n][m];
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>a[i][j];
            }
        }
        int count = 0;
        int row[n] = {0}, col[m] = {0};
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(a[i][j]=='#'){
                    row[count] = i;
                    col[count] = j;
                    count++;
                }
            }
        }

        if(count == 1){
            cout<<row[0]<<" "<<col[0]<<endl;
        }
        else{
            int temp = (count/2);
            cout<<row[temp]<<" "<<col[temp]<<endl;
        }
    }
    return 0;
}