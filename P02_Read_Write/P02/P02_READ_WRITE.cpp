//Program made by DMV.RODOLFO January 9th 2023 v1.0
//Will ask for a number and then show the square of that number


#include<conio.h> //Library for the getch() funciton
#include<stdio.h> //Library for printf() function

main(){			//main program
	//declaration of variables
	float x,y; //float (real number); int (integer number); char (character); bool (boolean number);
	printf("Write your number: \n");// \n Line break
	scanf("%f",&x);//	%f float;	%i entero;	%c character;	%b boolean;		//read a real number and assign it to x;
	y=x*x;
	printf("The square of %.4f is %.3f",x,y);
	getch();
	return(0);
}
