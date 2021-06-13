#include <iostream>
using namespace std;

long int sumofNNumbers(long int);

long int sumofNNumbers(long int n)
{
  return (n * (n + 1) / 2);
}

int main()
{
  long int n;
  long int sumOfInputs = 0;
  long int input;
  cin >> n;
  for (long int i = 1; i < n; i++)
  {
    cin >> input;
    sumOfInputs = sumOfInputs + input;
  }
  cout << sumofNNumbers(n) - sumOfInputs;
}