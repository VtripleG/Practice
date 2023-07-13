#include <iostream>

class Point
{
public:
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    uint x;
    uint y;

    ~Point()
    {
    }
};

int main()
{
    int x, y;

    std::cout << "Enter left bottom angle position of first rect" << std::endl;
    std::cin >> x >> y;
    Point *firstAngleLeft = new Point(x, y);

    std::cout << "Enter left bottom angle position of second rect" << std::endl;
    std::cin >> x >> y;
    Point *secondAngleLeft = new Point(x, y);

    std::cout << "Enter sides sizes of first rect(width, hight)" << std::endl;
    std::cin >> x >> y;
    const int widthFirstRect = x;
    const int hightFirstRect = y;

    std::cout << "Enter sides sizes of second rect(width, hight)" << std::endl;
    std::cin >> x >> y;
    const int widthSecondRect = x;
    const int hightSecondRect = y;

    if ( firstAngleLeft->x < secondAngleLeft->x )
        x = firstAngleLeft->x;
    else
        x = secondAngleLeft->x;

    if ( firstAngleLeft->y < secondAngleLeft->y )
        y = firstAngleLeft->y;
    else
        y = secondAngleLeft->y;

    Point *leftBottomAngle = new Point(x, y);

    if ( firstAngleLeft->x + widthFirstRect > secondAngleLeft->x + widthSecondRect )
        x = firstAngleLeft->x + widthFirstRect;
    else
        x = secondAngleLeft->x + widthSecondRect;

    if ( firstAngleLeft->y + hightFirstRect > secondAngleLeft->y + hightSecondRect )
        y = firstAngleLeft->y + hightFirstRect;
    else
        y = secondAngleLeft->y + hightSecondRect;

    delete(firstAngleLeft);
    delete(secondAngleLeft);

    Point *rightTopAngle = new Point(x, y);

    std::cout << "Left bottom pos: (" << leftBottomAngle->x << ", " << leftBottomAngle->y << ")" << std::endl << "Right bottom pos: (" << rightTopAngle->x << ", " << rightTopAngle->y << ")" << std::endl;

    delete(rightTopAngle);
    delete(leftBottomAngle);

    return 0;
}
