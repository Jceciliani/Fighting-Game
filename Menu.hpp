/*Program Name: Project 3
 * Author: Josh Ceciliani
 * Date: November 5, 2017 
 * Description: This program is the menu and has the fight function for the Fantasy Combat Game. 
 * */
#include<iostream>
#ifndef MENU_HPP
#define MENU_HPP

#include "Character.hpp"

class Menu
{
	private:
		Character* char1;
		Character* char2;
	public:
		~Menu();
		int Menus();
		void fight(); 
	
};
#endif








