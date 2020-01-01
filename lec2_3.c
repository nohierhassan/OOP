#include<iostream.h>
#include<stdio.h>
#include<conio.h>

class complex
{
  int real;
  int img;
  public:

  void set_complex(int r, int i);
  void print_complex();
  complex add_complex(complex c2);
  complex operator+(complex c);
  complex operator + (int x);
  complex operator ++ ();
  complex operator ++(int d);
  int  operator == (complex c)
  {
	return (real == c.real && img == c.img);
  }
  // overloading the assignment operator
  // without it , it will wrok fine but if you have dynamic allocation you must implement it
  complex & operator = (complex &c);
  friend complex operator +(int n , complex & c);
  operator int();
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
  cout<<"using operator overloading"<<endl;
  complex c4;
  c4 = c1+c2;
  c4.print_complex();
  c4=c4+100;
  c4.print_complex();
  ++c4;
  c4.print_complex();
 //c4 = 116+24i;
  complex c5 = (c4++)+10;
  c5.print_complex(); // 126+24i;
  c4.print_complex(); // 117+25i
  complex c6;
  c6.set_complex(117,25);
  if(c6 == c4)
  cout<<"they are equal"<<endl;
  complex c10;
  c10=c4;
  c10.print_complex();
  1000+c10; // must change in the original passed object and must be by reference o
  // or do it in the main like (c4=c4+100)
  c10.print_complex();
  cout<<(int)c10<<endl;
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
complex complex::operator +(complex c)
{
	complex temp;
	temp.real = real+c.real;
	temp.img = img+c.img;
	return temp;
}

complex complex:: operator + (int x)
{       cout<<"adding int to the real part"<<endl;
	complex temp;
	temp.real = real+x;
	temp.img = img;
	return temp;
}
complex complex::operator ++ ()
{       cout<<"increameting the complex number"<<endl;
	real++;
	img++;
	return *this;
}

complex complex::operator ++(int d)
{
	complex old;
	old = *this;
	++(*this);
	return old;
}

complex & complex :: operator =(complex &c) 
{       cout<<"operator overloading"<<endl;
	this->real=c.real;
	this->img = c.img;
	return *this;

}
complex  operator +(int n , complex &c)
{
	cout<<"**************"<<endl;
	cout<<n<<endl;
	cout<<c.real<<endl;
	cout<<c.img<<endl;
	complex temp;
	c.real =c.real + n;
	c.img = c.img;
      return c;

}
complex ::operator int()
{
return this->real;
}