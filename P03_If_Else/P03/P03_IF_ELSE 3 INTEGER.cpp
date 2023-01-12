//Program made by DMV.RODOLFO January 9th 2023 v1.0
//P03 the greater of 3 numbers using if
#include<conio.h> //Library for the getch() funciton
//#include<stdio.h> //Library for printf() and scanf() function
#include<iostream> //Library for CIN & COUT COMANDS
using namespace std;

main(){			//main program
	int a,b,c;
	cout<<"Enter a number a: ";cin>>a;
	cout<<"Enter a number b: ";cin>>b;
	cout<<"Enter a number b: ";cin>>b;	
	if((a>=b)&&(a>=c)){		//&& and; || or; !, ~ not;
	cout<<"The largest number is "<<a;}
	else if((a<b)&&(b>c)){cout<<"The largest is "<<b;	}
	else {cout<<"the largest is "<<c;}
	getch();
	return(0);
}