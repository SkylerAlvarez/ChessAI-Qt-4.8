#ifndef WEIGHTS_H
#define WEIGHTS_H

#include "piece.h"
#include <QPoint>
class Weights
{
private:
    int PawnBoardWeight[8][8] =
    {
        {0,  0,  0,  0,  0,  0,  0,  0},
       {50, 50, 50, 50, 50, 50, 50, 50},
        {10, 10, 20, 30, 30, 20, 10, 10},
        {5,  5, 10, 25, 25, 10,  5,  5},
        {0,  0,  0, 20, 20,  0,  0,  0},
        {5, -5,-10,  0,  0,-10, -5,  5},
        {5, 10, 10,-20,-20, 10, 10,  5},
        {0,  0,  0,  0,  0,  0,  0,  0}
    };

    int PawnMirrorBoardWeight[8][8] =
    {
        {0,  0,  0,  0,  0,  0,  0,  0},
        {5, 10, 10,-20,-20, 10, 10,  5},
        {5, -5,-10,  0,  0,-10, -5,  5},
        {0,  0,  0, 20, 20,  0,  0,  0},
        {5,  5, 10, 25, 25, 10,  5,  5},
        {10, 10, 20, 30, 30, 20, 10, 10},
        {50, 50, 50, 50, 50, 50, 50, 50},
        {0,  0,  0,  0,  0,  0,  0,  0}
    };

    int KnightBoardWeight[8][8] =
    {
        {-50,-40,-30,-30,-30,-30,-40,-50},
        {-40,-20,  0,  0,  0,  0,-20,-40},
        {-30,  0, 10, 15, 15, 10,  0,-30},
        {-30,  5, 15, 20, 20, 15,  5,-30},
        {-30,  0, 15, 20, 20, 15,  0,-30},
        {-30,  5, 10, 15, 15, 10,  5,-30},
        {-40,-20,  0,  5,  5,  0,-20,-40},
        {-50,-40,-30,-30,-30,-30,-40,-50}
    };

    int KnightMirrorBoardWeight[8][8] =
    {
        {-50,-40,-30,-30,-30,-30,-40,-50},
        {-40,-20,  0,  5,  5,  0,-20,-40},
        {-30,  5, 10, 15, 15, 10,  5,-30},
        {-30,  0, 15, 20, 20, 15,  0,-30},
        {-30,  5, 15, 20, 20, 15,  5,-30},
        {-30,  0, 10, 15, 15, 10,  0,-30},
        {-40,-20,  0,  0,  0,  0,-20,-40},
        {-50,-40,-30,-30,-30,-30,-40,-50}
    };

    int BishopBoardWeight[8][8] =
    {
        {-20,-10,-10,-10,-10,-10,-10,-20},
        {-10,  0,  0,  0,  0,  0,  0,-10},
        {-10,  0,  5, 10, 10,  5,  0,-10},
        {-10,  5,  5, 10, 10,  5,  5,-10},
        {-10,  0, 10, 10, 10, 10,  0,-10},
        {-10, 10, 10, 10, 10, 10, 10,-10},
        {-10,  5,  0,  0,  0,  0,  5,-10},
        {-20,-10,-10,-10,-10,-10,-10,-20}
    };

    int BishopMirrowBoardWeight[8][8] =
    {
        {-20,-10,-10,-10,-10,-10,-10,-20},
        {-10,  5,  0,  0,  0,  0,  5,-10},
        {-10, 10, 10, 10, 10, 10, 10,-10},
        {-10,  0, 10, 10, 10, 10,  0,-10},
        {-10,  5,  5, 10, 10,  5,  5,-10},
        {-10,  0,  5, 10, 10,  5,  0,-10},
        {-10,  0,  0,  0,  0,  0,  0,-10},
        {-20,-10,-10,-10,-10,-10,-10,-20}
    };

    int RookBoardWeight[8][8] =
    {
        {0,  0,  0,  0,  0,  0,  0,  0},
        {5, 10, 10, 10, 10, 10, 10,  5},
        {-5,  0,  0,  0,  0,  0,  0, -5},
        {-5,  0,  0,  0,  0,  0,  0, -5},
        {-5,  0,  0,  0,  0,  0,  0, -5},
        {-5,  0,  0,  0,  0,  0,  0, -5},
        {-5,  0,  0,  0,  0,  0,  0, -5},
        {0,  0,  0,  5,  5,  0,  0,  0}
    };

