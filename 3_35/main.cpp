#include <iostream>

class Position
{
public:
    Position(int v, int h)
    {
        this->v = v;
        this->h = h;
    }
    int h;
    int v;

    ~Position()
    {
    }
};

int main()
{
    int a, b, c, d, e, f;

    std::cout << "Enter 6 numbers" << std::endl;
    std::cin >> a >> b >> c >> d >> e >> f;

    auto whitePosition = new Position(a, b);
    auto blackPosition = new Position(c, d);
    auto endWhitePosition = new Position(e, f);

    if(((whitePosition->h == endWhitePosition->h) || (whitePosition->v == endWhitePosition->v)) && ((blackPosition->h != endWhitePosition->h) && (blackPosition->v != endWhitePosition->v)))
    {
        std::cout << "Sucsessfull step" << std::endl;
    }
    else
        std::cout << "Unreal step" << std::endl;
    delete(whitePosition);
    delete(blackPosition);
    delete(endWhitePosition);

    return 0;
}
