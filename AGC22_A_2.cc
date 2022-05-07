#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	string S;
	cin >> S;
	bool exists[26] = { false };
	if (S.length() < 26) {
		for (char c : S) exists[c - 'a'] = true;
		cout << S;
		for (int i = 0; i < 26; i++) {
			if (!exists[i]) {
				cout << (char)('a' + i) << endl;
				break;
			}
		}
	}
	else {
		if (S == "zyxwvutsrqponmlkjihgfedcba") {
			cout << -1 << endl;
			return 0;
		}
		string origin = S;
		for (int i = 0; i < S.length(); i++){
			cout << S[i];
		}
		next_permutation(S.begin(), S.end());
		for (int i = 0; i < S.length(); i++){
			cout << S[i];
		}
		for (int i = 0; i < S.length(); i++) {
			cout << S[i];
			if (origin[i] != S[i]) break;
		}
		cout << endl;
	}
}
