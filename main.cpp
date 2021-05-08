/**/

#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int number;
	cout << "Enter the number : ";
	cin >> number;
	string text = to_string(number), reverse = "";
	if (text.length() == 0) {
		cout << "[ The input is empty ]" << endl;
		return 0;
	}
	for (int i = 0; i < text.length(); ++i) {
		reverse = reverse + text[text.length()-i-1];
	}
	if (reverse == text) {
		cout << "[ The number is a palindrome ]" << endl;
	} else {
		cout << "[ The number is not a palindrome ]" << endl;
	}
	return 0;
}
