#include <bits/stdc++.h>
using namespace std;

#ifdef DevilDeweller
#include "debug.h"
#else
#define dbg(...) ; 
#define debug(...) ; 
#define crndl ; 
#endif

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
 
#define  endl "\n"
#define pb push_back
#define all(x) begin(x), end(x)
#define sz(x) (int) (x).size()

#define f first
#define s second
#define mp make_pair
//#define int long long

using vi = vector<int>;
using pi = pair<int,int>;
 
const int mod=1e9+7;
const long long INF=LLONG_MAX >> 1;

void solve(){

}
 
int32_t main(){
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    #ifdef DevilDeweller
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif
 
    int t=1;
    cin >> t;
    for(int _=1;_<=t;_++){
        debug(TestCase,_);
        solve();
        cout << endl;
        crndl;
    }
    
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";

    return 0;
}
