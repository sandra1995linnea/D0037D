#include <iostream>
#include <string>
#include "PrimeHandler.h"
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

	cout << "\n";
	cout << "Your name is: "<< name << "\n"  << "You are " << age << " years old \n" << "Your gender is: "<< gender << "\n"
		<< "Your address is: " << address << "\n" << "Your height is: " << height << " meters" << endl;

	if (relationship_status == 1)
	{
		cout << "Married: True";
	}

	else
	{
		cout << "Married: False";
	}

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
	scanf_s("%s", name, (unsigned)_countof(name));

	
	printf("How old are you? ");
	scanf_s("%d", &age);

	printf("Your gender: Enter F if you are a female and M if you are a male: ");
	scanf_s("%s", gender, (unsigned)_countof(gender));

	printf("Your address, please: ");
	scanf_s("%s", address, (unsigned)_countof(address));

	printf("Are you married? Put 1 for a Yes or 0 for a No: ");
	scanf_s("%d", &isMarried);

	printf("How tall are you? Answer in meters: ");
	scanf_s("%f", &height);

	printf("\n");
	printf("Your name is %s\nYou are %d years old\nYour gender is %s\nYour address is %s\nYour height is %f meters\n", name, age, gender, 
		address, height);
	if (isMarried == 1)
	{
		printf("Married: Yes");
	}
	else
	{
		printf("Married: No");

	}


}

void Bounce()
{
	int n;
	int m = 0;

	printf("Enter any non-negative number you like: ");
	scanf_s("%d", &n);
	
	//checking that the input number is a non-negative
	if (n < 0)
	{
		printf("Negative numbers are not allowed!");
		return;
	}
	else
	{
		printf("result: ");
		for (int i = n; i >= m; i--)
		{
			printf("%d", i);
		}

		for (int j = 1; j <=n; j++)
		{
			printf("%d", j);
		}
	}
}

void PrimeNumbers()
{
	//Task 6

	int n;

	printf("Tell us how many prime numbers you want: ");
	scanf_s("%d", &n);

	//creating an object of the class that handles the prime numbers
	PrimeHandler* handler = new PrimeHandler();
	int* PrimeNumbers = handler->Primes(n);

	for (int i = 0; i < n; i++)
	{
		printf("%d", PrimeNumbers[i]);

		if (i < n - 1) // if not the last number
		{
			printf(", ");
		}
	}

	// Dont forget to deallocate memory, no memory leaks here! :)
	delete handler;
	delete PrimeNumbers;
}

void HalfPyramid()
{
	// Task 8

	char number, character = '5';
	char letter;
	
	printf("Enter a number you like:  ");
	while (1)
	{		
		scanf_s("%c", &number);

		//checking if it is a number
		if (isdigit((int)number))
		{
			break;
		}
		printf("Not a number, please enter a number this time: ");
	}
	
	printf("Enter an uppercase letter you like:  ");
	while (1)
	{
		cin >> character;
		//checking that it is an uppercase letter
		if (isupper((int)character))
		{
			break;
		}
		printf("Not an uppercase letter, please enter an uppercase letter this time: ");
	}

	//printing the number in the pyramid
	for (int i = 1; i <= number-48; i++) 
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%c", j+48); //adding the ASCII value
		}
		printf("\n");
	}

	printf("\n");

	//printing the letter pyramid
	for (int i = (int)'A'; i <= character; i++)
	{
		for (int j = (int)'A'; j <= i; j++)
		{
			printf("%c", (char)i);
		}
		printf("\n");
	}
}

//this is the only main function that contains the helloworld tasks and function calls to all the other functions above main
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

	//PrimeNumbers();
	//Bounce();
	//HalfPyramid();
	Ask_PersonalInformation();
	//Ask_PersonalInfo_Part2();
	
	//system("pasue");
	return 0;

}