#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
class employee
{
	char *ptr;
	int id;
	int salary;
	public:
	void set_name(char name1[]);
	void set_id(int i);
	void set_salary(int s);
	char* get_name();
	int get_id();
	int get_salary();
  //default constructor
  employee()
  {
    int size = strlen("not defined");
    ptr = new char [size+1];
    strcpy(ptr,"not defined");
    id = 0;
    salary = 0;
  }
  // parametrized constructor
  employee(char name[],int i, int s)
  {
    int size = strlen(name)+1;
    ptr = new char [size];
    strcpy(ptr,name);
    id = i;
    salary = s;

  }
  ~employee()
  {
	delete(ptr);
	//cout<<"bye bye"<<endl;
  }
  //cpy constructor
  employee(employee &rfem)
  {
	id = rfem.id;
	salary = rfem.salary;
	ptr = new char[strlen(rfem.ptr)+1];
	strcpy(ptr,rfem.ptr);
  }
};
employee fill_emp();
void print_emp(employee e);
int main()
{
	clrscr();
	//employee e1;
	// char name[20];
	// cout<<"enter the name"<<endl;
	// cin>>name;
	// e1.set_name(name);
	// cout<<"enter the id "<<endl;
	// int i;
	// cin>>i;
	// e1.set_id(i);
	// cout<<"enter the salary"<<endl;
	// int s;
	// cin>>s;
	// e1.set_salary(s);
	// cout<<"name : "<<e1.get_name()<<"id "<<e1.get_id()<<"salary "<<e1.get_salary()<<endl;
	// employee e2 = fill_emp();
	// print_emp(e2);
 employee e1;
 e1=fill_emp();
 print_emp(e1);
  //employee e2("anas",5,7);
  //print_emp(e2);




	getch();
	return 0;
}
void employee :: set_name(char name1[])
{
	int size = strlen(name1);
  ptr = new char[size];
  strcpy(ptr,name1);


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
	return ptr;
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
	cout<<"name :"<<e.get_name()<<endl;
	cout<<"id :"<<e.get_id()<<endl;
	cout<<"salary :"<<e.get_salary()<<endl;

}











