#include <iostream>
using namespace std;

// function for print the square pattern
void inverted_right_pyramind(int n)
{
  for (int i = 0; i < n; i++) // for row
  {
    for (int j = 0; j<n-i; j++) // for columns
    {
      cout <<"* ";
    }

    cout << endl;
  }
}
int main()
{
  inverted_right_pyramind(7);
  return 0;
}