//P06_CASE CODE IN C THAT Do a menu using a CASE structure
//Program made by DMV.RODOLFO January 10th 2023 v1.0
#include<conio.h> //Library for the getch() funciton
//#include<stdio.h> //Library for printf() and scanf() function
#include<iostream> //Library for CIN & COUT COMANDS
using namespace std;

main(){			//main program
	int n;
	float o,a,b,v;
	char f;
	cout<<"Insert numbers"<<endl<<"a:";
	cin>>a;
	cout<<"b:";
	cin>>b;
	system("cls");
	while(true){
	cout<<"DMV"<<"Select the wanted option:"<<endl<<"1 - Addition"<<endl<<"2 - sustraction"<<endl<<"3 - Multiplication"<<endl<<"4 - Division"<<endl<<"5 - New numbers"<<endl<<"6 - Exit menu"<<endl;
	cin>>n;
	switch(n){
	case 1:
			system("cls");
			o=a+b;
			cout<<"The result of the operation a + b is = "<<o;
			getch();
			system("cls");
			break;
	case 2:
			system("cls");
			o=a-b;
			cout<<"The result of the operation a - b is = "<<o;
			getch();
			system("cls");
			break;
	case 3:
			system("cls");
			o=a*b;
			cout<<"The result of the operation a * b is = "<<o;
			getch();
			system("cls");
			break;
	case 4:
			system("cls");
			o=a/b;
			cout<<"The result of the operation a / b is = "<<o;
			getch();
			system("cls");
			break;
	case 5:
			system("cls");
			cout<<"Insert numbers"<<endl<<"a:";
			cin>>a;
			cout<<"b:";
			cin>>b;
			system("cls");
			break;	
	case 6:
			system("cls");
			cout<<"Are you sure yo want to exit?"<<endl<<"y - Yes"<<endl<< "n - NO"<<endl;
			cin>>f;
			switch(f){
				case 'y':
					system("cls");
					return(0);
				case 'n':
					break;
			}
			system("cls");
			break;
	default:
		break;
}
}
}