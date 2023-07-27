#include <iostream>
#include <cmath>

bool IsPerfect ( int num )
{
  int sum = 0;

  for ( int count = 1; count < num; count++ )
  {
    if ( num % count == 0 )
      sum += count;
  }

  if ( sum == num )
    return true;

  return false;
}
int main()
{
  std::cout << "Enter number: ";
  int num;
  std::cin >> num;

  const bool flag = IsPerfect( num );
  std::cout << flag << std::endl;
  return 0;
}
