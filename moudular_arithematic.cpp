#include <bits/stdc++.h>


int solve(int x, int n, int m) {

	if (n == 0) {
		return 1;
	}

	long temp = solve(x, n / 2, m);

	if (n % 2 == 1) {
		return ((x % m * temp % m)  % m * temp % m) % m;
	} else {
		return (temp  % m * temp % m) % m;
	}
}


int modularExponentiation(int x, int n, int m) {

	return solve(x, n, m);
}