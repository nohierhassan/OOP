#include<iostream.h>
#include<stdio.h>
#include<conio.h>
int x = 10;
int main()
{
clrscr();
/*
  int *ptr = new int;
  *ptr = 5;
  cout<<*ptr;

cout<<"enter the size of the array"<<endl;
int size;
cin>>size;
int *ptr1 = new int [size];
int*ptr2 = ptr1;
for(int i =0;i<size;i++,ptr2++)
{
	cout<<"element number "<<i+1<<endl;
	cin>>*ptr2;

}
ptr2 = ptr1;
for(i=0 ; i<size;i++,ptr2++)
{
	cout<<*ptr2<<endl;
}*/
int x = 5;
cout<<x<<" from the local"<<endl;
cout<<::x<<" from the global";
getch();
return 0;
}