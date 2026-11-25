#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

// brute force approach
int find_gcd_of_two_number(int n1, int n2) // function to find the GCD of 2 numbers
{
    int gcdResult = 1;                     // by default the GCD of 2 number is 1
    for (int i = 1; i <= min(n1, n2); i++) // iterate  loop to minimum of n1 and nn2
    {
        if (n1 % i == 0 && n2 % i == 0) // check the condition that n1 and n2 must be factor of i
        {
            gcdResult = i; // if yes assigned with gcdResult
        };
    };
    return gcdResult; // retur gcd result
};

// better approach
int find_gcd_of_two_number_better(int n1, int n2)
{
    int gcdResult = 1;
    for (int i = min(n1, n2); i > 0; i--)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            return i;
        };
    };
    return gcdResult;
};

// optimal approach (Euclidean Algorithm:)
// Euclidean Algorithm:

// The Euclidean Algorithm is a method for finding the greatest common divisor (GCD)
// of two numbers. It operates on the principle that the GCD of two numbers remains
// the same even if the smaller number is subtracted from the larger number.

// To find the GCD of n1 and n2 where n1 > n2:
// 1. Repeatedly subtract the smaller number from the larger number until one of them becomes 0.
// 2. Once one becomes 0, the other is the GCD of the original numbers.

// Example:
// n1 = 20, n2 = 15

// gcd(20, 15) = gcd(20 - 15, 15) = gcd(5, 15)
// gcd(5, 15)  = gcd(15 - 5, 5)  = gcd(10, 5)
// gcd(10, 5)  = gcd(10 - 5, 5) = gcd(5, 5)
// gcd(5, 5)   = gcd(5 - 5, 5)  = gcd(0, 5)

// Hence, return 5 as the GCD.


int find_gcd_of_two_number_optimal(int n1, int n2)
{
    while (n1 > 0 && n2 > 0)
    {
        if (n1 > n2)
        {
            n1 = n1 % n2;
        }
        else
        {
            n2 = n2 % n1;
        };
    }

    if(n1==0){
        return n2;
    }else{
        return n1;
    }
};
int main()
{
    int n1 = 9;
    int n2 = 12;
    int gcdResult = find_gcd_of_two_number_optimal(n1, n2);
    cout << "The GCD Of " << n1 << " and " << n2 << " Is : " << gcdResult << endl;
    return 0;
}