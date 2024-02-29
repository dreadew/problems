#include<bits/stdc++.h>
using namespace std;
bool check(string s) {
        string rev = s;
        reverse(rev.begin(), rev.end());
        return s == rev;
    }
    string longestPalindrome(string s) {
        int l = 0, r = 0;
        string ans, cur;
        cur.resize(2);
        for (int i = 0; i < s.size(); i++) {
            r = s.size() - i - 1;
            cur += s[l] + s[r];
            cout << cur << endl;
            if (check(cur)) {
                l = i;
                r = r;
                break;
            }
        }
		cout << l << " " << r;
        return ans;
    }
int main() {
	string s;
	cin >> s;
	cout << longestPalindrome(s) << endl;
}