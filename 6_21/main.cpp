#include <iostream>
#include <vector>

int IntFromConsole ()
{
  int in;
  std::cin >> in;
  return in;
}

int main()
{
  std::cout << "Enter n: ";
  const int n = IntFromConsole();

  std::vector <int> fibSeq = {1, 1};

  for ( int count = 2; count > 0; count++ )
  {
    const int buffNum = fibSeq[count - 1] + fibSeq[count - 2];
    fibSeq.push_back( buffNum );

    if ( n < buffNum )
    {
      std::cout << "FibSea[" << count << "] = " << fibSeq[count] << std::endl;
      break;
    }
  }

  const int maxNum = 1000;

  for ( int count = fibSeq.size() - 1; count > 0; count++ )
  {
    const int buffNum = fibSeq[count - 1] + fibSeq[count - 2];

    if ( maxNum < buffNum )
      break;

    fibSeq.push_back( buffNum );
  }

  int sumSeq = 0;

  for ( int count = 0; count < fibSeq.size(); count++ )
    sumSeq += fibSeq[count];

  std::cout << "Sum of fibSeq = " << sumSeq << std::endl;
  return 0;
}
