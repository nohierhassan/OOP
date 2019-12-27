#include<stdio.h>
#include<conio.h>
#include<iostream.h>
inline void swap(int &x, int &y);
int main()
{
	clrscr();
	/*
	int x = 5;
	cout<<x<<endl;
	int & refx = x; // cannot be reassigend
	refx = 10;
	cout<<refx<<endl;
	// print the addresses of both of them
	cout<<&x<<endl;
	cout<<&refx<<endl;
	*/
	int a=3,b=10;
	cout<<"a "<<a<<endl;
	cout<<"b "<<b<<endl;
	swap(a,b);
	cout<<"swap"<<endl;
	cout<<"a "<<a<<endl;
	cout<<"b "<<b<<endl;
	getch();
	return 0;
}
inline void swap(int &x, int&y)
{
	int temp = x;
	x=y;
	y=temp;
}