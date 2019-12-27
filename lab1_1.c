#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void area(int l=5,w);
int main()
{
  cout<<area(3,3); // 3*3
  cout<<area(10);  // 5*10
  cout<<area()
}
void area(int l=5,w)
{
  return l*w;
}