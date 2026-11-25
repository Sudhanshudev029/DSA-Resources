#include <iostream>
using namespace std;

// function for print the square pattern
void right_triangled_pattern(int n)
{
  for (int i = 0; i < n; i++) // for row
  {
    for (int j = 0; j <=i; j++) // for columns
    {
      cout << "* ";
    }

    cout << endl;
  }
}
int main()
{
  right_triangled_pattern(5);
  return 0;
}