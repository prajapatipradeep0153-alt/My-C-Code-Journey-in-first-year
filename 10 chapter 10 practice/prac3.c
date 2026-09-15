/*
Take name and salary of two employees as input from the user and write them to a
text file in the following format:
i. Namel, 3300
ii. Name2, 7700

*/

#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("pk3.txt", "w");
    char name1[34], name2[34];
    int sal1, sal2;
    printf("enter the name of first employee\n");
    scanf("%s", &name1);

    printf("enter the salary\n");
    scanf("%d", &sal1);

    printf("enter the name of second employee\n");
    scanf("%s", &name2);

    printf("enter the salary\n");
    scanf("%d", &sal2);

    fprintf(ptr, "%s", name1);
    fprintf(ptr, "%s", " ,");
    fprintf(ptr, "%d", sal1);
    fprintf(ptr, "\n");
    fprintf(ptr, "%s", name2);
    fprintf(ptr, "%s", " ,");
    fprintf(ptr, "%d", sal2);

    return 0;
}
