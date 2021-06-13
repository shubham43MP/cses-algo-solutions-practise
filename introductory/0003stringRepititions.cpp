#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s;
  long int maxRepitition = 0;
  long int repitition = 0;
  cin >> s;
  for (long int i = 1; i < s.length(); i++)
  {
    if (s[i] == s[i - 1])
    {
      maxRepitition++;
      if (repitition < maxRepitition)
        repitition = maxRepitition;
    }
    else
      maxRepitition = 0;
  }

  cout << repitition + 1;
}