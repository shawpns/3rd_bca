//calculate area & circumference of circle using Inline Function

#include<iostream>
#include<conio.h>
using namespace std;

const int pi=3.14159;

/* Finds circumference of circle*/
inline float circum(float x)
	{ 
		return(2*pi*x);
	}

/* Finds area of circle*/
inline float area(float x)
	{ 
		return(pi*x*x);
	}

void main()
{
float r;
cout<<"Enter the radius of the circle:";
cin>>r;

cout<<endl<<"Circumference:"<<circum(r);
cout<<endl<<"Area :"<<area(r);
getch();


}