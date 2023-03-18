#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

using vi = vector<int>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t; cin >> t;
	while (0 < (t--)) {
		auto x = vi(10);
		for (auto i = 0; i < 10; ++i) {
			cin >> x[i];
		}

		sort(x.begin(), x.end(), greater());

		cout << x[2] << '\n';
	}

	return 0;
}