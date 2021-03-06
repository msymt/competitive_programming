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

map<ll, vector<int>> mp;
int main() {
    ll n, q;
    cin >> n >> q;
    for (ll i = 0; i < n; i++) {
        ll a;
        cin >> a;
        mp[a].push_back(i + 1);
    }
    for (ll i = 0; i < q; i++) {
        ll x, k;
        cin >> x >> k;
        if (mp[x].size() < k) {
            cout << -1 << endl;
        } else {
            cout << mp[x][k - 1] << endl;
        }
    }
    return 0;
}
