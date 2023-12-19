#include<iostream>
#include<fstream>
using namespace std;
class To_Do_List
{
	private:
		int choice;
		char option;
		string task,tasks,status;
		fstream file,file1;
	public:
		void developer()
		{
			cout<<"\n\n\n\n\n\n\n\t\t\t\t\t====================================" <<endl
				<<"\t\t\t\t\t| \t\t\t\t   |" <<endl
				<<"\t\t\t\t\t|   \t     TO DO LIST\t\t   |" <<endl
				<<"\t\t\t\t\t| \t\t\t\t   |" <<endl
				<<"\t\t\t\t\t| Software Developed By SOORAT ALI |" <<endl
				<<"\t\t\t\t\t| \t\t\t\t   |" <<endl
				<<"\t\t\t\t\t|\t  ID:CS11WX130873\t   |" <<endl
				<<"\t\t\t\t\t| \t\t\t\t   |" <<endl
				<<"\t\t\t\t\t====================================" <<endl
				<<"\n\n\n\t\t\t\t\t";
			system("pause");
		}
		void display()
		{
			system("cls");
			cout<<"\n\n\n\n\n\n\n\t\t\t\t\t=================================" <<endl
				<<"\t\t\t\t\t|\t\t\t\t|" <<endl
				<<"\t\t\t\t\t|\t1. ADD TASK\t\t|" <<endl
				<<"\t\t\t\t\t|\t\t\t\t|" <<endl
				<<"\t\t\t\t\t|\t2. VIEW TASK\t\t|" <<endl
				<<"\t\t\t\t\t|\t\t\t\t|" <<endl
				<<"\t\t\t\t\t|\t3. REMOVE TASK\t\t|" <<endl
				<<"\t\t\t\t\t|\t\t\t\t|" <<endl
				<<"\t\t\t\t\t|\t4. EXIT PROGRAM\t\t|" <<endl
				<<"\t\t\t\t\t|\t\t\t\t|" <<endl
				<<"\t\t\t\t\t=================================" <<endl
				<<"\n\t\t\t\t\tEnter your Choice : ";
			cin>>choice;
			system("cls");
		}
		void addtask()
		{
			do
			{
				cout<<"\n\n\t\t\t\t\tEnter Task : ";
				cin>>task;
				cout<<"\n\t\t\t\t\tEnter Task Status(Completed/Pending) :";
				cin>>status;
				cout<<"\n\n\t\t\t\t\tDo you want to add Task (y/n) : ";
				cin>>option;
				system("cls");
			}
			while(option=='y');
			file.open("E://Task.txt",ios::out | ios::app);
			file<<task <<"\t" <<status <<"\n";
			file.close();
		}
		void viewtask()
		{
			file.open("E://Task.txt",ios::in);
			if(!file)
			{
				cout<<"\n\t\t\t\t\tError Opening File " <<endl
					<<"\n\t\t\t\t\tFile Not Found " <<endl
					<<"\n\t\t\t\t\t";
				system("pause");
			}
			else
			{
				cout<<"\n\n\n\n\t\t\t\t\t=================================" <<endl
					<<"\t\t\t\t\t|\t\t\t\t|" <<endl
					<<"\t\t\t\t\t|\t   TASKS\t\t|" <<endl
					<<"\t\t\t\t\t|\t\t\t\t|" <<endl
					<<"\t\t\t\t\t=================================" <<endl
					<<"\n\n\n\t\t\t\t\tTASKS\t\tTASK STATUS\n\n" <<endl;
				file>>task>>status;
				while(!file.eof())
				{
					cout<<"\t\t\t\t\t" <<task <<"\t\t" <<status <<endl;
					file>>task>>status;
				}
				cout<<"\n\t\t\t\t\t";
				system("pause");
				file.close();
			}
		}
		void removetask()
		{
			int count=0;
			file.open("E://Task.txt",ios::in);
			file1.open("E://Task1.txt",ios::out | ios::app);
			if(!file)
			{
				cout<<"\n\n\n\t\t\t\t\tError Opening File\n\n";
			}
			else
			{
				cout<<"\n\n\t\t\t\t\tTask : ";
				cin>>tasks;
				file>>task>>status;
				if(task==tasks)
				{
					cout<<"\n\t\t\t\t\tDelete Record\n\n\n\t\t\t\t\tSucessfully Deleted Record\n\n\n\t\t\t\t\t";
					count++;
				}
				else
				{
					file1<<" "<<task <<"\t" <<status <<"\n";
					file>>task>>status;
				}
				if(count==0)
				{
					cout<<"\n\t\t\t\t\tTAsk not Found\n\n\t\t\t\t\t";
				}
				system("pause");
				file.close();
				file1.close();
				remove("E://Task.txt");
				rename("E://Task1.txt","E://Task.txt");
				
			}
		}
		void controlpanel()
		{
			developer();
			while(1)
			{
				display();
				switch(choice)
				{
					case 1:
						addtask();
						break;
					case 2:
						viewtask();
						break;
					case 3:
						removetask();
						break;
					case 4:
						exit(0);
						break;
					default: 
						cout<<"\n\t\t\t\t\tInvaild Choice" <<endl;
						break;
				}
			}
		}
};
int main()
{
	To_Do_List tdl;
	tdl.controlpanel();
	return 0;
}

