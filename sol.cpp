#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> a(n), b(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	// fill vector 'b' with values from 0 to ('n' - 1)
	iota(b.begin(), b.end(), 0);
	// sort vector 'b' depending on the values from vector 'a'
	sort(b.begin(), b.end(), [&](int i, int j) {
		return (a[i] > a[j]);
	});
	long long res = 0;
	for (int i = 0; i < n; i++) {
		// calculate 'res' by getting the sum of every element multiplied to 'i' and added to 1
		res += (a[b[i]] * i + 1);
	}
	// output 'res'
	cout << res << '\n';
	// output the values in vector 'b' (all values will be added by 1)
	for (int i = 0; i < n; i++) {
		cout << b[i] + 1 << " ";
	}
	cout << '\n';
	return 0;
}
