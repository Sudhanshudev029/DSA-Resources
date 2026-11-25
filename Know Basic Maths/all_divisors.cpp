#include <bits/stdc++.h>
using namespace std;
vector<int> find_divisor(int num)
{
    vector<int> divisorNum;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            divisorNum.push_back(i);
        };
    };
    return divisorNum;
}

// optimised function to find_divisor
vector<int> find_divisor_optmised(int num)
{
    vector<int> divisorNum;
    for (int i = 1; sqrt(i)<= num; i++)
    {
        if (num % i == 0)
        {
            divisorNum.push_back(i);

            if(i!=num/i){
                divisorNum.push_back(num/i);
            };
        };
    };
    return divisorNum;
};
int main()
{
    int num = 12;
    cout << "The Divisor Number are : " << endl;
    vector<int> result = find_divisor_optmised(num);
    sort(result.begin(),result.end()); // code for sort the result
    for (int val : result)
    {
        cout << val << endl;
    };

    return 0;
}