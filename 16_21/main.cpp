#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
  std::srand( static_cast<unsigned int>( std::time( nullptr ) ) );
  const int numbersNumber = 50;
  int zeroCounter = 0;
  int oneCounter = 0;

  for ( int counter = 0; counter < numbersNumber; ++counter )
  {
    int randomNumber = std::rand() % 2;

    if ( randomNumber == 0 )
      ++zeroCounter;
    else
      ++oneCounter;

    std::cout << randomNumber << std::endl;

  }

  std::cout << "Zero: " << zeroCounter << std::endl << "One: " << oneCounter << std::endl;
  return 0;
}
