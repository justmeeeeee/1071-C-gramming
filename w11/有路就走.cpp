#include <stdio.h>
#include <stdlib.h>
#include <time.h>



struct Pos
{
    int row;
    int col;
};


void prarr(int m[][8])
{
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            printf("%2d  ",m[i][j]);
        }
        printf("\n");
    }
}


Pos findNextPos(int m[][8],int row,int col)
{
    int h[8]={2,1,-1,-2,-2,-1,1,2};
    int v[8]={-1,-2,-2,-1,1,2,2,1};
    Pos pos;
    int nextrow;
    int nextcol;
    for(int i=0;i<8;i++)
    {
        nextrow = row + v[i];
        nextcol = col + h[i];
        if(nextrow>=0 && nextrow<=7 && nextcol>=0 && nextcol<=7 && m[nextrow][nextcol]==0)
        {
            pos.row = nextrow;
            pos.col = nextcol;
            return pos;
        }
    }
    pos.row = -1;
    pos.col = -1;
    return pos;
}


int main()
{
    int m[8][8]={0};
    srand(time(NULL));
    int row = rand()%8;
    int col = rand()%8;
    Pos pos;
    m[row][col]=1;
    int moves=0;
    for(int i=2;i<=64;i++)
    {
        pos = findNextPos(m,row,col);
        m[pos.row][pos.col]=i;
        row = pos.row;
        col = pos.col;
        moves++;
        if(pos.row==-1 && pos.col==-1)
            break;
    }
    prarr(m);
    printf("\nTotal moves : %d\n",moves);
    return 0;
}
