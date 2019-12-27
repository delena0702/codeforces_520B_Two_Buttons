#include <iostream>

int main(void)
{
	unsigned int n, m, i, num, cnt = 0;

	std::cin >> n >> m;

	if (n >= m)
	{
		std::cout << n - m;
		return 0;
	}

	for (i = 0, num = n; num < m; i++)
		num <<= 1;

	for (unsigned in = num - m; in; in >>= 1)
		if (in & 0x1)
			cnt++;

	std::cout << i + cnt;
	return 0;
}