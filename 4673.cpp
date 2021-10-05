#include <iostream>
#include <string>
#include <vector>
using namespace std;
int generator(int a) { // a is a generator of sum 
	int sum = 0;
	vector<int> t;
	string s = to_string(a);
	for (char c : s) t.push_back(c);
	for (int j = 0; j < t.size(); j++) sum += int(t[j] - '0');
	return sum;
}
int main() {
	int i = 0, j = 0, counter= 0;
	for (i = 1; i < 5; i++) {
		for (j = 1; j < i; j++) {
			if (generator(j) == i) counter++; // if there is j such that generates i, i is not self number. how should i define this condition??
		}
		if (counter == 0) cout << i << endl;
		counter = 0;
	}
	return 0;
}
