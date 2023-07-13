#include <iostream>
#include <cstdlib>

class Position
{
public:
    Position(int v, int h)
    {
        this->v = v;
        this->h = h;
    }
    uint h;
    uint v;

    ~Position()
    {
    }
};

bool RookAndRook ( Position* whitePosition, Position* blackPosition, Position* endWhitePosition )
{
    if( ( ( whitePosition->h == endWhitePosition->h ) || ( whitePosition->v == endWhitePosition->v ) ) &&
            ( ( blackPosition->h != endWhitePosition->h ) && ( blackPosition->v != endWhitePosition->v ) ) )
    {
        return true;
    }
    return false;
}

bool RookAndQueen ( Position* whitePosition, Position* blackPosition, Position* endWhitePosition )
{
    if( ( ( whitePosition->h == endWhitePosition->h ) || ( whitePosition->v == endWhitePosition->v ) ) &&
            ( ( blackPosition->h != endWhitePosition->h ) && ( blackPosition->v != endWhitePosition->v ) ) &&
            ( abs ( endWhitePosition->h - blackPosition->h ) != abs ( endWhitePosition->v - blackPosition->v ) ) )
    {
        return true;
    }
    return false;
}

bool RookAndHorse ( Position* whitePosition, Position* blackPosition, Position* endWhitePosition )
{

}

int main()
{
    uint a, b, c, d, e, f;

    std::cout << "Enter 3 position:\n1.Position white shape\n2.Position black shape\n3.End position for white shape" << std::endl;
    std::cin >> a >> b >> c >> d >> e >> f;

    auto whitePosition = new Position( a, b );
    auto blackPosition = new Position( c, d );
    auto endWhitePosition = new Position(e, f );

    if( RookAndQueen( whitePosition, blackPosition, endWhitePosition ) )
    {
        std::cout << "Sucsessfull step" << std::endl;
    }
    else
        std::cout << "Unreal step" << std::endl;


    delete( whitePosition );
    delete( blackPosition );
    delete( endWhitePosition );

    return 0;
}
