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
    int i,n=1;
    struct std student[n];
    student[0].USN = 1;
    strcpy(student[0].FName, "Hemanth");
    strcpy(student[0].LName, "Gowda");
    student[0].DOB.date=31;
    student[0].DOB.month=03;
    student[0].DOB.year=2004;
    for(i=0;i<n;i++)
    printf("USN = %d\nFirst Name = %s\nLast Name = %s\nDate Of Birth = %d/%d/%d",student[i].USN,student[i].FName,student[i].LName,student[i].DOB.date,student[i].DOB.month,student[i].DOB.year);
}
