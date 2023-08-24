#include <iostream>
#include <string>
#include <fstream>

int main()
{

  std::string filePath1 = "./file1.txt";
  std::string filePath2 = "./file2.txt";

  std::ifstream fileReader1 ( filePath1 );
  std::ifstream fileReader2 ( filePath2 );

  if ( fileReader1.is_open() && fileReader2.is_open() )
  {
    std::string buffLine1;
    std::string buffLine2;
    int lineCount = 1;

    while ( std::getline( fileReader1, buffLine1 ) && std::getline( fileReader2, buffLine2 ) )
    {
      if ( buffLine1 != buffLine2 )
        std::cout << "File is different. Different line number is " << lineCount << std::endl;

      ++lineCount;
    }
  }
  else
  {
    std::cout << "Unsucsess until opening files" << std::endl;
    return 1;
  }

  std::cout << "File is identical" << std::endl;

  return 0;
}
