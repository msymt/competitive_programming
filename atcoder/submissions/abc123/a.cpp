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

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    vector<int> a;
    rep(i, 5) {
        int p;
        cin >> p;
        a.push_back(p);
    }
    int k;
    cin >> k;
    rep(i, 4) for (int j = 1; j < 5; j++) {
        if (a[j] - a[i] > k) {
            cout << ":(" << endl;
            return 0;
        }
    }
    cout << "Yay!" << endl;

    return 0;
}
