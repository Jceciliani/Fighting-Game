/*Program Name: Project 3
 * Author: Josh Ceciliani
 * Date: November 5, 2017 
 * Description: This program is the menu and has the fight function for the Fantasy Combat Game. 
 * */
#include<iostream>
#include "Menu.hpp"
#include <iostream>
#include <string>
using namespace std;
int Menu::Menus()
{
	string choice;	

	bool ifP1 = true;
	bool ifError = false;	

	while(1)
	{	
		cout << "\nWelcome to Fantasy Combat Game\n" << endl;
		cout << "Please choose the characters you would like to fight.\n" << endl;
		cout << "1. Barbarian " << endl;
		cout << "2. Vampire " << endl;
		cout << "3. Medusa " << endl;
		cout << "4. BlueMen " << endl;	
		cout << "5. Harry Potter " << endl;
		cout << "6. Exit " << endl;		

	
		
		getline(cin, choice);	

		if(choice == "1")
		{
			if(ifP1)
			{   
				char1 = new Barbarian(); 
			}
			else
			{
				char2 = new Barbarian();
			}			

		}
		else if(choice == "2")
		{
			if(ifP1)
			{
				char1 = new Vampire();
			}
			else
			{	
				char2 = new Vampire(); 
			}
			
		}

		else if(choice == "3")
		{
			if(ifP1)
			{    
				char1 = new Medusa();
			}
			else
			{
				char2 = new Medusa();
			}
		}	
		else if(choice == "4")
		{
			if(ifP1)
			{
				char1 = new BlueMen();
			}
			else
			{	
				char2 = new BlueMen();	
			}
		} 	
		else if(choice == "5")
		{
			if(ifP1)
			{
				char1 = new HarryPotter();
			}
			else
			{
				char2 = new HarryPotter();
			}
		}	
		else if(choice == "6")
		{
			return 0;
		}
		else 
		{
			cout << "Invalid - Please enter 1 - 6" << endl;
			ifError = true;
		}
		if(ifError)
		{
			ifError = false;
		} 
		else 
		{
			if(ifP1)
			{
				ifP1 = false;
			}
			else
			{
				break;
			} 
		}
	}
}

void Menu::fight()
{
	int damage;
	//Character names	
	cout << "Player 1 is: " << char1->getName() << endl;
	cout << "Player 2 is: " << char2->getName() << endl;;
	cout << endl;

	//Player death - check with character fatalBlow function
	bool p1Death = false;
	bool p2Death = false;
	//While a player is not dead
	while(p1Death == false && p2Death == false)
	{
		cout << "Player 1 attack:" << endl;
		damage = char1->attack();
		cout << "Player 2 defense:" << endl;
		char2->defense(damage);

		p2Death = char2->fatalBlow();

		if(p2Death == false)
		{
			cout << "Player 2 attack:" << endl;
			damage = char2->attack();
			cout << "Player 1 defense:" << endl;
			char1->defense(damage);
			cout << endl;
		}
		p1Death = char1->fatalBlow();
		
	cin.get();
	}
	//Game Done
	bool ifError = false;

	if(p1Death == true)
	{	
		string c;	
		cout <<	"Player 2 Wins\n" << endl;
		cout << "1. Play again" << endl;
		cout << "2. Exit" << endl; 
		getline(cin, c);
		
		if(c == "1")
		{
			Menus();
		}	 
		else if(c == "2")
		{
			return;
		}
		else
		{
			cout << "Invalid - Please enter 1 or 2" << endl; 
			ifError = true; 
		}	
		if(ifError)
		{
			ifError = false;
		}
	}
	else if(p2Death == true)
	{
		string ch;
		cout << "Player 1 Wins\n" << endl;
		cout << "1. Play again" << endl;
		cout << "2. Exit" << endl;
		getline(cin, ch);

		if(ch == "1")
		{
			Menus();
		}  
		else if(ch == "2")
		{
			return;
		}
		else
		{
			cout << "Invalid - Please enter 1 or 2" << endl;
			ifError = true;
		}
		if(ifError)
		{
			ifError = false;
		}	
	}
	
	delete char1;
	delete char2;		

}

Menu::~Menu()
{
	if(char1)
	{
		delete char1;
	}	
	if(char2)
	{
		delete char2;
	}



}


