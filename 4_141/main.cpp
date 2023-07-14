#include <iostream>

int main()
{
  int countFlat, startNumber;
  int sumFlat;

  std::cout << "Enter count and start number of flat" << std::endl;
  std::cin >> countFlat >> startNumber;

  for ( int count = startNumber; count <= startNumber + countFlat; count++ )
    sumFlat += count;

  if ( sumFlat % 2 == 0 )
    std::cout << "Even" << std::endl;
  else
    std::cout << "Uneven" << std::endl;

  return 0;
}
