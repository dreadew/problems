#include<bits/stdc++.h>

using namespace std;

int lengthOfLongestSubstring(string s) {
	if (s.size() < 2) {
		return s.size();
	}
	
	int l = 0, r = 0, cur_ans = 0;
	string ans = "";

	while (r < s.size()) {
		if (ans.find(s[r]) == string::npos) {
			ans += s[r];
			r++;
		} else {
			ans = "";
			l++;
			r = l;
			ans += s[l] + s[r];
		}
		if (r-l > cur_ans) {
 			cur_ans = r-l;
		}
	}
	return cur_ans;
}

int main() {
	string s;
	cin >> s;
	cout << lengthOfLongestSubstring(s) << endl;
}