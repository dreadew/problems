#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
	vector<vector<int>> ans;
	if (nums.size() < 3) {
		return ans;
	}

	sort(nums.begin(), nums.end());
	int s;

	for (int i = 0; i < nums.size(); i++) {
		int j = i + 1, k = nums.size() - 1;
		while (j < k) {
			s = nums[i] + nums[j] + nums[k];
			if (s == 0) {
				ans.push_back({nums[i], nums[j], nums[k]});
				j++;
				k--;
				continue;
			}
			if (s < 0) {
				j++;
				continue;
			}
			k--;
		}
	}

	return ans;
}

int main() {
	vector<int> a = {-1, 0, 1, 2, -1, -4};
	vector<vector<int>> ans = threeSum(a);

	for (int i = 0; i < ans.size(); i++) {
		for (int j = 0; j < ans[i].size(); j++) {
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}
}