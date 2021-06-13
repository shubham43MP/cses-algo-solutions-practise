#include <iostream>
typedef long int li;
using namespace std;

int main()
{
  li n;
  cin >> n;
  li beautifulNumberTrackerFH = 1;
  li beautifulNumberTrackerSH;
  if (n % 2 == 0)
    beautifulNumberTrackerSH = (n / 2) + 1;
  else
    beautifulNumberTrackerSH = (n / 2) + 2;
  if (n == 2 || n == 3)
  {
    cout << "NO SOLUTION";
  }
  else if (n == 4)
  {
    cout << "2 4 1 3";
  }
  else
  {
    if (n % 2 == 0)
    {
      beautifulNumberTrackerFH = beautifulNumberTrackerSH - 1;
      beautifulNumberTrackerSH = n;
      for (li i = 0; i < n; i++)
      {
        if (i % 2 == 0)
        {
          cout << beautifulNumberTrackerFH << " ";
          beautifulNumberTrackerFH--;
        }
        else
        {
          cout << beautifulNumberTrackerSH << " ";
          beautifulNumberTrackerSH--;
        }
      }
    }
    else
    {
      for (li i = 0; i < n; i++)
      {
        if (i % 2 == 0)
        {
          cout << beautifulNumberTrackerFH << " ";
          beautifulNumberTrackerFH++;
        }
        else
        {
          cout << beautifulNumberTrackerSH << " ";
          beautifulNumberTrackerSH++;
        }
      }
    }
  }
}