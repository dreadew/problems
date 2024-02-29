#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair <int, int> pii;
typedef vector<int> vi;

#define int ll
#define pb push_back
#define F first
#define S second
#define _sz(x) ((int)x.size())

int32_t main() {
	int t;
	cin >> t;
	
	while(t--) {
		int n, k, s = 0;

		cin >> n >> k;

		vi a, x, c;
		bool f = false;
		
		for (int i = 0; i < n; i++) {
			int val;
			cin >> val;
			a.pb(val);
		}

		for (int i = 0; i < n; i++) {
			int val;
			cin >> val;
			x.pb(val);
		}
		
		for (int i = 0; i <= n; i++) {
			c.pb(0);
		}

		for (int i = 0; i < n; i++) {
			c[abs(x[i])] += a[i];
		}

		for (int i = 0; i <= n; i++) {
			s += c[i];
			if (s > i * k) f = true;
		}

		cout << (f ? "NO" : "YES") << endl;
	}
}