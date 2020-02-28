//1.36 Вывести все пятизначные числа, которые делятся на 2, у которых средняя цифра нечетная, и сумма всех цифр делится на 4.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>
using namespace std;


void main()
{
	setlocale(LC_ALL, "RUS");
	cout<<"1.36 Вывести все пятизначные числа, которые делятся на 2, у которых средняя цифра нечетная, и сумма всех цифр делится на 4. \n";
	
	for (int i = 10000; i <= 100000; i += 2)
	{
		int x = i;
		int cent = (x % 1000) / 100;
		if (cent % 2 == 0) continue;
		int sum = 0;
		while (x > 0)
		{
			sum += x % 10;
			x /= 10;
		}
		if (sum % 4 == 0)
			cout << i << ' ';
		
	}
}

