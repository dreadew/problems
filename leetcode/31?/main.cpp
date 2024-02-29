#include<bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> &nums) {
	bool r = true, t = true;
	int l = 0;
	for (int i = 0; i < nums.size(); i++) {
		for (int j = i + 1; j < nums.size(); j++) {
			if (!(nums[i] > nums[j])) {
				r = false;
				break;
			}
		}
	}
	if (r) {
		sort(nums.begin(), nums.end());
		return;
	}

	for (int i = 0; i < nums.size(); i++) {
		for (int j = i + 1; j < nums.size(); j++) {
			if (!(nums[i] < nums[j])) {
				l = i;
				break;
			}
		}
	}
	if (l != 0) {
		swap(nums[0], nums[l]);
		return;
	}
	swap(nums[nums.size()-2], nums[nums.size()-1]);
}


int main() {
	vector<int> nums;
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int val;
		cin >> val;
		nums.push_back(val);
	}
	nextPermutation(nums);
	for (int i = 0; i < nums.size(); i++) {
		cout << nums[i] << " ";
	}
}