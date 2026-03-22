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

void solve(int n, int k, int &a) {
    vector<int> scores(n);
    for(int i=0; i<n; ++i) {
        cin >> scores[i];
    }
    for (int score:scores) {
        if (score>=scores[k-1] && score > 0) a++;
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    setIO();

    int t, k, a=0;
    cin >> t >> k;
    solve(t, k, a);
    cout << a;
    return 0;
}


