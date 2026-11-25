#include <bits/stdc++.h>
using namespace std;

// function for reverse the number
int reverse_number(int N)
{
    int reversedNum = 0;
    while (abs(N) > 0)
    {
        int extractNum = N % 10;
        reversedNum = (reversedNum * 10) + extractNum;
        N /= 10;
    }
    return reversedNum;
}
int main()
{

    int myNum = -364634;
    cout << "The Reversed Number is : " << reverse_number(myNum)<<endl;

    return 0;
}