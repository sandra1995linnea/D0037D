#include "PrimeHandler.h"

int* PrimeHandler::Primes(int numberOfPrimes)
{
	count = 0;
	primes = new int[numberOfPrimes];
	
	// a number we'll check, start with 2 since 1 is not a prime (by definition)
	int candidate = 2;

	while (count < numberOfPrimes)
	{
		//checking that the candidate number is a primenumber, if so we add it to the array
		if (isPrime(candidate))
		{
			AddToArray(candidate);
		}
		candidate++;
	}

	return primes;
}

//method for checking if it is a prime number
bool PrimeHandler::isPrime(int number)
{
	for(int i = 0;  i < count; i++)
	{
		if (number % primes[i] == 0)
		{
			return false;
		}
	}
	return true;
}
//method for adding primenumbers into an array
void PrimeHandler::AddToArray(int number)
{
	primes[count] = number;
	count++;
}

