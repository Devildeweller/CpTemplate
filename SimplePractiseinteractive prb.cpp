#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

#ifdef DevilDeweller
#include "debug.h"
#else
#define dbg(...) ;
#define debug(...) ;
#define crndl ;
#endif

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

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

int getRandomNumber(int l, int r) {return uniform_int_distribution<int>(l, r)(RNG);}

void query(int x){
    cout << "? " << x << endl;
}

struct Intreactor{
    int cqw,lqw;
    int hn;
    Intreactor(){
        lqw=6; cqw=0;
        hn=getRandomNumber(1,99);
    }
    void checktqw(){
        if(cqw >= lqw) {
            debug(Query_Limit_Reached,hn);
        }
        assert(cqw < lqw);
    }
    char makequery(int x){
        checktqw();
        cqw++;

        if(x < hn) return '<';
        else if(x > hn) return '>';
        else return '=';
    }
    void isvalid(int x){
        if(x == hn) {
            debug(Passed_For,hn);
        }
        if(x != hn) {
            debug(Failed_For,hn);
        }
        debug(Queryies_Used,cqw);
    }
};

void solve(){
    Intreactor starter = Intreactor();

    int l = 0, r = 100;
    while(r-l>1){
        int mid = (l+r)/2;
        char cf;
        //query(mid); cin >> cf; 
        cf=starter.makequery(mid);

        if(cf == '=') {
            //cout << "! " << mid << endl;
            starter.isvalid(mid);
            break;
        }
        else if(cf == '<') l = mid;
        else r = mid;
    }
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
    //cin >> t;
    for(int _=1;_<=t;_++){
        debug(TestCase,_);
        solve();
        crndl;
    }

    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";

    return 0;
}
