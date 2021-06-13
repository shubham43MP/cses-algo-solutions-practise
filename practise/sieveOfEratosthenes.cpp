#include <iostream>
#include <cmath>
using namespace std;

void eratosthenesPrimes(int);

void eratosthenesPrimes(int n)
{
  int *primusArr{new int[n - 1]{}};
  for (int i = 2; i <= n; i++)
    primusArr[i] = i;

  int p = 2;
  while (p * p <= n)
  {
    for (int i = 0; i < n - 1; i++)
    {
      if (primusArr[i] != 0 && primusArr[i] != p && primusArr[i] % p == 0)
        primusArr[i] = 0;
    }
    p++;
  }

  for (int i = 0; i < n - 1; i++)
  {
    if (primusArr[i] != 0)
      cout << primusArr[i] << " ";
  }
}

int main()
{
  int n;
  cin >> n;
  eratosthenesPrimes(n);
}