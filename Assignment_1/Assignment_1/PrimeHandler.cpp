#include "PrimeHandler.h"

int* PrimeHandler::Primes(int numberOfPrimes)
{
	count = 0;
	primes = new int[numberOfPrimes];
	
	// a number we'll check, start with 2 since 1 is not a prime (by definition)
	int candidate = 2;

	while (count < numberOfPrimes)
	{
		if (isPrime(candidate))
		{
			AddToArray(candidate);
		}
		candidate++;
	}

	return primes;
}

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

void PrimeHandler::AddToArray(int number)
{
	primes[count] = number;
	count++;
}

