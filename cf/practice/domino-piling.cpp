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

void solve(int m, int n) {
    if(m%2==0 || n%2==0){
        cout << (m*n/2);
    }
    else cout << ((m/2)*n + (n/2)); 
    
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    setIO();

    int t, a;
    cin >> t >>a;
    solve(t, a);

    return 0;
}


