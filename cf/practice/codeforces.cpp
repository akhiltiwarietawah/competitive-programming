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

void solve() {
    string a, b;
    cin >> a >> b;
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    if(a==b) cout << 0;
    else if (a>b) cout <<1;
    else cout << -1;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    setIO();

    solve();

    return 0;
}


