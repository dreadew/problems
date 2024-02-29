#include<bits/stdc++.h>
using namespace std;

long divide(long dividend, long divisor) {
	long quotient = dividend / divisor;
	if (quotient > INT32_MAX - 1) {
		if (dividend < 0 && divisor < 0) {
			return INT32_MAX;
		}
		return INT32_MAX;
	} else if (quotient < INT32_MIN) {
		return INT32_MIN;
	}
	return quotient;
}

int main() {
	long dividend, divisor;
	cin >> dividend >> divisor;
	cout << divide(dividend, divisor) << endl;
}