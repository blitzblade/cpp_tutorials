#include <iostream>

class Position
{
public:
    int x = 10;
    int y = 20;
    Position operator+(Position pos)
    {
        Position new_pos;
        new_pos.x = x + pos.x;
        new_pos.y = y + pos.y;

        return new_pos;
    }

    bool operator==(Position pos)
    {
        return (x == pos.x && y == pos.y);
    }
};