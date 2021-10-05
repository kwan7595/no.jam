#include <iostream>
#include <vector>
using namespace std;
int sum_level(int k,int n, vector<vector<int>> apt) {
	int i = 0,sum=0;
	if(k>0) for (int j = 0; j < n; j++) sum += apt[k-1][j];
	return sum;
}
int sumup(vector<vector<int>> a) {
	int i = 0, j = 0, sum = 0;
	for (i = 0; i < a.size(); i++) {
		for (j = 0; j < a[0].size(); j++) sum += a[i][j];
	}
	return sum;
}
int main() {
	int k, n, i, j,t,p;

	//for (i = 0; i < 1; i++) {
		cin >> k;
		cin >> n;
		vector<vector<int>> apt;
		vector<int> line;
		apt.push_back(line);
		for (i = 0; i < n; i++) {
			apt[0].push_back(i);
		} // initializing 0th floor
		for (i = 0; i < k; i++) {
			for (j = 0; j < n; j++) {
				apt[i].push_back(sum_level(i, j, apt));
				cout << apt[i][j] << endl;
			}
		}
		cout<<sumup(apt)<<endl;
	//}
	return 0;
}