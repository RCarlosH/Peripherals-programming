//Program made by DMV.RODOLFO January 9th 2023 v1.0
//P03 the greater or the equal of 2 numbers using if
#include<conio.h> //Library for the getch() funciton
//#include<stdio.h> //Library for printf() and scanf() function
#include<iostream> //Library for CIN & COUT COMANDS
using namespace std;

main(){			//main program
	int a,b;
	cout<<"Enter a number a: ";cin>>a;
	cout<<"Enter a number b: ";cin>>b;	
	if(a>b){cout<<"a > b";}
	else if(a<b){cout<<"a < b";	}
	else {cout<<"a = b";}
	getch();
	return(0);
}
