/****************************
Author -> Rajneesh Chaudhary
****************************/
 
#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define dbg(...) ; 
#define debug(...) ; 
#define crndl ; 
#endif

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

#define  endl "\n"
//#define int long long
 
const int mod=100000007;
const long long INF=LLONG_MAX >> 1;

void solve(){
    
}
 
int32_t main(){
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("io/input.txt", "r", stdin);
    freopen("io/output.txt", "w", stdout);
    freopen("io/error.txt", "w", stderr);
    #endif
 
    int t=1;
    //cin >> t;
    while(t--)
        solve();
    
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";

    return 0;
}
