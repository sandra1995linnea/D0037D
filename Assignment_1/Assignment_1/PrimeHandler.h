#pragma once
class PrimeHandler
{

public:

	/// <summary>
	/// Calculates prime numbers
	/// </summary>
	/// <param name="numberOfPrimes">Number of prime numbers</param>
	/// <returns>A pointer to an allocated array of ints. Remember to free this!</returns>
	int* Primes(int numberOfPrimes);

private:

	/// <summary>
	/// Checks if a candidate number is a prime
	/// </summary>
	/// <param name="number">The number to check</param>
	/// <returns></returns>
	bool isPrime(int number);

	void AddToArray(int number);

	int count;
	int* primes;
};

