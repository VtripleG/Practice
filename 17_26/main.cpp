#include <iostream>
#include <algorithm>

int main()
{
  int n;
  std::cout << "Enter array size: ";
  std::cin >> n;

  int arr[n][n];

  for ( int i = 0; i < n; ++i )
  {
    for ( int j = 0; j < n; ++j )
      arr[i][j] = rand() % 100;
  }

  std::cout << "Source array:" << std::endl;

  for ( int i = 0; i < n; ++i )
  {
    for ( int j = 0; j < n; ++j )
      std::cout << arr[i][j] << "\t";

    std::cout << std::endl;
  }

  for ( int i = 0; i < n; ++i )
    std::sort( arr[i], arr[i] + n );

  for ( int i = 0; i < n; ++i )
  {
    for ( int j = i + 1; j < n; ++j )
      std::swap( arr[i][j], arr[j][i] );
  }

  for ( int i = 0; i < n; ++i )
    std::sort( arr[i], arr[i] + n );

  for ( int i = 0; i < n; ++i )
  {
    for ( int j = i + 1; j < n; ++j )
      std::swap( arr[i][j], arr[j][i] );
  }

  std::cout << "Sorted array:" << std::endl;

  for ( int i = 0; i < n; ++i )
  {
    for ( int j = 0; j < n; ++j )
      std::cout << arr[i][j] << "\t";

    std::cout << std::endl;
  }

  return 0;
}
