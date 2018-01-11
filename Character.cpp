/*Program Name: Project 3
 * Author: Josh Ceciliani
 * Date: November 5, 2017 
 * Description: This is character base class and all of the derived classes of character. This holds all of info for all of the characters in the Fantasy Combat Game.
 * */

#include<iostream>
#include "Character.hpp"
#include <iostream>
#include <cstdlib>
using namespace std;

Character::Character()
{
	armor = 10;
	strength = 100;	
	name = "character";
	isDead = false;
	special = 0; 	
}

Character::~Character()
{}

//********************
//Barbarian class constructor
Barbarian::Barbarian()
{
	armor = 0;
	strength = 12;
	name = "Barbarian";
	isDead = false;
	special = 0;

}
//destructor
Barbarian::~Barbarian()
{}

//Barbarians attack
int Barbarian::attack()
{
	int attack1 = (rand()%6)+1;
	int attack2 = (rand()%6)+1;
	int totalattack = attack1 + attack2;

	cout << "The barbarian attacked for " << totalattack << endl;
	return totalattack;
}
//Barbarians Defense
void Barbarian::defense(int damage)
{
	int defense1 = (rand()%6)+1;
	int defense2 = (rand()%6)+1;
	int totaldefense = defense1 + defense2;

	int d = damage - totaldefense;

	if(damage != 99)
	{
		cout << "The barbarian defends for " << totaldefense << "." << endl;

	}
	
	if(d <= 0)
	{
		cout << "The barbarian took no damage this round." << endl;
		cout << "Armor: " << armor << endl;
		cout << "Strength: " << strength << endl;
	}
	else if(damage == 99)
	{
		cout << "Medusa used Glare turned you to stone." << endl;
		strength = 0;
	} 
	else if(d >= 1)
	{	
		strength -= d;
		cout << "The barbarian was hit for "  << d << " damage." << endl;
		cout << "Armor: " << armor << endl;
		cout << "Strength: " << strength << endl;	

	}
}	 
//Is the Barbarian dead from battle?
bool Barbarian::fatalBlow()
{
	if(strength <= 0)
	{
		return true;
	} 
	else
		return false;
	

}	

//Vampire *********************************
//Constructor	
Vampire::Vampire()
{
	armor = 1;
	strength = 18;
	name = "Vampire";
	isDead = false;
	special = 0;	

}
//Destructor
Vampire::~Vampire()
{}

//Vampire Attack
int Vampire::attack()
{
	int attack = (rand()%12)+1;

	cout << "The vampire attacked for " << attack << endl;
	return attack;
}

//Vampire Defense
void Vampire::defense(int damage)
{
	int defense = (rand()%6)+1;

	int d = damage - defense - armor;
	
	if(defense == 2 || defense == 4 || defense == 6)
	{
		cout << "The vampire charms the enemy into not attacking and takes no damage" << endl;
		cout << "Armor: " << armor << endl;
		cout << "Strength: " << strength << endl; 

	} 
	else if(damage != 99)
	{
		cout << "The vampire defends for " << defense << "." << endl;

	}
	
	else if(d <= 0)
	{
		cout << "The vampire took no damage this round." << endl;
		cout << "Armor: " << armor << endl;
		cout << "Strength: " << strength << endl;
	}
	else if(damage == 99)
	{
		cout << "Medusa used Glare turned you to stone." << endl;
		strength = 0;
	} 
	else if(d >= 1)
	{	
		strength -= d;
		cout << "The vampire was hit for "  << d << " damage." << endl;
		cout << "Armor: " << armor << endl;
		cout << "Strength: " << strength << endl;	

	}
}
//Is the Vampire dead?
bool Vampire::fatalBlow()
{
	if(strength <= 0)
	{
		return true;
	} 
	else
		return false;
	

}	




//Medusa **************************************
//Constructor	
Medusa::Medusa()
{
	armor = 3;
	strength = 8;
	name = "Medusa";
	isDead = false;
	special = 0;	

}
//Destructor
Medusa::~Medusa()
{}

//Medusa Attack
int Medusa::attack()
{
	int attack1 = (rand()%6)+1;
	int attack2 = (rand()%6)+1;
	int totalattack = attack1 + attack2;
	if(totalattack == 12)  
	{
		totalattack = 99;
		cout << "Medusa user Glare!" << endl;
		return totalattack; 
	}
	else
	{
	cout << "Medusa attacked for " << totalattack << endl;

	return totalattack;	
	}
}
//Medusa Defense
void Medusa::defense(int damage)
{
	int defense = (rand()%6)+1;

	int d = damage - defense - armor;
	
	if(damage != 99)
	{
		cout << "Medusa defends for " << defense << "." << endl;

	}
	
	if(d <= 0)
	{
		cout << "Medusa took no damage this round." << endl;
		cout << "Armor: " << armor << endl;
		cout << "Strength: " << strength << endl;
	}
	else if(damage == 99)
	{
		cout << "Medusa used Glare and turned you to stone." << endl;
		strength = 0;
	} 
	else if(d >= 1 )
	{	
		strength -= d;
		cout << "Medusa was hit for "  << d << " damage." << endl;
		cout << "Armor: " << armor << endl;
		cout << "Strength: " << strength << endl;	

	}
}
//Is Medusa dead?
bool Medusa::fatalBlow()
{
	if(strength <= 0)
	{
		return true;
	} 
	else
		return false;
}

