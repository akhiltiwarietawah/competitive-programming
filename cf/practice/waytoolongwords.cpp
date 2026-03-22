#include <bits/stdc++.h>
#include <string>
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
    string s;
    cin >> s;
    if(s.length() <= 10) {
        cout << s << '\n';
        return;
    }
    cout << s[0] << (s.length()-2) << s[s.length()-1] << '\n';
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    setIO();

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}


