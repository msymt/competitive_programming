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
    int n;
    cin >> n;
    vector<int> a(n + 1);
    rep(i, 4 * n - 1) {
        int b;
        cin >> b;
        a[b]++;
    }
    for (int i = 1; i <= n; i++) {
        if (a[i] == 3) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}