#include <iostream>
#include<vector>
using namespace std;
long long sum(vector<int>& a) {
	long long s = 0;
	for (int i = 0; i < a.size(); i++) {
		s += a[i];
	}
	return s;
}
