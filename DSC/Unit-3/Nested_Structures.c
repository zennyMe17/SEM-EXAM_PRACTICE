#include<stdio.h>
#include<string.h>

struct std{
    int USN;
    char FName[50];
    char LName[50];
    struct DOB{
      int date;
      int month;
      int year;
    }DOB;
};

int main()
{
    struct std student;
    student.USN = 1;
    strcpy(student.FName, "Hemanth");
    strcpy(student.LName, "Gowda");
    student.DOB.date=31;
    student.DOB.month=03;
    student.DOB.year=2004;
    
    printf("USN = %d\nFirst Name = %s\nLast Name = %s\nDate Of Birth = %d/%d/%d",student.USN,student.FName,student.LName,student.DOB.date,student.DOB.month,student.DOB.year);
}
