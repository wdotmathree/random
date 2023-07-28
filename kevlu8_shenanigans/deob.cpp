#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;

int main() {
	string s;
	vector<int> a;
	getline(cin, s);
	int curr = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '\\' || s[i] == 'x') {
			if (curr) a.push_back(curr);
			curr = 0;
			continue;
		}
		if (!curr) {
			if (s[i] >= '0' && s[i] <= '9') curr = s[i] - '0';
			else curr = s[i] - 'a' + 10;
		}
		else {
			if (s[i] >= '0' && s[i] <= '9') curr = curr * 16 + s[i] - '0';
			else curr = curr * 16 + s[i] - 'a' + 10;
		}
		
	}
	if (curr) a.push_back(curr);

	for (int i = 0; i < a.size(); i++) {
		cout << (unsigned char)((a[i] ^ 0b10101010) % 256);
	}
	cout << '\n';
}