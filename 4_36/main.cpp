#include <iostream>
#include <cmath>

int main()
{
  double t;

  std::cout << "Enter time in minuets: ";
  std::cin >> t;

  if ( ( std::fmod( t, 5 ) >= 0 ) && ( std::fmod( t, 5 ) <= 3 ) )
    std::cout << "GREEN" << std::endl;
  else
    std::cout << "RED" << std::endl;

  return 0;
}
