#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
	for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix.size(); j++) {
                if (j > i) {
                    swap(matrix[i][j], matrix[j][i]);
                }
            }
            for (int j = 0; j <= matrix.size()/2; j+= 2) {
                swap(matrix[i][matrix.size()-1-j], matrix[i][j]);
            }
        }
}


int main() {
	vector<vector<int>> matrix = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	rotate(matrix);
	for (int i = 0; i < matrix.size(); i++) {
		for (int j = 0; j < matrix.size();j ++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}