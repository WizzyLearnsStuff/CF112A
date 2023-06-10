#include<iostream>

using namespace std;

constexpr char lowercase(char a) {
	return (a < 97) ? a + 32 : a;
}

int main() {
	string a, b;

	cin >> a >> b;

	for (unsigned int i = 0; i < a.length(); i++) {
		char c = lowercase(a[i]);
		char d = lowercase(b[i]);

		if (c > d) {
			cout << "1";
			return 0;
		}

		if (c < d) {
			cout << "-1";
			return 0;
		}
	}

	cout << "0";
}
