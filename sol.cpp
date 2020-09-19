#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int x, y, z;
	cin >> x >> y >> z;
	if(x>y) {
		if(x<=y+z)
			cout << '?';
		else if(x<y+z)
			cout << '-';
		else
			cout << '+';
	} else if(x<y) {
		if(y<=x+z)
			cout << '?';
		else if(x+z>y)
			cout << '+';
		else
			cout << '-';
	} else if(x==y) {
		if(x+z==y+z&&z==0)
			cout << '0';
		else
			cout << '?';
	}
	cout << "\n";
}
