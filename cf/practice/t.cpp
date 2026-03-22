#include <bits/stdc++.h>
#include <iostream>
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

bool hasdigit(int a, int b) {
    while(a > 0) {
        if(a%10 == b) return true;
        a /= 10;
    }
    return false;
}

void solve() {
    int a;
    cin >> a;
    for(int y = 0; y <= 9; ++y) {
        if(hasdigit(a, y)) {
            cout << y << '\n';
            break;
        }
    } 
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


