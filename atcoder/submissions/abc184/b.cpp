#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <string>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;

template <class T>
inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template <class T>
inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

const ll INF = 1LL << 60;
ll n, x;
string s;
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    cin >> n >> x >> s;
    ll ans = x;
    rep(i, s.length()) {
        if (s[i] == 'x') {
            if (ans > 0) ans--;
        } else {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
