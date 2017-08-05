


#include <stdio.h>

int main()
{
    struct studentRecord {    // beginning of structure 
        char lastName[30];   // Character array
        char firstName[30];
        char idNum[9];
        struct examScores{       // exam structure
            int exam1;
            int exam2;
            int exam3;
            float Eavg;
        } exams;        // created variable for exam structure
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
        } labs;    // created variable for lab scores
        struct pgmScores{
            int pgm1;
            int pgm2;
            int pgm3;
            int pgm4;
            float Pavg;
        } pgms;      // created variable for pgm scores
        struct hmwkScores{
            int hmwk1;
            int hmwk2;
            int hmwk3;
            int hmwk4;
            int hmwk5;
            int hmwk6;
            float Havg;
        } hmwks;            // created variable for hmwkScores
        char grade;
    }student;		// make a variable, student which would contain entire struct of studentRecord,labScores,pgmScores,hmwkScores

    int i;
    int num;
    
    printf("Enter the numbers to scan \n");
    scanf("%d",&num);
    for(i = 0; i < num; i++)    // if i is less than the number you entered it will loop until equal
    {
        
        
        scanf("%s %s %s %d %d %d",student.lastName, student.firstName, 
               student.idNum, &student.exams.exam1, &student.exams.exam2, 
               &student.exams.exam3);  // student struct name exam is also a struct variable to acces nested structure  student.exams.exam1
               
             printf("hello \n");  
               
        printf("%s, %s: %s, has scores of %4d %4d %4d\n",student.lastName,
               student.firstName, student.idNum, student.exams.exam1, 
               student.exams.exam2, student.exams.exam3);      // prints out user collected information 
    }
    return 0; 
}
