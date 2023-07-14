#include <iostream>
#include <cmath>

int main()
{
  int n;

  std::cout << "Enter reverse try: ";
  std::cin >> n;

  double wayToHome;
  double absWay;

  for ( int count = 1; count <= n; count++ )
  {
    double way = count;

    if ( count % 2 == 0 )
      wayToHome -= 1 / way;
    else
      wayToHome += 1 / way;

    absWay += 1 / way;
  }

  std::cout << "Way to home: " << wayToHome << std::endl << "Absolut way: " << absWay << std::endl;

  return 0;
}
