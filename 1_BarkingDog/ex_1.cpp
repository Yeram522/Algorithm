#include <iostream>

using namespace std;

int sum(int max)
{
	if (max == 0) return 0;
	
	cout << max << endl;

	return max + sum(max-1);
}
int main()
{
	cout << "result:"<< sum(3) << endl;
	return 0;
}