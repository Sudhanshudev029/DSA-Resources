#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int count_digit(int num)
{
    int count = 0;
    while (num > 0)
    {
        count++;
        num /= 10;
    };
    return count;
}

bool is_armstrong_num(int num)
{
    int copyNum = num;
    // int count = count_digit(num);
    int count = to_string(num).length();
    int powerSum = 0;
    while (copyNum > 0)
    {
        powerSum += pow(copyNum % 10, count);
        copyNum /= 10;
    };

    return powerSum==num;
};

int main()
{
    int myNum = 1523;
    cout << "The "<<myNum<<" Number Is Armstrong: " << is_armstrong_num(myNum) << endl;
    return 0;
}