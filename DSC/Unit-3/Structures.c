#include<stdio.h>
#include<string.h>

struct std{
    int USN;
    char FName[50];
    char LName[50];
};

int main()
{
    struct std student;
    student.USN = 1;
    scanf("%s",student.FName);
    strcpy(student.LName, "Gowda");
    printf("USN = %d\nFirst Name = %s\nLast Name = %s",student.USN,student.FName,student.LName);
}
