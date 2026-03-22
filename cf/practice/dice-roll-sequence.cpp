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

// void solve() {
//    int n;
//    cin >> n;
//    vector<int> a(n,0);
//
//    for(int i = 0; i < n; ++i){
//         cin >> a[i]; 
//    }
//
//     if(n == 1) {
//        cout << 0 << endl;
//        return;
//    }
//
//     //now lets check the codition for final ans 
//     int count{0};
//     for(int x = 1; x < n; ++x){
//         if(a[x-1] + a[x] == 7 or a[x-1] == a[x] ){
//             a[x] = 0;
//             count++;
//         }
//     }
//     cout << count << endl;
// }



// method 2 without any space

void solve(){
    int n;
    cin >> n;
    int prev{0};
    int curr, count{0};
    for(int i = 0; i < n; ++i){
        cin >> curr;
        if(prev != 0 && (prev + curr == 7 || prev == curr)){
            curr = 0;
            count++;
        }
        prev = curr;
    }
    cout << count << endl;
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


