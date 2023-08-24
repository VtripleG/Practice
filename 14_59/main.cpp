#include <iostream>
#include <fstream>
#include <string>

int main()
{
  std::string filePath = "./file1.txt";
  std::ifstream fileReader1;
  fileReader1.open( filePath.c_str() );
  std::string stringFromFile1;

  if ( fileReader1.is_open() )
  {
    std::string lineBuff;

    while ( std::getline( fileReader1, lineBuff ) )
      stringFromFile1 += lineBuff;

    fileReader1.close();
  }
  else
  {
    std::cout << "Unsucsess" << std::endl;
    return 1;
  }

  filePath = "./file2.txt";
  std::ifstream fileReader2;
  fileReader2.open( filePath.c_str() );
  std::string stringFromFile2;

  if ( fileReader2.is_open() )
  {
    std::string lineBuff;

    while ( std::getline( fileReader2, lineBuff ) )
      stringFromFile2 += lineBuff;

    fileReader2.close();
  }
  else
  {
    std::cout << "Unsucsess" << std::endl;
    return 1;
  }

  for ( int countChars = 0; countChars < stringFromFile1.length() ; ++countChars )
  {
    if ( stringFromFile1[countChars] != stringFromFile2[countChars] )
    {
      std::cout << "Files are different. Char different number is " << countChars + 1 << std::endl;
      return 0;
    }

  }

  return 0;
}
