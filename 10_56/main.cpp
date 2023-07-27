#include <iostream>

bool IsSimple ( const int number, const int denom )
{
  if ( denom == number )
    return true;

  bool flag = false;

  if ( number % denom != 0 )
    flag = IsSimple( number, denom + 1 );

  return flag;
}
int main()
{
  std::cout << "Enter number: ";
  int number;
  std::cin >> number;
  const int start = 2;

  if ( IsSimple( number, start ) )
    std::cout << "true" << std::endl;
  else
    std::cout << "false" << std::endl;

  return 0;
}
