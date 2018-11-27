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
            printf("%02d ",m[i][j]);
        }
        printf("\n");
    }
}


Pos findNextBestPos(int m[][8],int access[][8],int row,int col)
{
    int h[8] = {2,1,-1,-2,-2,-1,1,2};
    int v[8] = {-1,-2,-2,-1,1,2,2,1};
    Pos pos;
    int nextrow,nextcol;
    int min=9;
    int minrow=-1,mincol=-1;
    access[row][col]=0;
    for(int i=0;i<8;i++)
    {
        nextrow = row + v[i];
        nextcol = col + h[i];
        //printf("nextrow = %d , nextcol = %d\n",nextrow,nextcol);
        if(nextrow>=0 && nextrow<=7 && nextcol>=0 && nextcol<=7 && access[nextrow][nextcol]>0)
        {
            access[nextrow][nextcol]--;
            if(access[nextrow][nextcol]<min)
            {
                min = access[nextrow][nextcol];
                minrow = nextrow;
                mincol = nextcol;
            }
        }
            //printf("pos.row = %d , pos.col = %d\n",pos.row,pos.col);
    }
    pos.row = minrow;
    pos.col = mincol;
    return pos;
}


int main()
{
    while(1)
    {
        int choice;
        int m[8][8]= {0};
        int access[ 8 ][ 8 ] = { 2, 3, 4, 4, 4, 4, 3, 2,
                                 3, 4, 6, 6, 6, 6, 4, 3,
                                 4, 6, 8, 8, 8, 8, 6, 4,
                                 4, 6, 8, 8, 8, 8, 6, 4,
                                 4, 6, 8, 8, 8, 8, 6, 4,
                                 4, 6, 8, 8, 8, 8, 6, 4,
                                 3, 4, 6, 6, 6, 6, 4, 3,
                                 2, 3, 4, 4, 4, 4, 3, 2
                               };

        Pos pos;
        srand(time(NULL));
        int row = rand()%8;
        int col = rand()%8;
        m[row][col] = 1;
        int moves=1;

        printf("Menu\n");
        printf("1. Knight Tour by entering position\n");
        printf("2. Check 64 cases\n");
        printf("3. Exit\n");
        printf("=> choice:");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1 :
            printf("Enter row and col for number 1 :");
            scanf("%d %d",&row,&col);
            printf("The board for this test is:\n\n");
            for(int i=2; i<=64; i++)
            {
                pos = findNextBestPos(m,access,row,col);
                m[pos.row][pos.col] = i;
                row = pos.row;
                col = pos.col;
                moves++;
                if(pos.row==-1 && pos.col==-1)
                    break;
            }
            prarr(m);
            printf("\nThe tour ended with %d moves.\nThis was a full tour!\n",moves);

        }
    }

}
