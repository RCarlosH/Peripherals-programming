//P04_WHILE		Code in C that deterinates the divisors of a number using while structure
//Program made by DMV.RODOLFO January 9th 2023 v1.0
#include<conio.h> //Library for the getch() funciton
//#include<stdio.h> //Library for printf() and scanf() function
#include<iostream> //Library for CIN & COUT COMANDS
using namespace std;

main(){			//main program
	int n,i=1;
	cout<<"n: ";
	cin>>n;
	while(i<=n){
		if(n%i==0){			//modulo de algo "%"
			cout<<i<<endl;
		}
		i++;					///equivale a i=i+1				
	}
	getch();
	return(0);
}
