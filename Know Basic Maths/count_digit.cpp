#include <bits/stdc++.h>
using namespace std;
// brute-force approach
int count_digit(int digit)
{
    int copy_digit = digit;
    int count = 0;
    while (copy_digit != 0)
    {
        count++;
        copy_digit /= 10;
    }
    return count;
}

// optimised approach using log10

int count_digit_optimised(int N)
{
    if (N == 0)
    {
        return 1;
    }
    return floor(log10(abs(N)) + 1);
}
int main()
{
    int my_num = 12345;

    cout << "The Count Of Digit Is : " << count_digit_optimised(my_num) << endl;
    return 0;
}