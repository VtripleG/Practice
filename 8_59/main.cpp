#include <iostream>

int main()
{
  const int maxNum = 7;

  for ( int denominator = 2; denominator <= maxNum; denominator++ )
    for ( int numerator = 1 ; numerator < denominator; numerator++ )
    {
      bool flag = true;

      for ( int comDen = 2; comDen <= numerator; comDen++ )
      {
        if ( ( ( denominator % comDen == 0 && numerator % comDen == 0 ) || denominator % numerator == 0 ) && numerator != 1 )
        {
          flag = false;
          break;
        }
      }

      if ( flag )
        std::cout << numerator << "/" << denominator << std::endl;
    }

  return 0;
}
