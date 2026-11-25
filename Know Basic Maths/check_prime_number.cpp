#include <bits/stdc++.h>
using namespace std;

// bruteforceapproach
bool is_prime_number(int num)
{
    int count = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }

    return count == 2;
};

// code for optimized one
bool is_prime_number_optimised(int num)
{
    int count = 0;
    for (int i = 1; i * i <= num; i++)
    {
        if(num%i==0){
            count++;

            if(i!=num/i){
                count++;
            };
        };
    };
    return count==2;
}

int main()
{
    int num = 25;
    cout << "The " << num << " Is Prime NUmber : " << is_prime_number_optimised(num) << endl;
    return 0;
}