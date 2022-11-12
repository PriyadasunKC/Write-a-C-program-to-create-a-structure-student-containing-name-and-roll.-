#include <stdio.h>

struct student
{
    char name[25];
    int rolNo;
};

void display(struct student s1);
int main()
{
    struct student s1;
    printf("Enter student's name: ");
    scanf("%[^\n]%*c", s1.name);
    printf("Enter roll number: ");
    scanf("%d", &s1.rolNo);
    display(s1);
    return 0;
}

void display(struct student s1)
{
    printf("Name: %s\nRoll: %d", s1.name, s1.rolNo);
}