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

void solve(int &x) {
   int a, b, c;
   cin >> a >> b >> c;
   int sum;
   sum = a+b+c;
   if(sum > 1) x++;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    setIO();

    int t;
    cin >> t;
    int x=0;
    while (t--) solve(x);
    cout << x << '\n';
    return 0;
}


