#include<iostream>
#include<conio.h>
using namespace std;
class calculator
{
	private:
		float number1,number2;
		char opera,option;
	public:
		void display()
		{
			cout<<"\n\n\n\n\n\n\n\t\t\t\t\t====================================" <<endl
				<<"\t\t\t\t\t|   \t\t\t\t   |" <<endl
				<<"\t\t\t\t\t|\t   BASIC CALCULATOR\t   |" <<endl
				<<"\t\t\t\t\t|   \t\t\t\t   |" <<endl
				<<"\t\t\t\t\t| Software Developed By SOORAT ALI |" <<endl
				<<"\t\t\t\t\t|   \t\t\t\t   |" <<endl
				<<"\t\t\t\t\t|\t   ID:CS11WX130873\t   |" <<endl
				<<"\t\t\t\t\t|   \t\t\t\t   |" <<endl
				<<"\t\t\t\t\t====================================" <<endl
				<<"\n\n\n\t\t\t\t\t";
			system("pause");
			cout<<"\n\n\n\t\t\t\t\t";
			system("cls");
		}
		void getdata()
		{
			while(option!='n')
			{
				cout<<"\n\n\n\n\n\t\t\t\t\tEnter Number : ";
				cin>>number1; 
				cout<<"\n\t\t\t\t\tEnter Operator : ";
				cin>>opera;
				cout<<"\n\t\t\t\t\tEnter Number : ";
				cin>>number2;
				switch(opera)
				{	
					case '+' : cout<<"\n\t\t\t\t\tResult :" <<number1+number2 <<endl; break;
					case '-' : cout<<"\n\t\t\t\t\tResult :" <<number1-number2 <<endl; break;
					case '*' : cout<<"\n\t\t\t\t\tResult :" <<number1*number2 <<endl; break;
					case '/' : cout<<"\n\t\t\t\t\tResult :" <<number1/number2 <<endl; break;
					default : cout<<endl <<"\n\n\t\t\t\t\tInvalid Option" ; break;
				}
				cout<<"\n\n\t\t\t\t\tDo You Want to Perform another Operation(y/n) : ";
				cin>>option;
				cout<<"\n\n\n\t\t\t\t\t";
				system("cls");
			}
		}
};
int main()
{
	calculator c;
	c.display();
	c.getdata();
	return 0;
}

