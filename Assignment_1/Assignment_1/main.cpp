#include <iostream>
#include <string>
using namespace std;

void Ask_PersonalInformation()
{
	string name;
	int age;
	char gender;
	string address, stringInput;
	bool relationship_status;
	float height;
	string notUsed;

	cout << "What is your name? ";
	cin >> name;
	cout << "How old are you? ";
	cin >> age;
	cout << "What gender are you? Answer in M or F: ";
	cin >> gender;
	cout << "Type your address, please: ";
	cin >> address;
	cout << "True or false question: You are married...  ";
	cin >> stringInput;
	relationship_status = (stringInput == "true"); // set relationship_status = true, if and only if stringInput had the value "true"

	cout << "How tall are you (in meters)?  ";
	cin >> stringInput;
	height = std::stof(stringInput);

	cout << name << age << gender << address << relationship_status << height;

	cout << "Press any key to exit\n";
	cin >> notUsed;
}
int main()
{
	/*int n = 0;
	int i = 0;
	cout << "Enter the amount of times you want the string to be printed: \n";
	cin >> n;
	
	for (i; i < n; i++)
	{
		cout << "Hello World!" << endl;
	}

	while (i < n)
	{
		cout << "Hello World!" << endl;
		i++;
	}

	do
	{		
		cout << "Hello World!" << endl;
		i++;
	} while (i < n);*/

	Ask_PersonalInformation();
	
	//system("pasue");
	return 0;

}