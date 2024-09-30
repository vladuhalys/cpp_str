#include <iostream>
using namespace std;

int str_len(const char *str)
{
	int size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	return size;
}

char uplow(char letter)
{
	if (int(letter) < 91)
	{
		return letter + 32;
	}
	else
	{
		return letter - 32;
	}
}
bool isAlpha(char sign)
{
	return (sign >= 97 && sign <= 122 || sign >= 65 && sign <= 90) ? true : false;
}

void str_to_upper(char* str)
{
	int i = 0;
	do
	{
		if (isAlpha(str[i]) && int(str[i]) > 91)
		{
			str[i] -= 32;
		}
		i++;
	} while (str[i] != '\0');
}
void str_to_lower(char* str)
{
	int i = 0;
	do
	{
		if (isAlpha(str[i]) && int(str[i]) < 91)
		{
			str[i] += 32;
		}
		i++;
	} while (str[i] != '\0');
}


int str_cmp(const char* str_l, const char* str_r)
{
	int i = 0, sum_1 = 0, sum_2 = 0;
	do
	{
		char s =str_l[i];
		sum_1 += static_cast<int>(str_l[i]);
		i++;
	} while (str_l[i] != '\0');
	i = 0;
	do
	{
		sum_2 += static_cast<int>(str_r[i]);
		i++;
	} while (str_r[i] != '\0');
	if (sum_1 > sum_2)
	{
		return -1;
	}
	else if (sum_1 < sum_2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}



int main()
{
	char str[] = "hello!"; //13
	char* str_p = new char[20] {"Hello world!"}; //20/13
	
	cout << "Str 1 = " << str << " : " << str_len(str) << endl;
	cout << "Str 2 = " << str_p << " : " << str_len(str_p) << endl;

	cout << str_cmp(str, str_p) << endl;
}