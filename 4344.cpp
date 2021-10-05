#include <iostream>
#include <vector>
using namespace std;
double per(vector<int> a) { // counting number of student whose score is over the average
	int i = 0, sum = 0;
	double avg = 0, over=0;
	for (i = 0; i < a.size(); i++) sum += a[i];
	avg = sum / i;
	for (i = 0; i < a.size(); i++) {
		if (a[i] > avg) over++;
	}
	return  over/i;
}
int main() {
	int t, n,score;
	vector<int> avg;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> score;
			avg.push_back(score);
		}
		printf("%.3f%%\n", 100*per(avg));
		avg.clear(); // initializing avg vector
		avg.resize(0);
	}
}