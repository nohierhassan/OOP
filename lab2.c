#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
class employee
{
	char name [20];
	int id;
	int salary;
	public:
	void set_name(char name1[20]);
	void set_id(int i);
	void set_salary(int s);
	char* get_name();
	int get_id();
	int get_salary();
};
employee fill_emp();
void print_emp(employee e);
int main()
{
	clrscr();
	employee e1;
	char name[20];
	cout<<"enter the name"<<endl;
	cin>>name;
	e1.set_name(name);
	cout<<"enter the id "<<endl;
	int i;
	cin>>i;
	e1.set_id(i);
	cout<<"enter the salary"<<endl;
	int s;
	cin>>s;
	e1.set_salary(s);
	cout<<"name : "<<e1.get_name()<<"id "<<e1.get_id()<<"salary "<<e1.get_salary()<<endl;
	employee e2 = fill_emp();
	print_emp(e2);




	getch();
	return 0;
}
void employee :: set_name(char name1[20])
{
	strcpy(name,name1);

}
void employee :: set_id(int i)
{
	id = i;
}
void employee :: set_salary(int s)
{
	salary = s;
}
char * employee:: get_name()
{
	return name;
}
int employee:: get_id()
{
	return id;
}
int employee:: get_salary()
{
	return salary;
}

employee fill_emp()
{
	employee e;
	cout<<"enter the name"<<endl;
	char name[20];
	cin>>name;
	e.set_name(name);
	cout<<"enter the id"<<endl;
	int i;
	cin>>i;
	e.set_id(i);
	cout<<"enter the salary"<<endl;
	int s;
	cin>>s;
	e.set_salary(s);
	return e;

}
void print_emp(employee e)
{
	cout<<"name :"<<e.get_name();
	cout<<"id :"<<e.get_id();
	cout<<"salary :"<<e.get_salary();

}











