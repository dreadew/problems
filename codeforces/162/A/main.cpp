#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> nums) {
	int l = -1, r = nums.size() - 1, count = 0;

	for (int i = 0; i < nums.size(); i++) {
		if (nums[i] == 1) {
			if (l == -1) {
				l = i;
			}
			r = i;
		}
	}

	for (int i = l; i < r; i++) {
		if (nums[i] == 0) {
			count++;
		}
	}

	cout << count << endl;
}

int main() {
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		vector<int> nums;

		for (int j = 0; j < n; j++) {
			int val;
			cin >> val;
			nums.push_back(val);
		}

		solve(nums);
	}
}