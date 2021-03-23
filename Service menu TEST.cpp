#include <iostream>
#include <stdlib.h>

#define PIN 1234

using namespace std;

void enterServiceMenu();
void showServiceMenu();
void userChoiceServiceMenuNumber(int userChoice);
void showServiceBalance();
void showCupsBalance();
void showWithdrawMoney();
void cupsReplenishmentMenu();			

int main()
{
	cout << "***************************************************" << endl;
	cout << "Enter the PIN code to enter the service menu: " << endl;
	
	enterServiceMenu();
	
	return 0;
}

void enterServiceMenu()  
{
	int attempt = 2, enteredPin = 0;
	
	while (attempt >= 0){
		
		cin >> enteredPin;
		cout << endl;
		
		system("CLS");
		if (enteredPin == PIN){
			showServiceMenu();			
		}
		else if (enteredPin != PIN and attempt > 0){
			cout << "Error. Wrong PIN, try again. You have " << attempt << " attempts" << endl;
		}
		else if (attempt == 0){
			cout << "Wrong PIN. The system blocked" << endl;
		} else;
			attempt--;
	}
}

void showServiceMenu()
{
	int userChoice = 0;
	
	cout << "**************************************" << endl;
	cout << "Service menu" << endl;
	cout << "1. Actual balance" << endl;
	cout << "2. Cups balance" << endl;
	cout << "3. Withdraw money" << endl;
	cout << "0. Return to the main menu = 3" << endl;
	cin >> userChoice;
	
	userChoiceServiceMenuNumber(userChoice);
}

void userChoiceServiceMenuNumber(int userChoice)
{
	if (userChoice == 1) {
		system("CLS");
		showServiceBalance();
	}
	else if (userChoice == 2){
		system("CLS");	
		showCupsBalance();
	}
	else if (userChoice == 3){
		system("CLS");	
		showWithdrawMoney();
	}
	else if (userChoice == 0){
		system("CLS");	
	//Go to Main menu function
	
	showWithdrawMoney();
	
	}
	else {
		system("CLS");
		cout << "Wrong input. Choose correct option" << endl;
		userChoiceServiceMenuNumber(userChoice);
	}	
}

void showServiceBalance()	//get number of money from main menu
{	
	int userChoice = 0;
	
	cout << "The current cash balance is " << "AMOUNT OF MONEY!!!!!!!!!!!!" << endl;//get number of money from main menu
	cout << "Press 1 to return to the service menu";
	cin >> userChoice;
	
	system("CLS");
	if (userChoice == 1)
		showServiceMenu();
	else {
		cout << "Wrong input!" << endl;
		showServiceBalance();
	}
}			

void showCupsBalance()	//get number from main menu
{
	int userChoice = 0;
	
	cout << "The current cups balance is " << "AMOUNT OF CUPS!!!!!!!!!!!!" << endl; //get number from main menu
	cout << "Press 1 to replenish cups" << endl;
	cout << "Press 2 to return to the service menu";
	cin >> userChoice;
	
	system("CLS");
	if (userChoice == 1){
		cout << "CUPS ARE FULL = 700!!!!!!!!!";
		// cups = 700;
		cupsReplenishmentMenu();
	}
	else if (userChoice == 2)
		showServiceMenu();
	else {
		cout << "Wrong input!" << endl;
		showCupsBalance();
	}
}				

void cupsReplenishmentMenu()
{
	int userChoice = 0;
	
	cout << "Press 2 to return to the service menu" << endl;
	
	if (userChoice == 2)
		showServiceMenu();
	else {
		cout << "Wrong input!" << endl;
		showCupsBalance();
}			

void showWithdrawMoney()   // WARNING!!!!!!!!!!!!!!!! {}
{
	int userChoice = 0;
	
	cout << "Press 1 to withdraw money";
	cout << "Press 2 to return to the service menu" << endl;
	cin >> userChoice;
	
	system("CLS");
	if (userChoice == 1)
		cout << "You withdrew " << "********"/* AMOUNT OF MONEY from main menu */ << " BYN";
		//amount of money = 0;
	else if (userChoice == 2)
		showServiceBalance();
	else {
		cout << "Wrong input!" << endl;
		showCupsBalance();
	}
}							
