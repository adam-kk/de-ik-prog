#include "std_lib_facilities.h"

int main()
{
	cout << "Enter the name of the person you want to write to:\n";

	string first_name;
	cin >> first_name;

	cout << "\tDear " << first_name << ",\n";
	cout << "How are you? I am fine, thank you. I miss you\n";
	cout << "This is line #3\n";
	cout << "This is line #4\n";
	cout << "This is line #5\n";
	cout << "Please enter the name of another friend:\n";

	string friend_name;
	cin >> friend_name;

	cout << "Have you seen " << friend_name << " lately?\n";

	char friend_sex = 0;

	cout << "Gender of said friend: \n";
	cin >> friend_sex;

	if (friend_sex == 'm')
	{
		cout << "If you see " << friend_name << " please ask him to call me.\n";
	}
	else if (friend_sex == 'f')
	{
		cout << "If you see " << friend_name << " please ask her to call me.\n";
	}

	cout << "How old is your friend?\n";
	int age;
	cin >> age;

	cout << "I hear you just had your a birthday and you are " << age << " years old!\n";

	if (age <= 0 || age >= 110)
	{
		simple_error("You're kidding!");
	}

	if (age < 12)
	{
		cout << "Next year you'll be " << age << " old.\n";
	}
	if (age == 17)
	{
		cout << "Next year you will be able to vote.\n";
	}
	if (age > 70)
	{
		cout << "I hope you are enjoying your retirement.\n";
	}

	cout << "Yours sincerely, \n";
	cout << "\n";
	cout << "\n";
	cout << "Kerekes Adam\n";

	return 0;
}