#include <iostream>
#include <vector>

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

std::vector<Point> GetAllPoints ( Point *leftBottomAngle, const int width, const int hight )
{
    std::vector<Point> rectPoints;
    for ( int countX = leftBottomAngle->x; countX <= leftBottomAngle->x + width; countX++ )
        for ( int countY = leftBottomAngle->y; countY <= leftBottomAngle->y + hight; countY++ )
            rectPoints.push_back(Point(countX, countY));

    return rectPoints;
}

bool FirstInSecond ( std::vector<Point> firstRect, std::vector<Point> secondRect )
{
    bool flag;
    for ( auto const &firstRectPoint: firstRect )
    {
        flag = false;
        for( auto const &secondRectPoint: secondRect )
        {
            if( ( firstRectPoint.x == secondRectPoint.x ) && ( firstRectPoint.y == secondRectPoint.y ) )
            {
                flag = true;
                break;
            }
        }
        if(flag == false)
                return false;
    }
    return true;
}

bool SecondInFirst ( std::vector<Point> firstRect, std::vector<Point> secondRect )
{
    bool flag;
    for ( auto const &secondRectPoint: secondRect )
    {
        flag = false;
        for( auto const &firstRectPoint: firstRect )
        {
            if( ( firstRectPoint.x == secondRectPoint.x ) && ( firstRectPoint.y == secondRectPoint.y ) )
            {
                flag = true;
                break;
            }
        }
        if(flag == false)
                return false;
    }
    return true;
}

bool intersectionOfRects ( std::vector<Point> firstRect, std::vector<Point> secondRect )
{
    for ( auto const &firstRectPoint: firstRect )
        for( auto const &secondRectPoint: secondRect )
            if( ( firstRectPoint.x == secondRectPoint.x ) && ( firstRectPoint.y == secondRectPoint.y ) )
                return true;

    return false;
}

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

    std::vector<Point> firstRect = GetAllPoints( firstAngleLeft, widthFirstRect, hightFirstRect ) ;
    std::vector<Point> secondRect = GetAllPoints( secondAngleLeft, widthSecondRect, hightSecondRect ) ;

    if ( FirstInSecond( firstRect, secondRect ) )
        std::cout << "Yes" << std::endl;
    else
        std::cout << "No" << std::endl;

    if ( FirstInSecond(firstRect, secondRect) )
        std::cout << "First rect is part of second rect" << std::endl;
    else
    {
        if ( SecondInFirst( firstRect, secondRect ) )
            std::cout << "Second rect is part of first rect" << std::endl;
        else
            std::cout << "Nothing" << std::endl;
    }

    if ( intersectionOfRects(firstRect, secondRect) )
        std::cout << "Yes" << std::endl;
    else
        std::cout << "No" << std::endl;

    delete( firstAngleLeft ) ;
    delete( secondAngleLeft ) ;

    return 0;
}
