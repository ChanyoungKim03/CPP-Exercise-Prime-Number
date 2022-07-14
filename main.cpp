#include <iostream>

int main()
{
	int x, y;

	for (x = 1; x <= 100; x++)
	{
		if (x == 1)
		{
			continue;
		}

		else if (x == 2)
		{
			std::cout << x << " ";
		}

		for (y = 2; y <= x - 1; y++)
		{
			if (x % y == 0)
			{
				break;
			}

			if (y == x - 1)
			{
				std::cout << x << " ";
			}
		}

	}


}
/*

x가 7일때
y는 2부터 6까지 반복
7/2 나머지가 0이 아님
7/3 나머지가 0이 아님
7/4 나머지가 0이 아님
7/5 나머지가 0이 아님
7/6 나머지가 0이 아님
= 이 수는 소수!

x가 9일때
y는 2부터 8까지 반복
9/2 나머지가 0이 아님
9/3 나머지가 0임!
= 이수는 소수가 아님!

*/
