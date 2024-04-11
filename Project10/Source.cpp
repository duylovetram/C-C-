#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	for (int num = 1; num < 50; num++)
	{
		int count = 0; //dem so uoc cua a
		for (int i = 2; i <= sqrt(num); i++)
		{
			if (num % i == 0)
			{
				count++;
			}
		}
		if (count == 0 && num > 1)
			printf("%d\t", num);
	}
}