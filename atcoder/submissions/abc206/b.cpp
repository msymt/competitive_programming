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
ll n;
ll ans = 0LL;
ll MAXT = 1e+9;
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    cin >> n;
    MAXT += 1000;
    for (ll i = 1LL; i < MAXT; i++) {
        ans += i;
        if (ans >= n) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
