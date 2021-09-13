#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int i, rows;
  int stars, spaces;

  cout<<"\n";
  cout<<"Enter number of rows : ";
  cin>>rows;
  cout<<"\n";

  while(rows%2!=0)
  {
    for(i=1; i<=rows; i++)
    {
      for(spaces=1; spaces<rows; spaces++)
      {
      cout<<" ";
      }
      //spaces
      for(spaces=1; spaces<=rows-i; spaces++)
      {
	cout<<" ";
      }
      //stars
	for(stars=1; stars<=i; stars++)
	{
	  while(i%2!=0)
	  {
	    cout<<"*";
	    if(stars!=i)
	    {
	      cout<<" ";
	    }
	  break;
	  }
	}
      cout<<"\n";
      }

  //pillar
  for(i=1; i<=rows-2; i++)
  {
    //spaces before
    for(spaces=1; spaces<rows; spaces++)
    {
      cout<<" ";
    }
    //stars
    for(stars=1; stars<=rows; stars++)
    {
      //condition for first star
      if(stars==1 || stars==rows)
      {
	cout<<"*";
	//spaces between pillar
	for(spaces=1; spaces<=rows*2-3; spaces++)
	{
	  cout<<" ";
	}
      }
    }
    cout<<"\n";
  }
  for(i=1; i<2; i++)
  {
    for(stars=1; stars<=rows; stars++)
    {
      cout<<"*";
    }

    for(spaces=1; spaces<=rows*2-3; spaces++)
    {
      cout<<" ";
    }

    for(stars=1; stars<=rows; stars++)
    {
      cout<<"*";
    }
  }

  break;
  }
  cout<<"\n\n\nPress any key to exit.";
  getch();
}