#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define pb push_back
#define all(x) x.begin(), x.end()

void setIO() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

void solve(int &a) {
    string s;
    cin >> s;
    if(s == "X++" || s == "++X") a+=1;
    else a-=1;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    setIO();

    int t, x=0;
    cin >> t;
    while (t--) solve(x);
    cout << x;
    return 0;
}


