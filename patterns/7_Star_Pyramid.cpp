#include <iostream>
using namespace std;

void star_pyramid(int n)
{
    for (int i = 0; i < n; i++)
    { // this is for rows
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
};
int main()
{
    star_pyramid(5);
    return 0;
}