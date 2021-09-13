#include<iostream.h>
#include<conio.h>
#include<math.h>

/*
Explicit Function for Fibonacci Series
Fn = [ (1+ sqrt5)^n - (1-sqrt5)^n / (2^n * sqrt5) ]

This program prints Fibonacci series. It can print any last digits
of a Fibonacci series of any length based on user-input.
This program calculate the Fibonacci series based on the mathematical explicit 
formula for Fibonacci Sequence.
*/

void main()
{
  clrscr();
  char next;
  int length, printL, n;
  long double result;

  idhar:
  cout<<"\nLength bata : ";
  cin>>length;
  cout<<"\nKitne print karane hai : ";
  cin>>printL;
  cout<<"\n\n";

  cout<<"Last "<<printL<<" digits of The Fibonacci Series of length ";
  cout<<length<<" are : \n\n";

  if(printL == length)
  {
  cout<<"0, ";
  }

  for(n=(length-(printL-1)); n<=length; n++)
  {
    result= (((pow((1 + sqrt(5)), n)) - (pow((1 - sqrt(5)), n))) / ((pow(2, n)) * (sqrt(5))));
    cout<<result;
    if(n!=length)
    {
      cout<<", ";
    }
    else
    {
      cout<<".";
    }
  }

  cout<<"\n\n\nDubara to ni karna? (Y/N) : ";
  cin>>next;

  if(next == 'y' || next == 'Y')
  {
    goto idhar;
  }
  else
  cout<<"\n\n\n~~~~~~~~~~~~~~~~~~~~\n\nPress any key to exit.\n";
  getch();
}