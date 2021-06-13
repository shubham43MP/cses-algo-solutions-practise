#include <iostream>
using namespace std;

void weirdo(long int);

void weirdo(long int n)
{
  cout << n << " ";
  if (n != 1)
  {
    if (n % 2 == 0)
    {
      n = n / 2;
    }
    else
    {
      n = n * 3 + 1;
    }
    weirdo(n);
  }
}

int main()
{
  long int n;
  cin >> n;
  weirdo(n);
}
