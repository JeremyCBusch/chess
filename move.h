#include "position.h"
#pragma once
class Move
{
private:
    Position source;
    bool dest;
    char piece;
    char capture;
    bool enpassant;
    bool castleK;
    bool castleQ;
    bool isWhite;
public:
    Move();
    void getText();
    Position getSrc();
    
    Position getDes();
    
    char getPromotion();
    
    char getCapture();
    
    bool getEnPassant();
    
    bool getCastleK();
    
    bool getCastleQ();
    
    void setEnPassant();
    
    void setCastle();
    
    void setCastleQ();
    
    void setWhiteMove();
    
    void assign(Move move);
    
    
    
};

