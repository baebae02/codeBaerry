#include <iostream>
#include <set>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	int cnt = 0;
	cin >> N >> M;

	set<string> s;


	for (int i = 0; i < N; i++) {
		string input_s;
		cin >> input_s;
		s.insert(input_s);
	}

	for (int i = 0; i < M; i++) {
		string test_input;
		cin >> test_input;
		
		const bool is_in = s.find(test_input) != s.end();
		if (is_in)	cnt++;
	}
	cout << cnt;

}
