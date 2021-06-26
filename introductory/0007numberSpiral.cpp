#include <iostream>
typedef long long int lli;
using namespace std;

lli numberFinder(lli container[], lli row, lli column);

lli numberFinder(lli container[], lli row, lli column)
{
  if (row > column)
  {
    lli diagonalValue = container[row - 1];
    if (row % 2 == 0)
    {
      return diagonalValue + (row - column);
    }
    else
    {
      return diagonalValue - (row - column);
    }
  }
  else if (row < column)
  {
    lli diagonalValue = container[column - 1];
    if (column % 2 == 0)
    {
      return diagonalValue - (column - row);
    }
    else
    {
      return diagonalValue + (column - row);
    }
  }
  else
  {
    return container[row - 1];
  }
}

int main()
{
  lli incrementor = 2;
  lli t;
  lli zerothX;
  lli zerothY;
  cin >> t;
  lli maxOfTests;
  lli *diagonalContainer = new lli(maxOfTests);
  lli *rowTestContainer = new lli(t);
  lli *ColumnTestContainer = new lli(t);
  for (lli i = 0; i < t; i++)
  {
    //input layer
    lli row;
    lli column;
    maxOfTests = 0;
    cin >> row;
    cin >> column;
    if (i == 0)
    {
      zerothX = row;
      zerothY = column;
    }
    rowTestContainer[i] = row;
    ColumnTestContainer[i] = column;
    if (maxOfTests < row)
      maxOfTests = row;
    if (maxOfTests < column)
      maxOfTests = column;
  }
  diagonalContainer[0] = 1;
  for (lli i = 1; i <= maxOfTests; i++)
  {
    diagonalContainer[i] = diagonalContainer[i - 1] + incrementor;
    incrementor += 2;
  };
  for (lli i = 0; i < t; i++)
  {
    if (i == 0)
    {
      lli output = numberFinder(diagonalContainer, zerothX, zerothY);
      cout << output << "\n";
    }
    else
    {
      lli output = numberFinder(diagonalContainer, rowTestContainer[i], ColumnTestContainer[i]);
      cout << output << "\n";
    }
  }
}