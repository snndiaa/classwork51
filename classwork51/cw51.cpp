#include <iostream>
using namespace std;

int count_uppercase_letters(const char* str)
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

void delete_arr(char*& arr)
{
	delete[] arr;
	arr = nullptr;
}

int main()
{
	const int N = 100;
	char* user_input = new char[N];

	cout << "Enter a string: ";
	cin.getline(user_input, N);

	int uppercase_count = count_uppercase_letters(user_input);
	cout << "Number of uppercase letters: " << uppercase_count << endl;

	delete_arr(user_input);

	return 0;
}
