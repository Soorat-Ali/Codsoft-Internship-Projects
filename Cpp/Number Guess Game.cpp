#include<iostream>
#include<cstdlib>
using namespace std;
class Number_Guess_Game
{
	private:
		int randomnumber;
	public:
		void developer()
		{
			cout<<"\n\n\n\n\n\n\n\t\t\t\t\t====================================" <<endl
				<<"\t\t\t\t\t| \t\t\t\t   |" <<endl
				<<"\t\t\t\t\t|         NUMBER GUESS GAME        |" <<endl
				<<"\t\t\t\t\t| \t\t\t\t   |" <<endl
				<<"\t\t\t\t\t| Software Developed By SOORAT ALI |" <<endl
				<<"\t\t\t\t\t| \t\t\t\t   |" <<endl
				<<"\t\t\t\t\t| \tID:CS11WX130873\t\t   |" <<endl
				<<"\t\t\t\t\t| \t\t\t\t   |" <<endl
				<<"\t\t\t\t\t====================================" <<endl
				<<"\n\n\n\t\t\t\t\t";
			system("pause");
		}
		void game()
		{
			int guess;
			randomnumber=rand()%100+1;
			system("cls");
			cout<<"\n\n\n\n\t\t\t\t\tWELCOME TO NUMBER GUESS GAME\n"
				<<"\n\n\t\t\t\t\tGuess any Number between 1 to 100\n"
				<<"\n\n\t\t\t\t\t";
			system("pause");
			system("cls");
			do
			{
				cout<<"\n\n\n\n\t\t\t\t\tEnter your Guess : ";
				cin>>guess;
				system("cls");
				if(guess<randomnumber)
				{
					cout<<"\n\n\n\n\n\t\t\t\t\tNumber is too Low...!\n\t\t\t\t\tTry Again" <<endl;
				}
				else if(guess>randomnumber)
				{
					cout<<"\n\n\n\n\n\t\t\t\t\tNumber is too High...!\n\t\t\t\t\tTry Again" <<endl;
				}
				else
				{
					cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\tCongratulations....!\n\t\t\t\t\tYou have Won the Game" <<endl
						<<"\n\n\n\t\t\t\t\t";					
					system("pause");
				}
			}
			while(guess!=randomnumber);
			
		}
		void controlpanel()
		{
			developer();
			game();
		}
};
int main()
{
	Number_Guess_Game ngg;
	ngg.controlpanel();
	return 0;
}

