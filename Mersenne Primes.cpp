
// This program calculates Menesene prime numbers.
// Author: Mia Armstrong
// Date: November 6,2011
// Compiled with: Visual C++ 2008 Express Edition

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

bool isPrime(unsigned long long int n);
unsigned long long int power2(unsigned long long int n);

int main()
{  
    
	unsigned long long int i;    
	unsigned long long int n;                      
	
             cout << "Mersenne Primes by Mia Armstrong" << endl;
             cout << setw (2) << "n" << setw (24) << "Mersenne Prime" << endl;
             cout << setw (2) << "==" << setw (24) << "==============" << endl;
             cout << setfill (' ');
	             

		for  (n = 2; n <= 61; n++)          //to find prime numbers through the first function and then 
			{                               //put those prime number through the second fuction, then 
				if ( isPrime (n) == 1)      //subtract 1, then test to see if i is prime.
				{
					i = power2 (n) - 1; 
					if ( isPrime (i) == 1){
					cout << setw (2) << n << setw (21) << i << endl;  //outputs the prime and the mensenne prime. 
					}
				}

			}     
            
		
		char reply;    
		
		cout << "Press q (or any other key) followed by 'Enter' to quit: ";    
		cin >> reply;        
		
		return 0;
	
	} 
	

	bool isPrime(unsigned long long int n)  // function determines if the number n is prime.
	{    

		for (unsigned long long int i = 2; i * i < n; i++)      
			
			if (n % i == 0)          
				return false;     
		
		return true;  
	
	}
	

	unsigned long long int power2 (unsigned long long int n)		//function returns 2 raised to power of n
	{       
		        
		unsigned long long int square = 1;        
                      
		
		for (unsigned long long int i = 0; i < n; i++)                
		{                       
			square*=2;              
		}                                      
		
		return square;                               
	
}




