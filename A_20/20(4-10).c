
#include<stdio.h>
int main()
{
        void updatescoreboard(int x,int y,int scoreboard[][y])
    {
        int i,j,matchscore;
        for(i=0;i<4;i++)
            for(j=0;j<4;j++)
        {
            printf("enter match score for match between player %d and player %d ",i+1,j+1);
            scanf("%d",&matchscore);
            scoreboard[i][j]+=matchscore;
        }

    }
    void displayscorecard(int x,int y,int scoreboard[][y])
     {int i,j;
         for(i=0;i<4;i++)
        {
                for(j=0;j<4;j++)
            {
                printf("%d ",scoreboard[i][j]);
            }
            printf("\n");
        }
     }
     void playerscore(int x,int y,int scoreboard[][y])
   {
       int i,j,score_of_player;
       for(i=0;i<4;i++)
        {score_of_player=0;
        for(j=0;j<4;j++)
       {
           score_of_player+=scoreboard[i][j];
       }
       printf("score of player %d is %d\n",i+1,score_of_player);}
   }
   void winner(int x,int y,int scoreboard[][y])
   {
       int i,j,score[4]={0};
       for(i=0;i<4;i++)
        {score[i]=0;
        for(j=0;j<4;j++)
       {
           score[i]+=scoreboard[i][j];
       }}
       if(score[0]>score[1]&&score[0]>score[2]&&score[0]>score[3])
            printf("player 1 is winner\n");
       else if(score[1]>score[2]&&score[1]>score[3])
            printf("player 2 is winner\n");
       else if(score[2]>score[3])
            printf("player 3 is winner\n");
       else if(score[0]==score[1]&&score[0]==score[2]&&score[0]==score[3])
            printf("All are winner with same score\n");
        else
            printf("player 4 is winner\n");

   }
   void rank(int x,int y,int scoreboard[][y])
   {
       int i,j,score[4]={0};
       for(i=0;i<4;i++)
       {
            score[i]=0;
        for(j=0;j<4;j++)
           score[i]+=scoreboard[i][j];
       }
       if(score[0]>score[1]&&score[0]>score[2]&&score[0]>score[3])
        {
            printf("player 1 is rank 1\n");
            if(score[1]>score[2]&&score[1]>score[3])
            {
                printf("player 2 is rank 2\n");
                if(score[2]>score[3])
                {
                    printf("player 3 is rank 3\n");
                    printf("player 4 is rank 4\n");
                }
                else
                {
                    printf("player 4 is rank 3\n");
                    printf("player 3 is rank 4\n");
                }
            }
            else
            {
                if(score[2]>score[3])
                {
                    printf("player 3 is rank 2\n");
                    if(score[1]>score[3])
                {
                    printf("player 2 is rank 3\n");
                    printf("player 4 is rank 4\n");
                }
                else
                {
                    printf("player 4 is rank 3\n");
                    printf("player 2 is rank 4\n");
                }
                }
                else
                {
                    printf("player 4 is rank 2\n");
                    if(score[2]>score[1])
                {
                    printf("player 3 is rank 3\n");
                    printf("player 2 is rank 4\n");
                }
                else
                {
                    printf("player 2 is rank 3\n");
                    printf("player 3 is rank 4\n");
                }
                }
            }


        }
        else
        {
            if(score[1]>score[2]&&score[1]>score[3])
            {
                printf("player 2 is rank 1\n");
                if(score[0]>score[2]&&score[0]>score[3])
            {
                printf("player 1 is rank 2\n");
                if(score[2]>score[3])
                {
                    printf("player 3 is rank 3\n");
                    printf("player 4 is rank 4\n");
                }
                else
                {
                    printf("player 4 is rank 3\n");
                    printf("player 3 is rank 4\n");
                }
            }
            else
            {
                if(score[2]>score[3])
                {
                    printf("player 3 is rank 2\n");
                    if(score[0]>score[3])
                {
                    printf("player 1 is rank 3\n");
                    printf("player 4 is rank 4\n");
                }
                else
                {
                    printf("player 4 is rank 3\n");
                    printf("player 1 is rank 4\n");
                }
                }
                else
                {
                    printf("player 4 is rank 2\n");
                    if(score[2]>score[0])
                {
                    printf("player 3 is rank 3\n");
                    printf("player 1 is rank 4\n");
                }
                else
                {
                    printf("player 1 is rank 3\n");
                    printf("player 3 is rank 4\n");
                }
                }
            }
            }
            else
            {
                if(score[2]>score[3])
                {
                    printf("player 3 is rank 1\n");
                    if(score[1]>score[0]&&score[1]>score[3])
            {
                printf("player 2 is rank 2\n");
                if(score[0]>score[3])
                {
                    printf("player 1 is rank 3\n");
                    printf("player 4 is rank 4\n");
                }
                else
                {
                    printf("player 4 is rank 3\n");
                    printf("player 1 is rank 4\n");
                }
            }
            else
            {
                if(score[0]>score[3])
                {
                    printf("player 1 is rank 2\n");
                    if(score[1]>score[3])
                {
                    printf("player 2 is rank 3\n");
                    printf("player 4 is rank 4\n");
                }
                else
                {
                    printf("player 4 is rank 3\n");
                    printf("player 2 is rank 4\n");
                }
                }
                else
                {
                    printf("player 4 is rank 2\n");
                    if(score[0]>score[1])
                {
                    printf("player 1 is rank 3\n");
                    printf("player 2 is rank 4\n");
                }
                else
                {
                    printf("player 2 is rank 3\n");
                    printf("player 1 is rank 4\n");
                }
                }
            }
                }
                else
                {
                    printf("player 4 is rank 1\n");
                    if(score[1]>score[2]&&score[1]>score[0])
            {
                printf("player 2 is rank 2\n");
                if(score[2]>score[0])
                {
                    printf("player 3 is rank 3\n");
                    printf("player 1 is rank 4\n");
                }
                else
                {
                    printf("player 1 is rank 3\n");
                    printf("player 3 is rank 4\n");
                }
            }
            else
            {
                if(score[2]>score[0])
                {
                    printf("player 3 is rank 2\n");
                    if(score[0]>score[1])
                {
                    printf("player 1 is rank 3\n");
                    printf("player 2 is rank 4\n");
                }
                else
                {
                    printf("player 2 is rank 3\n");
                    printf("player 1 is rank 4\n");
                }
                }
                else
                {
                    printf("player 1 is rank 2\n");
                    if(score[2]>score[1])
                {
                    printf("player 3 is rank 3\n");
                    printf("player 2 is rank 4\n");
                }
                else
                {
                    printf("player 2 is rank 3\n");
                    printf("player 3 is rank 4\n");
                }
                }
            }
                }
            }
        }
        } int scoreboard[4][4]={0};

    updatescoreboard(4,4,scoreboard);
    displayscorecard(4,4,scoreboard);
    playerscore(4,4,scoreboard);
    winner(4,4,scoreboard);
    rank(4,4,scoreboard);


}
