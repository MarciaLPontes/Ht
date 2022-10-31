#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
typedef long double lld;
#define endl '\n';
 
 
#define fast               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define all(v) ((v).begin()), ((v).end())
#define pb push_back
#define MP make_pair
#define F first
#define S second
#define py cout << "YES\n";
#define pn cout << "NO\n"
#define clr(x, val) memset(x, val, sizeof(x))
#define OUT 0
#define IN 1
#define rep(i, m) for(ll i=0;i<(m);++i)
#define rep_inv(i, m) for(ll i=(m);i>=0;--i)
typedef pair<int, int> II;
typedef pair<int, pair<int, int> > PIP;
const int MOD = 1e9 + 7;
 
int dy[] = {1, -1, 0, 0};
int dx[] = {0, 0, 1, -1};
 
 
int main() {
    fast
    int t = 1;
    // cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; ++i) cin >> v[i];
        sort(all(v));
//        ll mx = v[n - 2];
        bool ok = false;
        for (int i = 1; i < n - 1; ++i) {
            for (int j = 0; j < i; ++j) {
                if(v[i] + v[j] > v[i + 1]){
                    ok = true;
                    break;
                }
            }
        }
        cout << (ok ? "YES" : "NO");
    }
    return 0;
}
