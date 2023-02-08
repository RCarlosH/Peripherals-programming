//Program made by DMV.RODOLFO January 9th 2023 v1.0
//Will ask for a number and then show the square of that number
//CIN COUT


#include<conio.h> //Library for the getch() funciton
//#include<stdio.h> //Library for printf() and scanf() function
#include<iostream> //Library for CIN & COUT COMANDS
using namespace std;

main(){			//main program
	//declaration of variables
	float x,y; //float (real number); int (integer number); char (character); bool (boolean number);
	system("cls");	//clean screen function
	cout<<"write a number: ";
	cout<<endl;	//line break
	cin>>x;
	y=x*x;
	cout<<"The square of "<<x<<" is "<<y;
	getch();
	return(0);
}
