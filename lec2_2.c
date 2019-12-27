#include<stdio.h>
#include<conio.h>
#include<iostream.h>
//function overloading
// what matter is the number and the type of the params NOT the return type.
void print();
void print(char name[20]);

int main()
{       clrscr();
	char name[20];
	cout<<"enter your name "<<endl;
	cin>>name;
	print();
	print(name);
	print();
	getch();
	return 0;

}
void print()
{
	cout<<"hello"<<endl;
	cout<<"you didn't pass any thing."<<endl;
}
void print(char name[20])
{
	cout<<"hello "<<name<<endl;
	cout<<"you passed a name already."<<endl;
}