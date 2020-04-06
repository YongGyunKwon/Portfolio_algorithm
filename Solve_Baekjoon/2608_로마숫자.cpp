#include<iostream>
#include<string>
using namespace std;

int roma_to_number(string a)
{
	int result = 0;

	for (int i = 0; i < a.length(); i++)
	{
		
		switch (a[i])
		{
		case 'I':
			if (a[i + 1] == 'V')
			{
				result += 4;
	
				i++;
			}
			else if (a[i + 1] == 'X')
			{
				result += 9;
	
				i++;
			}
			else
			{
				result += 1;
	
			}
	
			break;

		case 'V':
			result += 5;
	
	
			break;
		case 'X':
			if (a[i + 1] == 'L')
			{
				result += 40;
	
				i++;
			}
			else if (a[i + 1] == 'C')
			{
				result += 90;
	
				i++;
			}
			else
			{
				result += 10;
	
			}
			
			break;

		case 'L':
			result += 50;
			break;
		case 'C':
			if (a[i + 1] == 'D')
			{
				result += 400;
				i++;
			}
			else if (a[i + 1] == 'M')
			{
				result += 900;
				i++;
			}
			else
			{
				result += 100;
			}
			break;
		case 'D':
			result += 500;
			break;
		case 'M':
			result += 1000;
			break;
		}
	}

	return result;
}

void number_to_roma(int n)
{
	string tmp;
	int count=n;
	while (count > 0)
	{
		if (1000 <= count)
		{
			cout << 'M';
			count -= 1000;
		}
		else if (900 <= count)
		{
			cout << "CM";
			count -= 900;
		}
		else if (500 <= count)
		{
			cout << "D";
			count -= 500;
		}
		else if (400 <= count)
		{
			cout << "CD";
			count -= 400;
		}
		else if (100 <= count)
		{
			cout << "C";
			count -= 100;
		}
		else if (90 <= count)
		{
			cout << "XC";
			count -= 90;
		}
		else if (50 <= count)
		{
			cout << "L";
			count -= 50;
		}
		else if (40 <= count)
		{
			cout << "XL";
			count -= 40;
		}
		else if (10 <= count)
		{
			cout << "X";
			count -= 10;
		}
		else if (9 <= count)
		{
			cout << "IX";
			count -= 9;
		}
		else if (5 <= count)
		{
			cout << "V";
			count -= 5;
		}
		else if (4 <= count)
		{
			cout << "IV";
			count -= 4;
		}
		else
		{
			cout << "I";
			count -= 1;
		}
	}
}


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string a, b;
	int result = 0;

	cin >> a;
	cin >> b;

	result = roma_to_number(a) + roma_to_number(b);

	cout << result<<endl;
	number_to_roma(result);
	return 0;
}