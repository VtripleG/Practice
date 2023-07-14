#include <iostream>
#include <cstdlib>

class Point
{
public:
  Point( int v, int h )
  {
    this->v = v;
    this->h = h;
  }
  uint h;
  uint v;

  ~Point()
  {
  }
};

bool RookAndRook ( Point* whitePosition, Point* blackPosition, Point* endWhitePosition )
{
  if ( ( ( whitePosition->h == endWhitePosition->h ) || ( whitePosition->v == endWhitePosition->v ) ) &&
       ( ( blackPosition->h != endWhitePosition->h ) && ( blackPosition->v != endWhitePosition->v ) ) )
    return true;

  return false;
}

bool RookAndQueen ( Point* whitePosition, Point* blackPosition, Point* endWhitePosition )
{
  if ( ( ( whitePosition->h == endWhitePosition->h ) || ( whitePosition->v == endWhitePosition->v ) ) &&
       ( ( blackPosition->h != endWhitePosition->h ) && ( blackPosition->v != endWhitePosition->v ) ) &&
       ( abs ( endWhitePosition->h - blackPosition->h ) != abs ( endWhitePosition->v - blackPosition->v ) ) )
    return true;

  return false;
}

bool RookAndHorse ( Point* whitePosition, Point* blackPosition, Point* endWhitePosition )
{

}

int main()
{
  uint a, b, c, d, e, f;

  std::cout << "Enter 3 position:\n1.Position white shape\n2.Position black shape\n3.End position for white shape" <<
            std::endl;
  std::cin >> a >> b >> c >> d >> e >> f;

  auto whitePosition = new Point( a, b );
  auto blackPosition = new Point( c, d );
  auto endWhitePosition = new Point( e, f );

  if ( RookAndQueen( whitePosition, blackPosition, endWhitePosition ) )
    std::cout << "Sucsessfull step" << std::endl;
  else
    std::cout << "Unreal step" << std::endl;

  delete ( whitePosition );
  delete ( blackPosition );
  delete ( endWhitePosition );

  return 0;
}
