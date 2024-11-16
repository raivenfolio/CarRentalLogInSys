#include <iostream>
#include <iomanip>
#include <string.h>
#include <fstream>
#include <Windows.h>
using namespace std;

	void createAcc();
	void logIn();
	void loadInterface();

	
	int main()
	{
		loadInterface();
		system("cls");
		
		int choice;
		
		
	
		
		cout << "\t\t\t___________________________________________________\n";
		cout << "\t			    ALT F4 CAR RENTAL MAIN MENU PAGE			\n\n";
		cout << "\t\t\t______________________ MENU _______________________\n\n\n";
		cout << "														 \n\n";
		cout << "\t\t\t| Press [1] to LOGIN to your Account\t	|" << endl;
		cout << "\t\t\t| Press [2] to Create an Account		|" << endl;
		cout << "\t\t\t| Press [3] to Quit				|" << endl;
		cout << "\n\t\t\t Enter Your Choice: ";
		cin >> choice;
		
		
		
		switch(choice)
		{
			
			case 1:
				logIn();
				break;
				
			case 2:
				createAcc();
				break;
				
			case 3:
				system("cls");
				cout << "\t\t\t Thank you for Using ALT F4 CAR RENTAL PROGRAM\n\n";
				break;
				
			default: 
				system("cls");
				cout << "Invalid choice! Please only select the options.\n";
				main();
							
			
		}
		
		
		
	} 
		
	


	
	void logIn()
	{
		
		string userId, userPasswordId;
		string userAcc, userPassword;
		bool loginSuccess = false;
		
		system("cls");
		
		cout << "\t\t Enter your Username: ";
		cin >> userAcc;
		cout << "\t\t Enter your Password: ";
		cin >> userPassword;
		
		ifstream fileUsers("UserAccounts.txt");
		
			if (!fileUsers.is_open())
			{
				cerr << "Error Opening File! " << endl;
				
			}
			
			cout << "Debug user input- Username: " << userAcc << ", Password: " << userPassword << endl;
		
			while (fileUsers >> userId >> userPasswordId)
			{
				cout << "Debug: Read from file - Username: " << userId << ", Password: " << userPasswordId << endl;
				if (userAcc == userId && userPassword == userPasswordId)
				{
					loginSuccess = true;
					break;
				}
			}
			
			fileUsers.close();
			
			system("cls");
			
				if (loginSuccess)
				{
					cout << "You are Logged in Sucessfully! " << endl;
					main();
				} else{
					cout << "Login failed! Check your username or password. Otherwise, Create an account! " << endl;
					main();
				}
				
				


	}
	
	
	void createAcc()
	{
		string user_Id, userAcc, user_IdPass, userPassword;
		system("cls");
		
			cout << "\t\t\t__________________________________________\n\n";
			cout << "\t\t		        REGISTRATION				\n";
			cout << "\t\t\t_________________________________________\n\n";
		
			cout << "\t\t\t Enter email username: ";
			cin >> userAcc;
			
			cout << "\t\t\t Enter Password: ";
			cin >> userPassword;
		
		ofstream fileUsers("UserAccounts.txt", ios::app);
				 fileUsers << userAcc << ' ' << userPassword << endl;
		
		system("cls");
		
		cout << "\n\t\t You have successfully created an Account!\n";
		main();
		
	}
	
	void loadInterface()
	{
	
		system("Color 0e");
		system("cls");
		
		int buno = 177, bdos = 219;
		
		//title bar
	cout << "\n\t\t\t\t\t  ALT F4 Car Rental Service\t\t\t\t\t" << endl;

//loading word
	cout << "\t\t\t\t\t                 _____        ";
	cout << "\n\t\t\t\t\t                /|_||_|`.__   ";
	cout << "\n\t\t\t\t\t               (   _    _ |)  ";
	cout << "\n\t\t\t\t\t    Loading...=`-(_)--(_)-'   ";
	cout << "\n\n\t\t\t\t\t    ";

//loading bar part 1
	for(int i = 0; i < 25; i++){
	cout << (char)buno;	
	}
	

//loading bar part 2
	cout << "\r";
	cout << "\t\t\t\t\t    ";
	for(int i = 0; i < 25; i++)
	{
	cout << (char)bdos;
	Sleep(150);
	}

	cout << "\n\t\t\t\t\t   " << (char)1 <<"!";
	system("Pause");
	

}
	
	

	
	
	
	
	
	
	
	
	
	
	
	
