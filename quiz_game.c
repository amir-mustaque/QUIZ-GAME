#include<stdio.h>
int main()
{ 
    int i;
    int ans1,ans2,ans3,ans4,ans5;
    int point1=0,point2=0,point3=0,point4=0,point5=0;
    int point01,point02,point03,point04,point05;
    int total;
    
    printf("*****************  WELCOME TO THE GAME  **************\n\n");
    printf("<----------      PRESS 7 TO START THE GAME     ------->\n\n");
    printf("<<<<<<<<<<<<<<      PRESS 0 TO EXIT       >>>>>>>>>>>>>>\n\n");
    printf(" PRESS : ");
    scanf("%d",&i);
    if(i==7)
    { 
        printf("THE GAME HAS STARTED.... AND HERE WE GO ....\n\n");
        
    }
    else if(i==0)
    { 
        printf("the game is ended\n\n");
    }
    else
    { 
        printf("INVALId\n\n");
    }
    
    if(i==7)
    {
        printf("QUESTION 1> what is the nickname of rohan ?\n\n");
        printf("1> aman\n");
        printf("2> siddarth\n");
        printf("3> lucky\n");
        printf("4> rahul\n");
         
        printf("enter your answer\n");
        scanf("%d",&ans1);
        
        if(ans1==3)
        {
            printf("correct answer\n");
            point1 = 5;
            printf("you have scored %d point\n",point1);
        }
        else
        {
            printf("worng anser\n");
            point01=0;
            printf("you have scored %d point\n\n\n",point01);
        }
        
        
        
        
        printf("QUE2> what is the age of rohan \n\n");
        
        printf("1> 20\n");
        printf("2> 21\n");
        printf("3> 19\n");
        printf("4> 22\n\n\n");
        
        printf("enter the answer : ");
        scanf("%d",&ans2);
        
        if(ans2==1)
        {
            printf("correct answer\n");
            point2 = 5;
            printf("you have scored %d point\n",point2);
        }
        else
        {
            printf("worng answer\n\n");
            point02=0;
            printf("you have scored %d point\n\n",point02);
        }
        
        
        
        printf("QUE3> what is your favourite colour\n\n");
        
        printf("1> black\n");
        printf("2> blue\n");
        printf("3> red\n");
        printf("4> yellow\n\n");
        
        printf("enter the answer : ");
        scanf("%d",&ans3);
        if(ans3==1)
         {
            printf("correct answer\n\n");
            point3=5;
            printf("you have scored %d point\n\n",point3);
         }
        else
        {
            printf("worng anser\n\n");
            point03=0;
             printf("you have scored %d point\n\n\n",point03);
        }
        
        
        
         printf("QUE4> what you likes to do in free time \n\n");
        
        printf("1> sleeping\n");
        printf("2> playing pubg\n");
        printf("3> reading book\n");
        printf("4> roasting aman\n");
        
        printf("enter the answer : ");
        scanf("%d",&ans4);
        if(ans4==4)
        {
            printf("correct answer\n\n");
            point4=5;
            printf("you have scored %d point\n\n\n",point4);
        }
        else
        {
            printf("worng answer\n");
            point04=0;
             printf("you have scored %d point\n\n\n",point04);
        }
        
        
        
         printf("QUE5> which outdoor game you likes the most ?\n\n");
        
        printf("1> cricket\n");
        printf("2> football\n");
        printf("3> basketball\n");
        printf("4> volleyball\n");
        
        printf("enter the answer : ");
        scanf("%d",&ans5);
        if(ans5==1)
        {
            printf("correct answer\n\n");
            point5=5;
            printf("you have scored %d point\n\n\n",point5);
        }
        else
        {
            printf("worng answer\n\n\n");
            point05=0;
            printf("you have scored %d point\n",point05);
        }
        total= point1+point2+point3+point4+point5;
     printf("\n\n\n------>    TOTAL SCORE YOU SCORED :  %d     <-----",total);
    }
    else
    {
        printf("INvalid");
    }
    return 0;
}































































































































































































































































