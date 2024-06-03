#include <stdio.h>
int main()
{
    int maths,
        chemistry,
        physics,
        gs,
        history;

    char name[50];
    printf("STUDENT NAME : ");
    scanf(" %[^\n]",name);

   int rollno;
   do
   {
    printf("Student roll number shoud be three digit\n");
    printf("STUDENT ROLL-NUMBER : ");
    scanf("%d",&rollno);
   } while (rollno < 100 || rollno > 1000);

     
    
    do
    {
        printf("enter the maths marks :");
        scanf("%d", &maths);
        if (maths < 0 || maths > 100)
        {
            printf("invalid inpur!!! \n marks shoud be between 0 to 100\n");
        }

    } while (maths < 0 || maths > 100);

    do
    {
        printf("enter the chemistry marks :");
        scanf("%d", &chemistry);
        if (chemistry < 0 || chemistry > 100)
        {
            printf("invalid inpur!!! \n marks shoud be between 0 to 100\n");
        }

    } while (chemistry < 0 || chemistry > 100);
    do
    {
        printf("enter the physics marks :");
        scanf("%d", &physics);
        if (physics < 0 || physics > 100)
        {
            printf("invalid inpur!!! \n marks shoud be between 0 to 100\n");
        }

    } while (physics < 0 || physics > 100);
    do
    {
        printf("enter the genral studies marks :");
        scanf("%d", &gs);
        if (gs < 0 || gs > 100)
        {
            printf("invalid inpur!!! \n marks shoud be between 0 to 100\n");
        }

    } while (gs < 0 || gs > 100);
    do
    {
        printf("enter the history marks :");
        scanf("%d", &history);
        if (history < 0 || history > 100)
        {
            printf("invalid inpur!!! \n marks shoud be between 0 to 100\n");
        }
    } while (history < 0 || history > 100);

    int total;
    total = maths + chemistry + physics + gs + history;
    float percent;
    percent = total / 5;

    int x;
    if (34 > maths || 34 > chemistry || 34 > physics || 34 > gs || 34 > history)
    {
        x = 1;
    }
    else if (percent <= 40)
    {
        x = 2;
    }
    else
    {
        x = 3;
    }

    printf("\n");
    printf("-------------------------------------------------------------\n");
    printf("MARKSHEET\n");
    printf("-------------------------------------------------------------\n");
    printf("NAME        : %s\n",name);
    printf("ROLL-NUMBER : %d\n",rollno);
    printf("-------------------------------------------------------------\n");
    printf("MATHS           : %d\n", maths);    
    printf("CHEMISTRY       : %d\n", chemistry);    
    printf("PHYSICS         : %d\n", physics);    
    printf("GENERAL STUDIES : %d\n", gs);    
    printf("HISTORY         : %d\n", history);    
    printf("-------------------------------------------------------------\n");

    switch (x)
    {
    case 1:
        if (maths <= 33)
        {
            printf("you fail in maths \n");
            printf("-------------------------------------------------------------\n");
        }
        if (chemistry <= 33)
        {
            printf("you fail in chemistry \n");
            printf("-------------------------------------------------------------\n");
        }
        if (physics <= 33)
        {
            printf("you fail in physics \n");
            printf("-------------------------------------------------------------\n");
        }
        if (gs <= 33)
        {
            printf("you fail in gs \n");
            printf("-------------------------------------------------------------\n");
        }
        if (history <= 33)
        {
            printf("you fail in history \n");
            printf("-------------------------------------------------------------\n");
        }
        printf("Result : Fail\n");
        printf("You got %d out of 500\n", total);
        printf("You got %.2f percent\n", percent);
        printf("-------------------------------------------------------------\n");
        break;

    case 2:
        printf("Result : Fail\n");
        printf("You got %d out of 500\n", total);
        printf("You got %.2f percent\n", percent);
        printf("-------------------------------------------------------------\n");
        break;

    case 3:
        printf("Result : Pass\n");
        printf("You got %d out of 500\n", total);
        printf("You got %.2f percent\n", percent);
        printf("-------------------------------------------------------------\n");
    }


    FILE *dataCenter;
    dataCenter = fopen("StudentData.txt","a");

    fprintf(dataCenter,"-------------------------------------------------------------\n");
    fprintf(dataCenter,"MARKSHEET\n");
    fprintf(dataCenter,"-------------------------------------------------------------\n");
    fprintf(dataCenter,"NAME        : %s\n",name);
    fprintf(dataCenter,"ROLL-NUMBER : %d\n",rollno);
    fprintf(dataCenter,"-------------------------------------------------------------\n");
    fprintf(dataCenter,"MATHS           : %d\n", maths);    
    fprintf(dataCenter,"CHEMISTRY       : %d\n", chemistry);    
    fprintf(dataCenter,"PHYSICS         : %d\n", physics);    
    fprintf(dataCenter,"GENERAL STUDIES : %d\n", gs);    
    fprintf(dataCenter,"HISTORY         : %d\n", history);    
    fprintf(dataCenter,"-------------------------------------------------------------\n");

     switch (x)
    {
    case 1:
        if (maths <= 33)
        {
            fprintf(dataCenter,"you fail in maths \n");
            fprintf(dataCenter,"-------------------------------------------------------------\n");
        }
        if (chemistry <= 33)
        {
            fprintf(dataCenter,"you fail in chemistry \n");
            fprintf(dataCenter,"-------------------------------------------------------------\n");
        }
        if (physics <= 33)
        {
            fprintf(dataCenter,"you fail in physics \n");
            fprintf(dataCenter,"-------------------------------------------------------------\n");
        }
        if (gs <= 33)
        {
            fprintf(dataCenter,"you fail in gs \n");
            fprintf(dataCenter,"-------------------------------------------------------------\n");
        }
        if (history <= 33)
        {
            fprintf(dataCenter,"you fail in history \n");
            fprintf(dataCenter,"-------------------------------------------------------------\n");
        }
        fprintf(dataCenter,"Result : Fail\n");
        fprintf(dataCenter,"You got %d out of 500\n", total);
        fprintf(dataCenter,"You got %.2f percent\n", percent);
        fprintf(dataCenter,"-------------------------------------------------------------\n");
        break;

    case 2:
        fprintf(dataCenter,"Result : Fail\n");
        fprintf(dataCenter,"You got %d out of 500\n", total);
        fprintf(dataCenter,"You got %.2f percent\n", percent);
        fprintf(dataCenter,"-------------------------------------------------------------\n");
        break;

    case 3:
        fprintf(dataCenter,"Result : Pass\n");
        fprintf(dataCenter,"You got %d out of 500\n", total);
        fprintf(dataCenter,"You got %.2f percent\n", percent);
        fprintf(dataCenter,"-------------------------------------------------------------\n");
    }

    fclose(dataCenter);


    return 0;
}