#include <iostream>
using namespace std;

// function for print the square pattern
void right_triangled_numbered_pattern(int n)
{
  for (int i = 1; i <= n; i++) // for row
  {
    for (int j = 1; j <=i; j++) // for columns
    {
      cout << j<<" ";
    }

    cout << endl;
  }
}
int main()
{
  right_triangled_numbered_pattern(5);
  return 0;
}