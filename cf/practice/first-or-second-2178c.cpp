#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;


// ===== ORDERED SET (Policy Based) =====
// find_by_order(k)  - kth element (0 indexed)
// order_of_key(x)   - count of elements strictly less than x
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int,null_type,less<int>,
        rb_tree_tag,
        tree_order_statistics_node_update> ordered_set;

// ===== TYPES =====
#define int long long
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<pii> vpi;
typedef vector<vi> vvi;

// ===== MACROS =====
#define endl '\n'
#define pb push_back
#define pp pop_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()   // reverse sort
#define sz(x) (int)(x).size()
#define F first
#define S second
#define mp make_pair

// ===== LOOPS =====
#define rep(i,n) for(int i=0; i<n; i++)
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define ROF(i,a,b) for(int i=a; i>=b; i--)

// ===== CONSTANTS =====
const int MOD = 1e9 + 7;
const int MOD2 = 998244353;   // alternate mod
const int INF = 1e18;
const int NINF = -1e18;
const double PI = acos(-1.0);
const double EPS = 1e-9;      // floating point comparison
                              
// ===== MATH UTILS =====
int gcd(int a, int b){ return __gcd(a, b); }
int lcm(int a, int b){ return a / gcd(a,b) * b; }

// ===== BIT TRICKS =====
#define LSB(x) (x & (-x))              // lowest set bit - Fenwick tree
#define MSB(x) (31 - __builtin_clz(x)) // highest set bit position
#define popcnt(x) __builtin_popcount(x) // count of set bits
#define isPow2(x) (x && !(x & (x-1)))  // check power of 2

// ===== USEFUL FUNCTIONS =====
template<typename T>
bool chmax(T &a, T b){ return a < b ? a = b, 1 : 0; } // a = max(a,b)

template<typename T>
bool chmin(T &a, T b){ return a > b ? a = b, 1 : 0; } // a = min(a,b)

template<typename T>
void print(vector<T>& v){
    for(auto x : v) cout << x << " ";
    cout << endl;
}

template<typename T>
void printnl(vector<T>& v){           // print with newline
    for(auto x : v) cout << x << "\n";
}

// ===== MODULAR ARITHMETIC =====
int power(int base, int exp, int mod = MOD){  // fast power - O(log exp)
    int result = 1;
    base %= mod;
    while(exp > 0){
        if(exp & 1) result = result * base % mod;
        base = base * base % mod;
        exp >>= 1;
    }
    return result;
}

int modinv(int a, int mod = MOD){     // modular inverse - Fermat's little theorem
    return power(a, mod-2, mod);
}

int mAdd(int a, int b, int mod = MOD){ return (a + b) % mod; }
int mSub(int a, int b, int mod = MOD){ return ((a - b) % mod + mod) % mod; }
int mMul(int a, int b, int mod = MOD){ return (a % mod) * (b % mod) % mod; }

// ===== GRAPHS =====
// Adjacency list - int n = nodes, weighted/unweighted
// vector<vector<pii>> adj(n);  // weighted: {node, weight}
// vector<vi> adj(n);           // unweighted


// ===== __int128 =====
// when long long overflows
void print128(__int128 x){
    if(x < 0){ cout << '-'; x = -x; }
    if(x > 9) print128(x/10);
    cout << (char)('0' + x%10);
}

// // ===== ORDERED SET (Policy Based) =====
// // find_by_order(k)  - kth element (0 indexed)
// // order_of_key(x)   - count of elements strictly less than x
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,
//         rb_tree_tag,
//         tree_order_statistics_node_update> ordered_set;

// ===== DEBUG =====
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << endl
#define debugv(x) cerr << #x << " = "; for(auto i : x) cerr << i << " "; cerr << endl
#define debugp(x) cerr << #x << " = {" << x.F << ", " << x.S << "}" << endl
#else
#define debug(x)
#define debugv(x)
#define debugp(x)
#endif

// ===== IO =====
void setIO() {
    ios::sync_with_stdio(false);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

// void solve() {
//         int n;
//         cin >> n;
//         vi a(n,0);
//         rep(i, n) cin >> a[i];
//
//         vi suffix(n+1, 0);
//
//         ROF(i, n-1, 0) suffix[i] = suffix[i+1] + a[i];
//
//         int ans = -suffix[1];
//         int pa = 0;
//         FOR(j, 1, n){
//             ll X = a[0] + pa - suffix[j+1];
//             ans = max(ans, X);
//             pa += abs(a[j]);
//         }
//
//         cout << ans << endl;
// }


//better using less space
void solve() {
        int n;
        cin >> n;
        vi a(n,0);
        rep(i, n) cin >> a[i];
        
        int total = 0;
        rep(i, n) total += a[i];
        
        int ans = -(total - a[0]);

        int pa = 0;

        int suffVal = total - a[0];

        FOR(i, 1, n) {
            suffVal -= a[i];
            chmax(ans, a[0] + pa - suffVal);
            pa += abs(a[i]);

        }
    
        cout << ans << endl;
}

int32_t main() {
    setIO();
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}

