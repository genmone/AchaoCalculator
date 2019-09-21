#include <iostream>

using namespace std;

int main()
{
	float number[3],result;
	int time,time_1,total;
	char way[2];
	cout << "输入产生四则运算式的个数" << endl;
	cin >> time;
	for (total=1;total<=time; )
	{
		result = 0;
		number[0] = rand()%100;
		number[1] = rand()%100;
		number[2]= rand()%100;
		for (time_1=0;time_1<2;time_1++)
		{
			int way_1;
			way_1 = rand() % 4 + 1;
			switch (way_1)
			{
			case 1:
				way[time_1] = '+';
				break;
			case 2:
				way[time_1] = '-';
				break;
			case 3:
				way[time_1] = '*';
				break;
			case 4:
				way[time_1] = '/';
				break;
            }
		}

		if (way[0] == '+' || way[1] == '+')
		{
			result = number[0] + number[1] + number[2];
		}

		if (way[0] == '+' || way[1] == '-')
		{
			result = number[0] + number[1] - number[2];
		}

		if (way[0] == '+' || way[1] == '*')
		{
			result = number[0] + (number[1] * number[2]);
		}

		if (way[0] == '+' || way[1] == '/')
		{
			result = number[0] + (number[1] / number[2]);
		}

		if (way[0] == '-' || way[1] == '+')
		{
			result = number[0] - number[1] + number[2];
		}

		if (way[0] == '-' || way[1] == '-')
		{
			result = number[0] - number[1] - number[2];
		}

		if (way[0] == '-' || way[1] == '*')
		{
			result = number[0] - (number[1] * number[2]);
		}
		
		if (way[0] == '-' || way[1] == '/')
		{
			result = number[0] - (number[1] / number[2]);
		}

		if (way[0] == '*' || way[1] == '+')
		{
			result =( number[0] * number[1]) + number[2];
		}

		if (way[0] == '*' || way[1] == '-')
		{
			result = (number[0] * number[1] )- number[2];
		}

		if (way[0] == '*' || way[1] == '*')
		{
			result = number[0] * number[1] * number[2];
		}

		if (way[0] == '*' || way[1] == '/')
		{
			result = number[0] * (number[1] / number[2]);
		}

		if (way[0] == '/' || way[1] == '+')
		{
			result = (number[0] / (number[1]) + number[2]);
		}

		if (way[0] == '/' || way[1] == '-')
		{
			result = (number[0] / (number[1]) - number[2]);
		}

		if (way[0] == '/' || way[1] == '*')
		{
			result = (number[0] / number[1]) * number[2];
		}

		if (way[0] == '/' || way[1] == '/')
		{
			result = (number[0] / number[1])/ number[2];
		}

		int check = (int)result;

		if(result == check && result>0)
		{
			cout << number[0] << way[0] << number[1] << way[1] << number[2] << '=' << result <<endl;
		    total++;
		}
	}
}