#include <iostream>

using namespace std;
using ll = long long;

//�ݺ�ver
/*int main()
{
	unsigned long long num, count, div;
	scanf("%llu %llu %llu", &num, &count, &div);
	unsigned long long total = num;
	while (count > 0)
	{
		total *= num;
		count--;
	}

	printf("%llu", total % div);
	return 0;
}*/

//���ver
//a�� b����!
ll pow(ll num, ll count,ll div) //(������ ��, ���� Ƚ��)
{
	if (count == 1) return num % div;
	ll val = pow(num, count / 2,div);
	val = val * val % div;
	if (count % 2 == 0)
		return val%div;
	else
		return val*num%div;
}
int main()
{
	ll num, count, div;
	scanf("%lld %lld %lld", &num, &count, &div);

	printf("%lld", pow(num, count, div));
}