    int RookMirrorBoardWeight[8][8] =
    {
        {0,  0,  0,  5,  5,  0,  0,  0},
        {-5,  0,  0,  0,  0,  0,  0, -5},
        {-5,  0,  0,  0,  0,  0,  0, -5},
        {-5,  0,  0,  0,  0,  0,  0, -5},
        {-5,  0,  0,  0,  0,  0,  0, -5},
        {-5,  0,  0,  0,  0,  0,  0, -5},
        {5, 10, 10, 10, 10, 10, 10,  5},
        {0,  0,  0,  0,  0,  0,  0,  0}
    };

    int QueenBoardWeight[8][8] =
    {
        {-20,-10,-10, -5, -5,-10,-10,-20},
        {-10,  0,  0,  0,  0,  0,  0,-10},
        {-10,  0,  5,  5,  5,  5,  0,-10},
        {-5,  0,  5,  5,  5,  5,  0, -5},
        {0,  0,  5,  5,  5,  5,  0, -5},
        {-10,  5,  5,  5,  5,  5,  0,-10},
        {-10,  0,  5,  0,  0,  0,  0,-10},
        {-20,-10,-10, -5, -5,-10,-10,-20}
    };

    int QueenMirrorBoardWeight[8][8] =
    {
        {-20,-10,-10, -5, -5,-10,-10,-20},
        {-10,  0,  5,  0,  0,  0,  0,-10},
        {-10,  5,  5,  5,  5,  5,  0,-10},
        {0,  0,  5,  5,  5,  5,  0, -5},
        {-5,  0,  5,  5,  5,  5,  0, -5},
        {-10,  0,  5,  5,  5,  5,  0,-10},
        {-10,  0,  0,  0,  0,  0,  0,-10},
        {-20,-10,-10, -5, -5,-10,-10,-20}
    };

    int KingBoardWeight[8][8] =
    {
        {-30,-40,-40,-50,-50,-40,-40,-30},
        {-30,-40,-40,-50,-50,-40,-40,-30},
        {-30,-40,-40,-50,-50,-40,-40,-30},
        {-30,-40,-40,-50,-50,-40,-40,-30},
        {-20,-30,-30,-40,-40,-30,-30,-20},
        {-10,-20,-20,-20,-20,-20,-20,-10},
        {20, 20,  0,  0,  0,  0, 20, 20},
        {20, 30, 10,  0,  0, 10, 30, 20}
    };

    int KingMirrorBoardWeight[8][8] =
    {
        {20, 30, 10,  0,  0, 10, 30, 20},
        {20, 20,  0,  0,  0,  0, 20, 20},
        {-10,-20,-20,-20,-20,-20,-20,-10},
        {-20,-30,-30,-40,-40,-30,-30,-20},
        {-30,-40,-40,-50,-50,-40,-40,-30},
        {-30,-40,-40,-50,-50,-40,-40,-30},
        {-30,-40,-40,-50,-50,-40,-40,-30},
        {-30,-40,-40,-50,-50,-40,-40,-30},
    };

    int KingEndBoardWeight[8][8] =
    {
        {-50,-40,-30,-20,-20,-30,-40,-50},
        {-30,-20,-10,  0,  0,-10,-20,-30},
        {-30,-10, 20, 30, 30, 20,-10,-30},
        {-30,-10, 30, 40, 40, 30,-10,-30},
        {-30,-10, 30, 40, 40, 30,-10,-30},
        {-30,-10, 20, 30, 30, 20,-10,-30},
        {-30,-30,  0,  0,  0,  0,-30,-30},
        {-50,-30,-30,-30,-30,-30,-30,-50}
    };

    int KingEndMirrorBoardWeight[8][8] =
    {
        {-50,-30,-30,-30,-30,-30,-30,-50},
        {-30,-30,  0,  0,  0,  0,-30,-30},
        {-30,-10, 20, 30, 30, 20,-10,-30},
        {-30,-10, 30, 40, 40, 30,-10,-30},
        {-30,-10, 30, 40, 40, 30,-10,-30},
        {-30,-10, 20, 30, 30, 20,-10,-30},
        {-30,-20,-10,  0,  0,-10,-20,-30},
        {-50,-40,-30,-20,-20,-30,-40,-50}
    };

    int MirrorPawn(int x, int y);
public:
    Weights();
    bool endGame = false;
    int GetPieceWeight(Piece::pieceType type);
    int GetBoardWeight(Piece::pieceType type, QPoint position, Piece::playerColor color);
};

#endif // WEIGHTS_H
