#include<stdio.h>
#include<conio.h>
#include<iostream.h>
struct employee
{
  char name[20];
  int id;
  int salary;
};

employee fill();
void print(employee emp);

int main()
{
  int num,i,flag=0;
  employee *ptr;
  clrscr();
  while(!flag)
  {
cout<<"enter the number of students \n ";
cin>> num;
ptr = new employee[num];

if(num<1)
{
  cout<<"please enter a positive number"<<endl;
}

// input

else{


cout<<"enter the data";

employee *ptr2 = ptr;

for(i=0;i<num;i++,ptr2++)

{

    cout<<"student"<<i+1<<endl;

    *ptr2=fill();
}

delete(ptr2);

//output

employee *ptr3 = ptr;

for(i=0;i<num;i++,ptr3++)

{

    cout<<"student"<<i+1<<endl;

    print(*ptr3);
}




   delete(ptr3);

   flag = 1;
  }



delete(ptr);
}
getch();
return 0;
}

 employee fill(){
 employee emp;
 cout<<"enter the name \n";
 cin>>emp.name;
 cout<<"enter the id \n";
 cin>>emp.id;
 cout<<"enter the salary \n";
 cin>>emp.salary;

  return emp;
}

void print(employee emp){

  cout<<"name : "<<emp.name<<endl;
  cout<<"id : "<<emp.id<<endl;
  cout<<"salary : "<<emp.salary<<endl;
}