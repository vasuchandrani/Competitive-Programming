// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;

//     while (t--) {
//         int n;  cin>>n;
//         vector<int> a(n);
//         for (int i=0;i<n;i++) {
//             cin>>a[i];
//         }
//         unordered_set<int> ocp;
//         bool c = true;

//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }
//         ocp.insert(a[0]);

//         for (int i = 1; i < n; ++i) {
//             int seat = a[i];
//             if (ocp.count(seat - 1) == 0 && ocp.count(seat + 1) == 0) {
//                 c = false;
//                 break;
//             }
//             ocp.insert(seat);
//         }
        
//         if (c) {
//             cout<<"YES"<<endl;            
//         } 

//         else {
//             cout<<"NO"<<endl;
//         }
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
#define Mahack ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define lli long long int
#define ull unsigned long long
#define dd double
#define ld long double
#define in(n) int n; cin >> n;
#define inll(n) ll n; cin >> n;
#define readArr(arr, n) int arr[n]; for (int i = 0; i < n; i++) cin >> arr[i];
#define printarr(arr, n) for (int i = 0; i < n; i++) cout << arr[i] << ;
#define readVector(v, n) vi v(n); for(int i=0; i<n; i++) cin>>v[i];
#define vi vector<int>
#define vll vector<ll>
#define vs vector<string>
#define vvi vector<vector<int>>
#define vvll vector<vector<ll>>
#define vvs vector<vector<string>>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define mp make_pair
#define ff first
#define ss second
#define psb push_back  // O(1)
#define psf push_front // O(1)
#define pob pop_back  // O(1)
#define all(c) c.begin(), c.end()
#define allr(c) c.rbegin(),c.rend()
#define loop(i, in, n) for (int i = in; i < n; i++)
#define loopr(i, in, n) for (int i = in; i >= n; i--)
#define loopll(i, in, n) for (ll i = in; i < n; i++)
#define looplli(i, in, n) for (lli i = in; i >= n; i--)
#define sort(m) sort(m.begin(),m.end())
#define ps(x, y) fixed << setprecision(y) << x;
#define ub upper_bound
#define lb lower_bound
#define printArr(arr,low,high) for(int i =low;i<high;i++) cout<<arr[i];
#define mod 1000000007
#define yes cout << "YES" <<endl;
#define no cout << "NO"<<endl;
#define Hamesha_present  long long t;cin >> t;  while (t--)
#define PI 3.14159265358979323846264338327950288
#define EPS 1e-9
#define inf 1e18
#define mod 1000000007
void solve() {
    in(n)
        vector<int> a(n);
        unordered_set<int> ocp;
        bool c = true;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        ocp.insert(a[0]);

        for (int i = 1; i < n; ++i) {
            int seat = a[i];
            if (ocp.count(seat - 1) == 0 && ocp.count(seat + 1) == 0) {
                c = false;
                break;
            }
            ocp.insert(seat);
        }
        if (c) {
           yes
        } else {
            no
    }
}

int main() {
Mahack
Hamesha_present {
    solve();
}
return 0;
}