#include <iostream>
#include <string>

const int defYear = 1984;

std::string GetYearNameAfter1984( const int year )
{
  std::string yearName;
  const int actionFlagAnimal = ( year - defYear ) % 12;
  const int actionFlagColor = ( year - defYear ) % 10;

  switch ( actionFlagAnimal )
  {
    case 0:
      yearName += "Rat, ";
      break;

    case 1:
      yearName += "Cow, ";
      break;

    case 2:
      yearName += "Tiger, ";
      break;

    case 3:
      yearName += "Hare, ";
      break;

    case 4:
      yearName += "Dragon, ";
      break;

    case 5:
      yearName += "Snake, ";
      break;

    case 6:
      yearName += "Horse, ";
      break;

    case 7:
      yearName += "Sheep, ";
      break;

    case 8:
      yearName += "Monkey, ";
      break;

    case 9:
      yearName += "Rooster, ";
      break;

    case 10:
      yearName += "Dog, ";
      break;

    case 11:
      yearName += "Pig, ";
      break;

    default:
      break;
  }

  switch ( actionFlagColor )
  {
    case 0:
      yearName += "green";
      break;

    case 1:
      yearName += "green";
      break;

    case 2:
      yearName += "red";
      break;

    case 3:
      yearName += "red";
      break;

    case 4:
      yearName += "yellow";
      break;

    case 5:
      yearName += "yellow";
      break;

    case 6:
      yearName += "white";
      break;

    case 7:
      yearName += "white";
      break;

    case 8:
      yearName += "black";
      break;

    case 9:
      yearName += "black";
      break;

    default:
      break;
  }

  return yearName;
}

std::string GetYearNameBefore1984( const int year )
{
  std::string yearName;
  const int actionFlagAnimal = ( defYear - year ) % 12;
  const int actionFlagColor = ( defYear - year ) % 10;

  switch ( actionFlagAnimal )
  {
    case 12:
      yearName += "Rat, ";
      break;

    case 11:
      yearName += "Cow, ";
      break;

    case 10:
      yearName += "Tiger, ";
      break;

    case 9:
      yearName += "Hare, ";
      break;

    case 8:
      yearName += "Dragon, ";
      break;

    case 7:
      yearName += "Snake, ";
      break;

    case 6:
      yearName += "Horse, ";
      break;

    case 5:
      yearName += "Sheep, ";
      break;

    case 4:
      yearName += "Monkey, ";
      break;

    case 3:
      yearName += "Rooster, ";
      break;

    case 2:
      yearName += "Dog, ";
      break;

    case 1:
      yearName += "Pig, ";
      break;

    default:
      break;
  }

  switch ( actionFlagColor )
  {
    case 10:
      yearName += "green";
      break;

    case 9:
      yearName += "green";
      break;

    case 8:
      yearName += "red";
      break;

    case 7:
      yearName += "red";
      break;

    case 6:
      yearName += "yellow";
      break;

    case 5:
      yearName += "yellow";
      break;

    case 4:
      yearName += "white";
      break;

    case 3:
      yearName += "white";
      break;

    case 2:
      yearName += "black";
      break;

    case 1:
      yearName += "black";
      break;

    default:
      break;
  }

  return yearName;
}

int main()
{
  int year;

  std::cout << "Enter year: ";
  std::cin >> year;

  if ( year >= defYear )
    std::cout << GetYearNameAfter1984( year ) << std::endl;
  else
    std::cout << GetYearNameBefore1984( year ) << std::endl;

  return 0;
}
