#include <iostream>

using namespace std;

int func(int n, int r, int c)
{
	if (n == 0) return 0;

	int half = 1 << (n - 1); //2^(n-1)

	if (r < half && c < half)
		//1¹ø
		return func(n - 1, r, c);
	if (r < half && half <= c)
		//2¹ø
		return half* half + func(n - 1, r, c - half);
	if (half <= r && c < half)
		//3¹ø
		return 2 * half * half + func(n - 1, r - half, c);

	return 3 * half * half + func(n - 1, r - half, c - half);
}

int main()
{
	int n, r, c;

	scanf("%d %d %d", &n, &r, &c);

	printf("%d", func(n, r, c));
}