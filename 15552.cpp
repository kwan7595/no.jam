#include <iostream>
#include <string>
using namespace std;
int main() {
	int i = 0, t = 0,a,b;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> t;
	for (i = 0; i < t; i++) {
		cin >> a >> b;
		cout << a + b << "\n";
	}
	return 0;
}