#include<bits/stdc++.h>

using namespace std;

int reverse (int x) {
	int rev = 0;

	while (x) {
		if (rev > INT32_MAX/10 || rev < INT32_MIN/10) {
			return 0;
		}
		rev = rev * 10 + x % 10;
		x /= 10;
	}

	return rev;
}

int main() {
	int x;
	cin >> x;
	cout << reverse(x) << endl;
}

/*
-2.143.847.412

1.534.236.469
463.847.412

-2.147.483.648
*/