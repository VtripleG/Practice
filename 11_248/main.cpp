#include <iostream>

int main()
{
  int n = 30;
  char* first = new char[n];
  std::cout << "Enter 30 values of first reseorcher: " << std::endl;

  for ( int count = 0; count < 30; count++ )
  {
    char buff;
    std::cin >> buff;
    first[count] = buff;
  }

  char* second = new char[n];
  std::cout << "Enter 30 values of second reseorcher: " << std::endl;

  for ( int count = 0; count < 30; count++ )
  {
    char buff;
    std::cin >> buff;
    second[count] = buff;
  }

  for ( int count = 0; count < 30; count++ )
    std::cout << first[count] << "-" << second[count] << " ";

  std::cout << std::endl;
  return 0;
}
