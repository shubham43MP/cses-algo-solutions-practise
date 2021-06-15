#include <iostream>
#include <cmath>
typedef long long int lli;
using namespace std;

int main()
{
  lli n;
  cin >> n;
  lli trailingZeroCount = 0;
  lli tracker = 5;
  while (tracker <= n)
  {
    lli intermediate = n / tracker;
    trailingZeroCount = trailingZeroCount + intermediate;
    tracker = tracker * 5;
  }
  cout << trailingZeroCount;
}