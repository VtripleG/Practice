#include <iostream>
#include <vector>

int main()
{
  int areasNum = 12;
  std::vector<double> population;
  std::vector<double> density;

  for ( int count = 0; count < areasNum; count++ )
  {
    double buff;
    std::cout << "Enter population of " << count + 1 << " area: ";
    std::cin >> buff;
    population.push_back( buff );
    std::cout << "Enter population density of " << count + 1 << " area: ";
    std::cin >> buff;
    density.push_back( buff );
  }

  for ( int count = 0; count < 30; count++ )
    std::cout << "_";

  std::cout << std::endl;

  double square;

  for ( int count = 0; count < areasNum; count++ )
    square += population[count] / density[count];

  std::cout << "Absolutly square of sity: " << square << std::endl;

  return 0;
}
