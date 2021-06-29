#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	long long sum = 0;
	vector<int> odd_numbers;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (a % 2 == 0) {
			// add all the even values in the 'sum' variable
			sum += a;
		} else {
			// insert all the odd numbers in the 'odd_numbers' vector
			odd_numbers.emplace_back(a);
		}
	}
	// sort the vector in non-increasing order
	sort(odd_numbers.rbegin(), odd_numbers.rend());
	if ((int) odd_numbers.size() & 1) {
		// if the size of the 'odd_numbers' vector is odd, then we must remove 
		// last element (smallest) to make the sum even (that's why we sorted the
		// vector in non-increasing order to get the maximum sum possible)
		odd_numbers.pop_back();
	}
	for (int i = 0; i < (int) odd_numbers.size(); i++) {
		// calculate the sum of all the odd numbers together with the current sum
		sum += odd_numbers[i];
	}
	cout << sum << '\n';
	return 0;
}
