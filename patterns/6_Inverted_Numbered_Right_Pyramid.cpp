#include <iostream>
using namespace std;

// function for print the square pattern
void inverted_numbered_right_pyramind(int n)
{
  for (int i = 0; i < n; i++) // for row
  {
    for (int j = 1; j<=n-i; j++) // for columns
    {
      cout <<j<<" ";
    }

    cout << endl;
  }
}
int main()
{
  inverted_numbered_right_pyramind(5);
  return 0;
}