//Blue Men ****************************************
//Constructor
BlueMen::BlueMen()
{
	armor = 3;
	strength = 12;
	name = "BlueMen";
	isDead = false;
	special = 0;		

}
//Destuctor
BlueMen::~BlueMen()
{}

//BlueMen attack
int BlueMen::attack()
{
	int attack1 = (rand()%10)+1;
	int attack2 = (rand()%10)+1;
	int totalattack = attack1 + attack2;

	cout << "The Blue Men attacked for " << totalattack << endl;

	return totalattack;	
}
//BlueMen Defense
void BlueMen::defense(int damage)
{
	int defense1 = (rand()%6)+1;
	int defense2 = (rand()%6)+1;
	int defense3 = (rand()%6)+1;
	int total3def = defense1 + defense2 + defense3;
	int total2def = defense1 + defense2;
		
	int d;
	
	if(damage != 99)
	{
		if(strength > 8 && strength<= 12)
		{
			cout << "The BlueMen defend for " << total3def << "." << endl;
			d = damage - total3def - armor;
		}
		if(strength > 4 && strength <= 8)
		{
			cout << "The weakened BlueMen defend for " << total2def << "." << endl;
			d = damage - total2def - armor;
		}	
		if(strength > 0 && strength <= 4)
		{
			cout << "The greatly weakened BlueMen defense for " << defense1 << "." << endl;
			d = damage - defense1 - armor; 
		} 

	}
	
	if(d <= 0)
	{
		cout << "The BlueMen took no damage this round." << endl;
		cout << "Armor: " << armor << endl;
		cout << "Strength: " << strength << endl;
	}
	else if(damage == 99)
	{
		cout << "Medusa used Glare and turned you to stone." << endl;
		strength = 0;
	} 
	else if(d >= 1)
	{	
		strength -= d;
		cout << "The BlueMen were hit for "  << d << " damage." << endl;
		cout << "Armor: " << armor << endl;
		cout << "Strength: " << strength << endl;	

	}
}
//Are the blue men dead?
bool BlueMen::fatalBlow()
{
	if(strength <= 0)
	{
		return true;
	} 
	else
		return false;
}





//Harry Potter *************************************
//Constructor
HarryPotter::HarryPotter()
{
	armor = 0;
	strength = 10;
	name = "Harry Potter";
	isDead = false;
	special = 1;

}
//destructor
HarryPotter::~HarryPotter()
{}
//Harry Potter Attack 
int HarryPotter::attack()
{
	int attack1 = (rand()%6)+1;
	int attack2 = (rand()%6)+1;
	int totalattack = attack1 + attack2;

	cout << "Harry Potter attacked for " << totalattack << endl;
	return totalattack;
}
//Harry Potter Defense
void HarryPotter::defense(int damage)
{
	int defense1 = (rand()%6)+1;
	int defense2 = (rand()%6)+1;
	int totaldefense = defense1 + defense2;

	int d = damage - totaldefense;

	if(damage != 99)
	{
		cout << "Harry Potter defended for " << totaldefense << "." << endl;

	}
	
	if(d <= 0)
	{
		cout << "Harry Potter took no damage this round." << endl;
		cout << "Armor: " << armor << endl;
		cout << "Strength: " << strength << endl;
	}
	if(strength <= 0 && special == 1)
	{
		cout << "Harry Potter used Hogwarts and jumped to 20 strength!" << endl;
		strength = 20;
		special = 0;
		cout << "Armor: " << armor << endl;
		cout << "Strength: " << strength << endl;
	}
	else if(damage == 99 && special == 1)
	{
		cout << "Medusa used Glare turned you to stone." << endl;
		cout << "Harry Potter used Hogwarts and jumped to 20 strength!" << endl;  
		strength = 20;
		special = 0;
		cout << "Armor: " << armor << endl;
		cout << "Strength: " << strength << endl;		
	} 
	else if(damage == 99 && special == 0)
	{
		cout << "Medusa used Glare and turned you to stone." << endl;
		cout << "Dumbledore can't save you this time Harry." << endl;
		strength = 0;

	}	
	else if(d >= 1)
	{	
		strength -= d;
		cout << "Harry Potter was hit for "  << d << " damage." << endl;
		cout << "Armor: " << armor << endl;
		cout << "Strength: " << strength << endl;	

	}
}	 
//Is harry potter dead - with special? 
bool HarryPotter::fatalBlow()
{
	if(strength <= 0 && special == 1)
	{
		return false;
	}
	else if(strength <= 0 && special == 0)
	{
		return true;
	}	 
	else
	{
		return false;
	}
}	




