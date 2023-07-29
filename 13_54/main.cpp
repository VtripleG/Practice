#include <iostream>
#include <vector>

int main()
{
  std::vector <std::vector <std::vector <int>>> teamList;
  const int teamNum = 4;
  const int gamesNum = 4;

  for ( int count = 0; count < teamNum; ++count )
  {
    std::vector <std::vector <int>> buff;
    std::vector <int> buffScore;
    teamList.push_back( buff );
    teamList[count].push_back( buffScore );
    teamList[count].push_back( buffScore );
  }

  for ( int count = 0; count < teamNum; ++count )
  {
    for ( int gameCount = 0; gameCount < gamesNum; ++gameCount )
    {
      if ( gameCount != count )
      {
        std::cout << "Enter scored ball in " << gameCount + 1 << " game of " << count + 1 << " team: ";
        int scoredBalls;
        std::cin >> scoredBalls;
        std::cout << "Enter missed ball in " << gameCount + 1 << "game of " << count + 1 << " team: ";
        int missedBalls;
        std::cin >> missedBalls;
        teamList[count][0].push_back( scoredBalls );
        teamList[count][1].push_back( missedBalls );
      }
      else
      {
        teamList[count][0].push_back( 0 );
        teamList[count][1].push_back( 0 );
      }

    }
  }

  for ( int count = 0; count < teamNum; ++count )
  {
    std::cout << "team " << count + 1 << std::endl;

    for ( int gameCount = 0; gameCount < gamesNum; ++gameCount )
      std::cout << "game " << gameCount + 1 << ": " << teamList[count][0][gameCount] << " " << teamList[count][1][gameCount]
                << std::endl;
  }

  return 0;
}
