#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
int main() {
    string s, t;
    cin >> s >> t;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end(), greater<char>());
    if (s < t)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
