#include<iostream.h>
#include<string.h>
#include<conio.h>
class stack
{
  int *ptr;
  int size;
  int tos;
  public:
  int push(int data);
  int pop();
  // default constructor
  stack()
  {
    tos = 0;
    size = 10;
    ptr = new int [size];
  }
  // parametrized constructor
  stack(int s)
  {
    tos=0;
    size =s;
    ptr = new int [size];
  }
  int get_size()
  {
    return size;
  }
  int get_tos()
  {
    return tos;
  }
  // destructor
  ~stack()
  {
    delete ptr;
  }
  stack & operator =(stack &rstk);
  stack(stack & s);


};
stack & stack::operator =(stack &rstk)
  {     cout<<"operator ="<<endl;
	tos = rstk.tos;
	size = rstk.size;
	delete ptr;
	ptr = new int[size];
	for(int i = 0;i<size;i++)
	{
		ptr[i] = rstk.ptr[i];


	}
	return rstk;
  }
  stack::stack(stack & s)
  {
  tos = s.tos;
  size = s.size;
  ptr = new int[size];
  for(int i=0;i<size;i++)
  {
  ptr[i] = s.ptr[i];
  }


  }

int stack:: push(int data)
{
  int retval = 0;
  if(tos < size)
  {
    ptr[tos] = data;
    tos++;
    retval =1;
  }
  return retval;
}
int stack:: pop()
{
  int retval = -1;
  if(tos>0)
  {
    tos--;
    retval = ptr[tos];
  }
  return retval;
}
stack fill_stack(int s)
{ int j;
  stack stk(s);
  for(int i  = 0; i<s;i++)
  { cout<<"enter element number "<<i+1<<endl;
    cin>>j;
    stk.push(j);
  }
  return stk;
}
void print_stack(stack stk)
{
  int i;
  while((i=stk.pop()) != -1)
  {
    cout<<i<<endl;
  }
}
int main()
{ clrscr();
  stack stk = fill_stack(10);
  print_stack(stk);
  stack stk1 = stk;
  print_stack(stk1);
  getch();
  return 0;

}