/*Program Name: Project 3
 * Author: Josh Ceciliani
 * Date: November 5, 2017 
 * Description: This is character base class and all of the derived classes of character. This holds all of info for all of the characters in the Fantasy Combat Game.
 * */
#include<iostream>

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>

class Character
{
	protected:
		int armor;
		int strength;
		std::string name;
		bool isDead;
		int special;
	public:
		Character();
		~Character();
		virtual int attack() = 0;
		virtual void defense(int) = 0; 
		virtual bool fatalBlow() = 0;  
		int getArmor() {return armor;}
		int getStrength() {return strength;}
		virtual std::string getName() {return "";} 
		 	 	
};
#endif

class Barbarian: public Character
{
	private:
		int armor;
		int strength;
		std::string name;
		bool isDead;
		int special;
	public:
		Barbarian();
		~Barbarian();
		int attack();
		void defense(int);
		bool fatalBlow();
		int getArmor() {return armor;}
		int getStength() {return strength;} 
		std::string getName() {return name;}
};

class Vampire: public Character
{
	private:
		int armor;
		int strength;
		std::string name;
		bool isDead;
		int special;
	public:
		Vampire();
		~Vampire();	
		int attack();
		void defense(int);
		bool fatalBlow();
		int getArmor() {return armor;}
		int getStrength() {return strength;}
		std::string getName() {return name;} 

};


class Medusa: public Character
{
	private:
		int armor;
		int strength;
		std::string name;
		bool isDead;
		int special;
	public:
		Medusa();
		~Medusa();	
		int attack();
		void defense(int);
		bool fatalBlow();
		int getArmor() {return armor;}
		int getStrength() {return strength;}
		std::string getName() {return name;} 

};


class BlueMen: public Character
{
	private:
		int armor;
		int strength;
		std::string name;
		bool isDead;
		int special;
	public:
		BlueMen();
		~BlueMen();	
		int attack();
		void defense(int);
		bool fatalBlow();
		int getArmor() {return armor;}
		int getStrength() {return strength;}
		std::string getName() {return name;} 

};


class HarryPotter: public Character
{
	private:
		int armor;
		int strength;
		std::string name;
		bool isDead;
		int special;
	public:
		HarryPotter();
		~HarryPotter();	
		int attack();
		void defense(int);
		bool fatalBlow();
		int getArmor() {return armor;}
		int getStrength() {return strength;}
		std::string getName() {return name;} 

};


