#include <iostream>

double maxVal ( const double first, const double second, const double fird )
{
  double maxVal;
  bool flag = first > second && first > fird;

  if ( flag )
  {
    maxVal = first;
    return maxVal;
  }

  flag = second > first && second > fird;

  if ( flag )
  {
    maxVal = second;
    return maxVal;
  }

  maxVal = fird;
  return maxVal;
}

double minVal ( const double first, const double second, const double fird )
{
  double minVal;
  bool flag = first < second && first < fird;

  if ( flag )
  {
    minVal = first;
    return minVal;
  }

  flag = second < first && second < fird;

  if ( flag )
  {
    minVal = second;
    return minVal;
  }

  minVal = fird;
  return minVal;
}

int main()
{
  double first, second, fird;

  std::cout << "Enter 3 real numbers: ";
  std::cin >> first >> second >> fird;

  std::cout << "Max value: " << maxVal( first, second, fird ) << std::endl;
  std::cout << "Min value: " << minVal( first, second, fird ) << std::endl;

  return 0;
}
