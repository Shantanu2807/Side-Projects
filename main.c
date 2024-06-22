#include <stdio.h>
#include <time.h>
main()
{
    int a[3][3];
    int n,x,y,p,q,i,j ;
    srand((time(0)));
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            a[i][j]=9;
            printf("%d",a[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    printf("press 1 if you wish to go first, or press 0 if you wish to go second");
   scanf("%d",&n);
   if (n==1)
   {
       for (i=0;i<5;i++)
       {
           hehe:
           printf("enter the row and coloumn where you wish to place your character");
           scanf("%d""%d",&x,&y);
           if  (a[x-1][y-1]==9)
           {
                a[x-1][y-1]=1;
           }
           else
           {
               printf("please input row and coloumn of unit not filled yet");
               goto hehe;
           }
           lel: 
           x=rand()%3;
           y=rand()%3;
           if (a[x][y]==9)
           {
               a[x][y]=0;
           }
           else
           {
               goto lel;
           }
           for (p=0;p<3;p++)
           {
               for (q=0;q<3;q++)
               {
                   printf("%d",a[p][q]);
                   printf("\t");
               }
               printf("\n");
           }
        
        if (a[0][0]==a[1][1] && a[1][1]==a[2][2])
        {
            if (a[0][0]==1)
            {
               printf("the pc isnt even trying u noob");
               break;
            }
            if (a[0][0]==0)
            {
                printf("lol the pc won u noob");
                break;
            }
        }
        if (a[0][0]==a[0][1] && a[0][1]==a[0][2])
        {
            if (a[0][0]==1)
            {
               printf("the pc isnt even trying u noob");
               break;
            }
            if (a[0][0]==0)
            {
                printf("lol the pc won u noob");
                break;
            }
        }
        if (a[0][2]==a[1][1] && a[1][1]==a[2][0])
        {
            if (a[0][2]==1)
            {
               printf("the pc isnt even trying u noob");
               break;
            }
            if (a[0][2]==0)
            {
                printf("lol the pc won u noob");
                break;
            }
        }
        if (a[1][0]==a[1][1] && a[1][1]==a[1][2])
        {
            if (a[1][2]==1)
            {
               printf("the pc isnt even trying u noob");
               break;
            }
            if (a[1][2]==0)
            {
                printf("lol the pc won u noob");
                break;
            }
        }
        if (a[2][0]==a[2][1] && a[2][1]==a[2][2])
        {
            if (a[2][2]==1)
            {
               printf("the pc isnt even trying u noob");
               break;
            }
            if (a[2][2]==0)
            {
                printf("lol the pc won u noob");
                break;
            }
        }
        if (a[0][0]==a[1][0] && a[1][0]==a[2][0])
        {
            if (a[0][0]==1)
            {
               printf("the pc isnt even trying u noob");
               break;
            }
            if (a[0][0]==0)
            {
                printf("lol the pc won u noob");
                break;
            }
        }
        if (a[0][1]==a[1][1] && a[1][1]==a[2][1])
        {
            if (a[0][1]==1)
            {
               printf("the pc isnt even trying u noob");
               break;
            }
            if (a[0][1]==0)
            {
                printf("lol the pc won u noob");
                break;
            }
        }
        if (a[0][2]==a[1][2] && a[1][2]==a[2][2])
        {
            if (a[0][2]==1)
            {
               printf("the pc isnt even trying u noob");
               break;
            }
            if (a[0][2]==0)
            {
                printf("lol the pc won u noob");
                break;
            }
        }
           
           
           
           
           
       }
   }
   
   
   
   
   
   
   if (n==0)
   {
       x=rand()%3;
       y=rand()%3;
       a[x][y]=0;
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d",a[i][j]);
            printf("\t");
        }
        printf("\n");
    }
       
       for (i=0;i<4;i++)
       {
           haha:
           printf("enter the row and coloumn where you wish to place your character");
           scanf("%d""%d",&x,&y);
           if  (a[x-1][y-1]==9)
           {
                a[x-1][y-1]=1;
           }
           else
           {
               printf("please input row and coloumn of unit not filled yet");
               goto haha;
           }
           lol: 
           x=rand()%3;
           y=rand()%3;
           if (a[x][y]==9)
           {
               a[x][y]=0;
           }
           else
           {
               goto lol;
           }
           for (p=0;p<3;p++)
           {
               for (q=0;q<3;q++)
               {
                   printf("%d",a[p][q]);
                   printf("\t");
               }
               printf("\n");
           }
        
        if (a[0][0]==a[1][1] && a[1][1]==a[2][2])
        {
            if (a[0][0]==1)
            {
               printf("the pc isnt even trying u noob");
               break;
            }
            if (a[0][0]==0)
            {
                printf("lol the pc won u noob");
                break;
            }
        }
        if (a[0][0]==a[0][1] && a[0][1]==a[0][2])
        {
            if (a[0][0]==1)
            {
               printf("the pc isnt even trying u noob");
               break;
            }
            if (a[0][0]==0)
            {
                printf("lol the pc won u noob");
                break;
            }
        }
        if (a[0][2]==a[1][1] && a[1][1]==a[2][0])
        {
            if (a[0][2]==1)
            {
               printf("the pc isnt even trying u noob");
               break;
            }
            if (a[0][2]==0)
            {
                printf("lol the pc won u noob");
                break;
            }
        }
        if (a[1][0]==a[1][1] && a[1][1]==a[1][2])
        {
            if (a[1][2]==1)
            {
               printf("the pc isnt even trying u noob");
               break;
            }
            if (a[1][2]==0)
            {
                printf("lol the pc won u noob");
                break;
            }
        }
        if (a[2][0]==a[2][1] && a[2][1]==a[2][2])
        {
            if (a[2][2]==1)
            {
               printf("the pc isnt even trying u noob");
               break;
            }
            if (a[2][2]==0)
            {
                printf("lol the pc won u noob");
                break;
            }
        }
        if (a[0][0]==a[1][0] && a[1][0]==a[2][0])
        {
            if (a[0][0]==1)
            {
               printf("the pc isnt even trying u noob");
               break;
            }
            if (a[0][0]==0)
            {
                printf("lol the pc won u noob");
                break;
            }
        }
        if (a[0][1]==a[1][1] && a[1][1]==a[2][1])
        {
            if (a[0][1]==1)
            {
               printf("the pc isnt even trying u noob");
               break;
            }
            if (a[0][1]==0)
            {
                printf("lol the pc won u noob");
                break;
            }
        }
        if (a[0][2]==a[1][2] && a[1][2]==a[2][2])
        {
            if (a[0][2]==1)
            {
               printf("the pc isnt even trying u noob");
               break;
            }
            if (a[0][2]==0)
            {
                printf("lol the pc won u noob");
                break;
            }
        }
           
           
           
           
           
       }
   }
}
