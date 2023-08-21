#include <iostream>
#include <vector>

void line()
{
  for ( int count = 0; count < 100; ++count )
    std::cout << "-";

  std::cout << std::endl;
}

class Score
{
public:
  int scoredBalls;
  int missedBalls;

  Score ()
  {
    scoredBalls = 0;
    missedBalls = 0;
  }
};

class Team
{
public:
  int pointsScore = 0;
  std::vector <Score> scoreList;

  Team ( const int teamsNumber )
  {
    for ( int count = 0; count < teamsNumber; ++count )
      scoreList.push_back( Score() );
  }
};

int DrawNumber ( std::vector <Team>& teamsList )
{
  int drawCount = 0;

  for ( int teamCount = 0; teamCount < teamsList.size(); ++teamCount )
    for ( int gameCount = teamCount; gameCount < teamsList.size(); ++gameCount )
    {
      if ( gameCount != teamCount )
        if ( teamsList[teamCount].scoreList[gameCount].scoredBalls == teamsList[teamCount].scoreList[gameCount].missedBalls )
          drawCount++;
    }

  return drawCount;

}

int DifferenceNumber ( std::vector <Team>& teamsList )
{
  int differenceCount = 0;

  for ( int teamCount = 0; teamCount < teamsList.size(); ++teamCount )
    for ( int gameCount = teamCount; gameCount < teamsList.size(); ++gameCount )
    {
      if ( gameCount != teamCount )
        if ( teamsList[teamCount].scoreList[gameCount].scoredBalls - teamsList[teamCount].scoreList[gameCount].missedBalls >= 3
             || teamsList[teamCount].scoreList[gameCount].scoredBalls - teamsList[teamCount].scoreList[gameCount].missedBalls <=
             -3 )
          differenceCount++;
    }

  return differenceCount;
}

void PointsScore ( std::vector <Team>& teamsList )
{
  for ( int teamCount = 0; teamCount < teamsList.size(); ++teamCount )
    for ( int gameCount = 0; gameCount < teamsList.size(); ++gameCount )
    {
      if ( gameCount != teamCount )
      {
        if ( teamsList[teamCount].scoreList[gameCount].scoredBalls > teamsList[teamCount].scoreList[gameCount].missedBalls )
          teamsList[teamCount].pointsScore += 3;
        else if ( teamsList[teamCount].scoreList[gameCount].scoredBalls =
                    teamsList[teamCount].scoreList[gameCount].missedBalls )
          teamsList[teamCount].pointsScore += 1;
      }
    }
}

void WhoIsChampion ( std::vector <Team>& teamsList )
{
  int championNumber = 0;
  int championScore = teamsList[0].pointsScore;

  for ( int teamCount = 1; teamCount < teamsList.size(); ++teamCount )
    if ( teamsList[teamCount].pointsScore > championScore )
    {
      championScore = teamsList[teamCount].pointsScore;
      championNumber = teamCount;
    }

  std::cout << "Champion is " << championNumber + 1 << " team, scored " << championScore << " points" << std::endl;

}

int main()
{
  const int teamsNumber = 4;
  const int gamesNumber = 4;

  std::vector <Team> teamsList;

  for ( int count = 0; count < teamsNumber; ++count )
    teamsList.push_back( Team( teamsNumber ) );

  for ( int teamCount = 0; teamCount < teamsNumber; ++teamCount )
    for ( int gameCount = teamCount; gameCount < gamesNumber; ++gameCount )
    {
      if ( gameCount != teamCount )
      {
        std::cout << "Team " << teamCount + 1 << ", game " << gameCount + 1 << std::endl;
        int buffScored = 0;
        std::cout << "Enter scored balls: ";
        std::cin >> buffScored;

        int buffMissed = 0;
        std::cout << "Enter missed balls: ";
        std::cin >> buffMissed;

        teamsList[teamCount].scoreList[gameCount].scoredBalls = buffScored;
        teamsList[teamCount].scoreList[gameCount].missedBalls = buffMissed;

        teamsList[gameCount].scoreList[teamCount].scoredBalls = buffMissed;
        teamsList[gameCount].scoreList[teamCount].missedBalls = buffScored;
      }
    }

  line();

  for ( int teamCount = 0; teamCount < teamsNumber; ++teamCount )
  {
    for ( int gameCount = 0; gameCount < gamesNumber; ++gameCount )
    {
      std::cout << "Team " << teamCount + 1 << ", game " << gameCount + 1 << std::endl;
      std::cout << "Scoread balls: " << teamsList[teamCount].scoreList[gameCount].scoredBalls << std::endl;
      std::cout << "Scoread balls: " << teamsList[teamCount].scoreList[gameCount].missedBalls << std::endl;
    }
  }

  line();

  std::cout << "All draw number: " << DrawNumber( teamsList ) << std::endl;

  line();

  std::cout << "Difference => 3: " << DifferenceNumber ( teamsList ) << std::endl;

  line();

  PointsScore( teamsList );

  for ( int teamCount = 0; teamCount < teamsNumber; ++teamCount )
    std::cout << "Points score team " << teamCount + 1 << ": " << teamsList[teamCount].pointsScore << std::endl;

  line();

  WhoIsChampion( teamsList );

  return 0;
}
