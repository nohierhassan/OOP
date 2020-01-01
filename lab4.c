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
  employee operator +(employee e)
  {
  employee temp;
 temp.id= id + e.id;
 temp.salary= salary + e.salary;
int s1 = strlen(get_name());
int s2 = strlen(e.get_name());
char *str = new char [s2+s1+2];
cout<<endl;
cout<<"the size is "<<s2+s1+2<<endl;
strcpy(str,get_name());
strcat(str," ");
strcat(str,e.get_name());
temp.set_name(str);
 return temp;


  }
  employee operator+(int x)
  {
	employee temp(this->get_name(),id,salary+x);
	return temp;
 }
  employee & operator =(employee & e)
  {
	id = e.id ;
       salary=e.salary ;
	this->set_name(e.ptr);
	return e;
  }

friend employee  operator +(int x,employee  e);
employee operator +(char str[])
{
	int size = strlen(str)+strlen(this->ptr);
	char * temp = new char[size+2];
	strcpy(temp,this->ptr);
	strcat(temp," ");
	strcat(temp,str);
	employee e(temp,id,salary);
	return e;
}
friend employee operator+ (char str[],employee e);


employee operator ++()
{       cout<<endl<<"pre-increament"<<endl;
	id++;
	return *this;
}
employee operator++(int d)
{       cout<<endl<<"post-increament"<<endl;
	employee e(*this);
	id++;
	return e;
}
int operator ==(employee e)
{
	return (id==e.id && salary == e.salary && !(strcmp(ptr,e.ptr)) ) ;
}

operator int()
{
return salary;
}
operator char *()
{
	return ptr;
}
};
employee operator + (int x,employee e)
{
    return  (e+x);
  }
employee operator+(char str[],employee e)
{       int size = strlen(str)+strlen(e.ptr);
	char *temp =new char[size+2];
	strcpy(temp,str);
	strcat(temp," ");
	strcat(temp,e.ptr);
	employee new_emp(temp,e.id,e.salary);
	return new_emp;

 }

employee fill_emp();
void print_emp(employee e);
int main()
{
	clrscr();
 employee e1;
 e1=fill_emp();

 employee e2;
 e2=fill_emp();

//print_emp(e2+100);
//print_emp(100+e1);
employee e3 = e1+e2;
print_emp(e3);
//print_emp(e3+"hammada");
print_emp("open source"+e1);
//print_emp(e1++);
//print_emp(++e1);
cout<<(e1==e2);
cout<< (int)e1<<endl;
cout<< (char)e2<<endl;
	getch();
	return 0;
}
void employee :: set_name(char name1[])
{
	int size = strlen(name1);
  ptr = new char[size+1];
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











