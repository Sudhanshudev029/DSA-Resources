#include <iostream>
using namespace std;

// function for print the square pattern
void square_pattern(int n)
{
  for (int i = 0; i < n; i++) // for row
  {
    for (int j = 0; j < n; j++) // for columns
    {
      cout << " * ";
    }

    cout << endl;
  }
}
int main()
{
  square_pattern(5);
  return 0;
}