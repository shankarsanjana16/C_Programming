#include <stdio.h>
#include <cstdlib>
struct employee
{
	char empname[100], depname[100], phno[100];
	float salary;
	int empno, age;
	struct employee *next_emp;
}*first_emp = (struct employee *)malloc(sizeof(struct employee)), *temp;
class Emp
{
	public:
	void accept();
	void display();
};
void Emp::accept()
{
	printf("Enter the names of the 20 employees:");
	printf("\nEmployee Number 1:");
	first_emp->empno = 1;
	printf("\n\tName: ");
	scanf("%s",&first_emp->empname);
	printf("\tDepartment: ");
	scanf("%s",&first_emp->depname);
	printf("\tAge: ");
	scanf("%d",&first_emp->age);
	printf("\tSalary: ");
	scanf("%f",&first_emp->salary);
	printf("\tPh.No.: ");
	scanf("%s",&first_emp->phno);
	temp = first_emp;
	for(int i = 2;i<=20;i++)
	{
		printf("\nEmployee Number %d:",i);
		temp->empno = i;
		printf("\n\tName: ");
		scanf("%s",&temp->empname);
		printf("\tDepartment: ");
		scanf("%s",&temp->depname);
		printf("\tAge: ");
		scanf("%d",&temp->age);
		printf("\tSalary: ");
		scanf("%f",&temp->salary);
		printf("\tPh.No.: ");
		scanf("%s",&temp->phno);
		temp->next_emp = (struct employee *)malloc(sizeof(struct employee));
		temp = temp->next_emp;
	}
}
void Emp::display()
{
	printf("Displaying the names of the 20 employees:\n");
	printf("Name\tAge\tPh.No.\tSalary\n");
	printf("%s\t%d\t%s\t%f\n",first_emp->empname,first_emp->age,first_emp->phno,first_emp->salary);
	temp = first_emp;
	for(int i = 2;temp->next_emp!=NULL;i++)
	{
		printf("%s\t%d\t%s\t%f\n",temp->empname,temp->age,temp->phno,temp->salary);
		temp = temp->next_emp;
	}
}
int main()
{
	Emp emp;
	emp.accept();
	emp.display();
}