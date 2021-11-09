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

void Ask_PersonalInfo_Part2()
{
	char name[30];
	int age;
	char gender[2];
	char address[50];
	int isMarried;
	float height;

	printf("Tell us your name: ");
	scanf("%c", &name);

	printf("How old are you? ");
	scanf("%d", &age);

	printf("Your gender: Enter F if you are a female and M if you are a male: ");
	scanf("%c", &gender);

	printf("Your address, please: ");
	scanf("%c", &address);

	printf("Are you married? Put 1 for a Yes or 0 for a No: ");
	scanf("%d", &isMarried);

	printf("How tall are you? Answer in meters: ");
	scanf("%.2f", &height);


}

void Bounce()
{
	int n;

	printf("Enter any non-negative number you like: ");
	scanf("%d", &n);

	int array[50]; // allocate memory for the array
	if (n < 0)
	{
		printf("Negative numbers are not allowed!");
	}

	else
	{
		for (int i = 1; i <= n; i++)
		{
			printf("result: %d", i);
		}
	}

}

void PrimeNumbers()
{
	//Task 6

	int Prime_Numbers[10]{ 2, 3, 5, 7, }; // an array of all the prime numbers

	int n;

	printf("Tell us how many prime numbers you want: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		printf("%d, ", Prime_Numbers[i]);
	}
}

void HalfPyramid()
{
	// Task 8

	char n[1];
	string alphabet[30]={"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z","Å","Ä","Ö"};

	

	printf("Enter a character you like, a number o a letter: ");
	scanf("%c", &n);

	if (isdigit((int)n))
	{
		for (int i = 1; i >= (int)n; i++)
		{
			for (int j = 1; j < (int)n; j++)
			{

			}
		}
	}
	else
	{
		if (isupper((int)n))
		{
			// do the pyramid
		}

		else
		{
			toupper((int)n);
			for (int i = 0; i < sizeof(alphabet); i++)
			{
				if (alphabet[i] == n)
				{
					//do the pyramid
				}
			}
		}
	}

	



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