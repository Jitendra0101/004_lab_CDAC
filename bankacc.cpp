#include<iostream>
#include<string>
using namespace std;

class account
{
	
	string acc_name;
	string Acc_Type[2]={"Saving","Current"};
	int acc_balance;
	int acc_choice;
	
	public:

	static int count;
	int acc_no=100;

	account(){}
	
	void add_acc()
	{
		count++;
		acc_no = acc_no+count;
		cout <<"==================================================================================================================================================================";
		cout << endl;
		cout << "enter your name: ";
		cin >> acc_name;
		cout << "\n enter your account type choice:- \n 0. saving\n 1. current: \n ";
		cin >> acc_choice;
		if(acc_choice == 0)
		{
			acc_balance = 0;
		}
		else
		{
			acc_balance = 1000;
		}
		cout << endl;
		cout <<"==================================================================================================================================================================";
		cout << endl;

	}

	void display()
	{
		cout << endl;
		cout <<"==================================================================================================================================================================";
		cout << endl;
		cout << "name is: " << acc_name << endl;
		cout << "account type :" << Acc_Type[acc_choice] << endl;
		cout << "account no: " << acc_no << endl;
		cout << "account balance : " << acc_balance << endl;
		cout << endl;
		cout <<"==================================================================================================================================================================";
	}

	void deposit()
	{
		cout << endl;
		cout <<"==================================================================================================================================================================";
		int depos;
		cout << endl;
		cout << "enter the amount to be deposited: ";
		cin >> depos;
		cout << endl;
		acc_balance=acc_balance+depos;
		cout << "after deposition, balance is : " << acc_balance << endl;
		cout << endl;
		cout <<"==================================================================================================================================================================";
	}

	void withdraw()
	{
		int withd;
		cout << endl;
		cout <<"==================================================================================================================================================================";
		cout << "\n current balance is: "<< acc_balance << endl;
		cout << "enter the amount to be withdrawn: ";
		cin >> withd;

		if(withd<acc_balance)
		{		
		acc_balance = acc_balance - withd;
		cout << endl << "after withdrawal, current balance is: "<< acc_balance << endl;
		}
		else
		cout<<"Account balance  is not suffiecient ";
		cout << endl;
		cout <<"==================================================================================================================================================================";
	}

	

};

int account::count;
int main()
{

	account arr_acc[100];

	int choice;

	int i = 0;
	int temp;

	do{

		cout<<"Enter your choice \n 1.Add account \t \t \t 2.Withdraw \n 3.Deposite \t \t \t 4.Display all accounts \n 5.Display my acc details \t 0.To exit"<<endl;
		cin >> choice;
		
		switch (choice)
		{
			case 1:
				
				arr_acc[i].add_acc();
				cout << endl;
				cout << "your account no. is: " << arr_acc[i].acc_no << endl;
				i++;
				break;
		
			
			case 2:
				cout << endl<<"enter your account number: "<<endl;
				cin >> temp;
			
				cout << endl;
			
				arr_acc[temp-101].withdraw();
				cout << endl;
				break;
			
			case 3:
				cout << endl;
				cout << "enter your account number: ";
				cin >> temp;
			
				cout << endl;
				arr_acc[temp-101].deposit();
				cout << endl;
				break;
			
			case 4:

				if(account::count == 0)
				{
					cout << "no accounts created yet";
					cout << endl;
				}
				for (int j = 0 ; j< account::count;j++)
			{
				arr_acc[j].display();
				cout << endl;
				cout << "***********************************************************************************************************************************************************" << endl;
			}
				break;
			
			case 5:
				if(account::count == 0)
				{
					cout << "no accounts created yet";
					cout << endl;
					break;
				}
				cout << endl <<"enter your account number: " << endl;
				cin >> temp;
				
				cout << endl;
				arr_acc[temp-101].display();
				cout << endl;
				break;

			case 0: 
				exit(1);
			
			default :
				cout<<endl<<"Invalid input "<<endl<<"Please enter again : "<<endl;

		}

	}while(choice!=0);

	// arr_acc[i].deposit();
	// account arr_acc[i]2;
	// arr_acc[i]2.add_acc();
	// arr_acc[i]2.display();
	// arr_acc[i]2.deposit();
	
	return 0;
}
