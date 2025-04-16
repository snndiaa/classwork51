#include <iostream>
using namespace std;

int count_uppercase_letters(const char* str) //1
{
	int count = 0;
	for (int i = 0; str[i] != '\0'; ++i)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			count++;
		}
	}
	return count;
}

int delete_arr(char*& arr)
{
	delete[] arr;
	return 0;
}

int my_strcpy(char* dest, const char* src) //2
{
	int i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return 0;
}

int main()
{
	/*const int N = 100;
	char* user_input = new char[N];

	cout << "Enter a string: ";
	cin.getline(user_input, N);

	int uppercase_count = count_uppercase_letters(user_input);
	cout << "Number of uppercase letters: " << uppercase_count << endl;

	delete_arr(user_input);*/

	const int N = 10;

	char str1[N] = "Hello";
	char str2[N] = "World";
	my_strcpy(str1, str2);

	cout << str1 << endl;

	return 0;
}
