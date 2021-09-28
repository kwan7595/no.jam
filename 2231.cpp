#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
	string s;
	int n = 0, i = 1, m = 0;
	cin >> n;
	while (i < n) {
		m = i;
		s = to_string(i);
;		vector<int> a;
		for (char c : s) a.push_back(c);
		for (int j = 0; j < a.size(); j++) m += int(a[j] - '0'); cout << i << " " << m << endl;
		if (m == n) {
			cout << i;
			return 0;
		}
		i++;
	}
	cout << 0;
	return 0;
}