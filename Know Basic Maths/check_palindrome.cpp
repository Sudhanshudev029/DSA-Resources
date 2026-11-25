#include <bits/stdc++.h>
using namespace std;

bool check_palindrome(int N)
{
    int copyNum = N; // copy the actual value
    int reverseNum = 0; // variable to store the reverse number
    while (copyNum>0) // check condition while the copyNum must be greater than 0
    {
       int extractNum = copyNum%10; // extract the last digit
       reverseNum = (reverseNum*10) + extractNum; // contact the number for reverse
       copyNum/=10; // remove the last digit
    }
    if(N==reverseNum){ // check condition the reverseNumber and actual is same
        return true;
    }
    return false;
}

bool check_palindrome_optimised(int x) // optimised approach without using extra space
{
    if(x<0 || (x%10==0 && x !=0)) return false;
        int reverseHalf=0;
        while(x>reverseHalf){
            reverseHalf = reverseHalf*10 + (x%10);
            x/=10;
        }
        return (x== reverseHalf || x ==reverseHalf/10);
}

int main()
{

    int num = 1331;
    cout << "The " << num << "Is Panlindrome : " << check_palindrome_optimised(num) << endl;
    return 0;
}