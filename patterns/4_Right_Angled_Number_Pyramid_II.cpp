#include <iostream>
using namespace std;

// function for print the square pattern
void right_triangled_numbered_pattern_2(int n)
{
  for (int i = 1; i <= n; i++) // for row
  {
    for (int j = 1; j <=i; j++) // for columns
    {
      cout << i<<" ";
    }

    cout << endl;
  }
}
int main()
{
  right_triangled_numbered_pattern_2(5);
  return 0;
}