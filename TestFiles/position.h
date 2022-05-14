#pragma once
#include <iostream>
#include <string>
class Position
{
private:
    double squareWidth;
    double squareHeight;
public:
    
    int location;
    // constructors
    Position(): location(0), squareWidth(0), squareHeight(0){};
    
    
    // Copy Constructor
    Position(const Position & rhs):location(rhs.location),squareWidth(rhs.squareWidth), squareHeight(rhs.squareHeight){};
    
    // getters
    int getLocation();
    int getRow();
    int getCol();
    int getX();
    int getY();
    
    bool isValid();
    
    // setters
    void setRow(int row);
    void setCol(int col);
    void set(int row, int col);
    
    
    void adjustRow(int dRow);
    void adjustCol(int dCol);
    

    
    // Assignment Operator Overloaded
    Position &operator = (const Position &rhs)
    {
        location = rhs.location;
        squareWidth = rhs.squareWidth;
        squareHeight = rhs.squareHeight;
        return *this;
    }
    
    Position & operator = (Position && rhs)
    {
        return *this;
    }
    
//    Position & operator = (const char *rhs)
//    {
//        location = rhs;
//        int col = location[0]-'a';
//        int row = location[1]-'1';
//        int position = row *8 +col;
//        locationInt = position;
//        return *this;
//    }
    
    Position & operator = (const std::string &rhs)
    {
        int col = rhs[0]-'a';
        int row = rhs[1]-'1';
        int position = row *8 +col;
        location = position;
        return *this;
    }
    
    
//    bool operator == (const Position & rhs)const
//    {
//        return location == rhs.location;
//    }
   
};

// stream I/O useful for debugging
std::ostream & operator << (std::ostream & out, const Position& pt);
std::istream & operator >> (std::istream & in, Position& pt);

