//P05_FOR CODE IN C THAT DETERMINE THE FACTORIAL OF A NUMBER
//Program made by DMV.RODOLFO January 10th 2023 v1.0
#include<conio.h> //Library for the getch() funciton
//#include<stdio.h> //Library for printf() and scanf() function
#include<iostream> //Library for CIN & COUT COMANDS
using namespace std;

main(){			//main program
	int n,i,f;
	cout<<"n: ";
	cin>>n;
	if(n<0){cout<<"Can't calculate the factorial of a negative number";	getch();return(0);}
	else{
		f=1;
		for(i=1;i<=n;i++){
			f=f*i;
		}
	cout<<"The factorial of n is = "<<f;
	}
	getch();
	return(0);
}