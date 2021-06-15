#include <iostream>
typedef long int li;
using namespace std;

int main()
{
  li n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    if (i == 1)
    {
      cout << 0 << "\n";
    }
    else if (i == 2)
    {
      cout << 6 << "\n";
    }
    else
    {
      li squaredN = i * i;
      li cases = (squaredN * (squaredN - 1)) / 2 - 4 * (i - 1) * (i - 2);
      cout << cases << "\n";
    }
  }
}