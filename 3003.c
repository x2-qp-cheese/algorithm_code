#include <stdio.h>

int main(){
    int king, queen, rook, bishop, knight, pawn;
    int king_tmp = 1;
    int queen_tmp = 1;
    int rook_tmp = 2;
    int bishop_tmp = 2;
    int knight_tmp = 2;
    int pawn_tmp = 8;
    scanf("%d %d %d %d %d %d", &king, &queen,  &rook,&bishop,  &knight, &pawn);

    printf("%d %d %d %d %d %d", king_tmp-king, queen_tmp-queen,  rook_tmp-rook, bishop_tmp-bishop, knight_tmp -knight, pawn_tmp-pawn);
    
}