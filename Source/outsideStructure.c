/* Creator: Elijah Adedapo
   Design: C program that shows the outside structure of a struct
   shows how to access and create structure variables
   Date:7/25/14
*/


#include <stdio.h>

int main()
{
    struct examScores{
        int exam1;
        int exam2;
        int exam3;
        float Eavg;
    };     // structures end after it definition

    struct labScores{
        int lab1;
        int lab2;
        int lab3;
        int lab4;
        int lab5;
        int lab6;
        int lab7;
        int lab8;
        int lab9;
        int lab10;
        float Lavg;
    };   // structures end after it definition

    struct pgmScores{
        int pgm1;
        int pgm2;
        int pgm3;
        int pgm4;
        float Pavg;
    };

    struct hmwkScores{
        int hmwk1;
        int hmwk2;
        int hmwk3;
        int hmwk4;
        int hmwk5;
        int hmwk6;
        float Havg;
    };

    struct studentRecord {
        char lastName[30];
        char firstName[30];
        char idNum[9];
        struct examScores exams;
        struct labScores  labs;
        struct pgmScores  pgms;
        struct  hmwkScores  hmwks;
        char grade;
    }student;		// make a variable, student

    int i;
    int num;
    
    
    printf("Enter the amount of data you want to set \n");
    scanf("%d",&num);
    for(i = 0; i < num; i++)
    {
        scanf("%s %s %s %d %d %d",student.lastName, student.firstName, 
               student.idNum, &student.exams.exam1, &student.exams.exam2, 
               &student.exams.exam3);      // access structure varible 
               
               
        printf("%s, %s: %s, has scores of %4d %4d %4d\n",student.lastName,
               student.firstName, student.idNum, student.exams.exam1, 
               student.exams.exam2, student.exams.exam3); 
    }
    return 0; 
}
