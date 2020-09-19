#include <bits/stdc++.h>
using namespace std;

const char res[4]={'+','-','0','?'};

int solve(int x, int y) {
	return x==y?2:x<y;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int x, y, z;
	cin >> x >> y >> z;
	cout << res[solve(x+z, y)==solve(x, y+z)?solve(x, y):3] << "\n";
}
