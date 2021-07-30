/*****************************
   PROJECT: Grading system
   AUTHOR:  Rawlings Mukoya
   DATE: July 2021
   COMPILER: C99
   LICENCE: MIT
*******************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int marks;
   char grade;
    printf("\tZetech Grading System!\n");
    do {
    printf("Enter mark (0-100):");
    scanf("%d",&marks);
    if (marks<0 || marks>100 );
        printf("Invalid mark.Try again\n");
    }
    while (marks<0 || marks>100);
    // grading system
    // 70 - 100 - A
    // 60 - 69  - B
    // 50 - 59  - C
    // 40 - 49  - D
    //  0 - 39  - F
    }
    else if (marks >= 50)   {
            grade = 'C';
    }
    else if (marks >= 40) {
            grade = 'D';
    }
    printf("Grade: %c\n",grade);
    return 0;
}
