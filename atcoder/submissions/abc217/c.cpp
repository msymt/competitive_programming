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
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    vector<int> p(n), q(n);
    for (auto& x : p) cin >> x, --x;
    rep(i, n) q[p[i]] = i;
    rep(i, n) cout << q[i] + 1 << " \n"[i == n - 1];
    return 0;
}
