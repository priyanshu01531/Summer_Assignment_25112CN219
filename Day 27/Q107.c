#include <stdio.h>

struct Salary
{
    int empId;
    char name[50];
    float basic, hra, da, gross;
};

int main()
{
    struct Salary s;
    
    printf("Enter Employee ID: ");
    scanf("%d", &s.empId);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Basic Salary: ");
    scanf("%f", &s.basic);

    s.hra = s.basic * 0.20;
    s.da = s.basic * 0.10;
    s.gross = s.basic + s.hra + s.da;

    printf("\n----- Salary Details -----\n");
    printf("Employee ID : %d\n", s.empId);
    printf("Name        : %s\n", s.name);
    printf("Basic       : %.2f\n", s.basic);
    printf("HRA         : %.2f\n", s.hra);
    printf("DA          : %.2f\n", s.da);
    printf("Gross Salary: %.2f\n", s.gross);

    return 0;
}