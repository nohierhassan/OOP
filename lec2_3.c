#include<iostream.h>
#include<stdio.h>
#include<conio.h>

class complex
{
  int real;
  int img;
  public:   // don't forget to make the member methods public to be able to access them outside the calss.

  void set_complex(int r, int i);
  void print_complex();
  complex add_complex(complex c2);
};
int main()
{ clrscr();
  complex c1,c2,c3;
  c1.set_complex(5,3);
  c2.set_complex(10,20);
  c3 = c1.add_complex(c2);
  c1.print_complex();
  c2.print_complex();
  cout<<"the sum of the two numbers is "<<endl;


  c3.print_complex();
  getch();
  return 0;
}
 // here the caller object is passed by default , so you don't have to specify it explicitly
 void complex::set_complex(int r, int i)
 {
   real = r;
   img = i;
 }
 void complex::print_complex()
 {
   cout<<real<<"+"<<img<<"i"<<endl;
 }
complex complex::add_complex(complex c2)
{
  complex temp;
  temp.real = real+c2.real;
  temp.img = img+c2.img;
  return temp;
}
