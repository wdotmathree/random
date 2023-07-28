#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;

int main(int argc, char *argv[]) {
	if (argc != 2) {
		cout << "Invalid # of args\n";
		return 1;
	}

	// read and write
	FILE *f = fopen(argv[1], "r");
	if (f == NULL) {
		cout << "File not found\n";
		return 1;
	}

	string s, res;
	char buf[65536];
	while (fgets(buf, sizeof(buf), f)) {
		s += buf;
	}
	fclose(f);

	bool inquote = false;
	int linecnt = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '\n') linecnt++;
		if (linecnt < 45) { res.push_back(s[i]); continue; }
		if (s[i] == '"') {
			inquote = !inquote;
		}
		if (!inquote && s[i] != '\"') {
			res.push_back(s[i]);
		}
		if (s[i] == '\"') res.push_back('"');
		else if (inquote) {
			int val = (int)(unsigned char)(s[i] ^ 0b10101010);
			res += "\\x" + string(1, "0123456789abcdef"[val / 16]) + string(1, "0123456789abcdef"[val % 16]);
		}
	}

	// write to file
	f = fopen("test.cpp", "w");
	fputs(res.c_str(), f);
	fclose(f);


}