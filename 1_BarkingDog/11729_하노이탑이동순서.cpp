#include <iostream>
using namespace std;


void func(int from, int to, int n)
{
	if (n == 1) {
		printf("%d %d\n", from, to);
		return;
	}
	func(from, 6 - from - to, n - 1);
	printf("%d %d\n", from, to);
	func(6 - from - to, to, n - 1);
}

int main()
{
	int n;
	scanf("%d", &n);

	printf("%d\n" , (1 << n) - 1);
	func(1, 3, n);

	return 0;

}