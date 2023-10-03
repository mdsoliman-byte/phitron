/*
Write a C program that takes the marks of three subjects (Mathematics, Physics, and Chemistry) as input for a student. The program should then calculate the total marks and the average marks. Finally, it should display the student's total marks, average marks, and whether the student has passed or failed.

Assume that the passing marks for each subject are 40, and the total marks for each subject are 100.
*/

#include <stdio.h>
int main()
{
    int mathematics, physics, chemistry, totalMark, avarageMark, passMark, totalSubject;
    totalSubject = 3;
    passMark = 40;
    scanf("%d ", &mathematics);
    scanf("%d ", &physics);
    scanf("%d ", &chemistry);

    if (mathematics >= passMark && physics >= passMark && chemistry >= passMark)
    {
        totalMark = mathematics + physics + chemistry;
        avarageMark = totalMark / totalSubject;

        if (avarageMark >= 70)
        {
            printf("Your Avarage  amrk %d you are pass", avarageMark);
        }
        else
        {
            printf("Your avarage mark %d You are fail ", avarageMark);
        }
    }
    else
    {
        printf("You are Fail a subject Your pass mark 40 you got  under 40 ");
    }
    return 0;
}