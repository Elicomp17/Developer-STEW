/* Creator: Elijah Adedapo
   Design: This programn shows how to create a structure and reference that information in a header file using a pointer 
   and creating space dynamically to hold the information. The program uses the structure information to determine letter grades 
   for exam averages.
   Date:7/25/14
*/



#include "v4.h"

int main()
{

    int i;
    int num;
    studentRecord *student;   //structure variable points to new variable student

    
    printf("Enter the amount of times to insert data \n");
    scanf("%d",&num);
    for(i = 0; i < num; i++)
    {
        student = (studentRecord *) malloc (sizeof(studentRecord)); // returns a pointer with a  size of studentrecord
        scanf("%s %s %s %d %d %d",student->lastName, student->firstName, 
               student->idNum, &student->exam1, &student->exam2, 
               &student->exam3);

        student->avg = (student->exam1 + student->exam2 + student->exam3)/3.;  // creates a member function to set grade averages
        if( student->avg >= 90.0 ) student->grade = 'A';
        else if( student->avg >= 80.0 ) student->grade = 'B';
        else if( student->avg >= 70.0 ) student->grade = 'C';
        else if( student->avg >= 60.0 ) student->grade = 'D';
        else student->grade = 'F';

        printf("%s, %s: %s, %s \n\t %4d %4d %4d %s %6.2f %s  %c\n",
               student->lastName, student->firstName, student->idNum, 
               "has exams scores of:", student->exam1, student->exam2, 
               student->exam3, "for an average of ", student->avg,
               " and a grade of ",student->grade); 
    }
    return 0; 
}
