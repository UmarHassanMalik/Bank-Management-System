

#include <iostream>
#include <fstream>
using namespace std;

/* Banking management system*/

void printIntroMenu();
void printMainMenu();
void start();
void login();
void creatAccount();

const int password=1122;
int main() 
{
	start();
	system("pause");
	return 0;
}

void start()
{
	int choice;
	do{
		system("CLS");
		cout << "Please select an option from the menu below:" << endl;
		cout << endl;
		printIntroMenu();
		cin >> choice;


		switch(choice)
		{
			case 1:
				login();
				break;
			case 2:
				creatAccount();
				break;
			case 3:
				cout << "Thank You For Using Our Services!" << endl;
				exit(0);
			default:
				cout << "You entered WRONG CHIOCE!" << endl;
			
		}
	}while(true);
		
}

void printIntroMenu()
{
	cout << "  1 -> Login" << endl;
	cout << "  2 -> Creat New Accout" << endl;
	cout << "  3 -> Quit" << endl;
	cout << ">";
}


void printMainMenu()
{
	cout << "Please select an option:" << endl;
	cout << "  1 -> Desposit Money" << endl;
	cout << "  2 -> Withdraw Money" << endl;
	cout << "  3 -> Request Balance" << endl;
	cout << "  4 -> Pay Electricity Bill" << endl;
	cout << "  5 -> To Donate for Diamer Bhasha And Mohmond Dam" << endl;
	cout << "  6 -> Quit" << endl;
	cout << ">";
}


void creatAccount()
{

	string userName;
	int age;
	string gender;
	string accountType;
    int chooseAType;
	string userId;
	

	
	system("CLS");
	cout << "***************Creat New Account****************" << endl;

	cout << "Please enter your user name: ";
	cin >> userName;
	

	cout << "Please enter your age: ";
	cin >> age;
	

	cout << "Please enter your gender: ";
	cin >> gender;
	

	BackToAcountType:
	cout << "Please select the type of account" << endl;
	cout << "1->Current" << endl;
	cout << "2->Saving" << endl;
	cout << ">";
	cin >> chooseAType;
	switch(chooseAType)
	{
		case 1:
			accountType = "Current";
			break;
		case 2:
			accountType = "Saving";
			break;
		default:
			cout << "You entered WRONG CHIOCE!" << endl;
			goto BackToAcountType;
		
	}
	
	cout << "Please enter your user Id: ";
	cin >> userId;
	
	cout << "Please enter your Password:";
//	cin >> password;
	
	cout << "Thank Your! Your account has been created! To lognin please select option 1" << endl;
}


void login()
{
	
	
	string userId;
	string passcheck,pass1;
	int choice;
	passcheck = password;
	system("CLS");
	cout << "***************(Login)****************" << endl;
	
	cout << "  Please Enter your user id: ";
	cin >> userId;
	
	
	cout << "  Please enter your Password: ";
	cin >> pass1;
	
	
	
	if(pass1==passcheck)
{
		do
	{
	
		printMainMenu();
		cin >> choice;
		
		switch(choice)
		{
			case 1:
			
				int despositamount;
				cout << "Please enter desposit amount: $";
				cin >> despositamount;
				cout << "You have desposit $" << despositamount << endl;
				break;
			case 2:
			
				int withdrow;
				cout << "Please enter amount: $";
				cin >> withdrow;
				cout << "You have withdrow $" << withdrow <<endl;
				break;
			case 3:
			
				cout << "Your Balance is $20" << endl;
				break;
				
			case 4:
				
				int bill;
				cout << "Please enter amount: $" ;
				cin >> bill;
				cout << "You have paid bill $" << bill << endl;
				break;
			case 5:
			
				int donation;
				cout << "Please enter amount: $";
				cin >> donation;
				cout << "You have donatted $" << donation << endl;
				break;
				
			case 6:
				cout << "Thank You For Using Our Services!" << endl;
				exit(0);
				break;
			default:
				cout << "You Make Wrong choice!" << endl;
	}

	}while(true);
}
else 
{cout<< "wrong";int a;
cin>> a;

}
}




