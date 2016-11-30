/*
* Project:		Moorhuhn Y
* File Name:	ProgramStartup.cpp
* Date:			2016
* Author:		Sebastian <3
*
* Purpose:		start game 
*/

#include"Engine.hpp"
#include"MoorhuhnY.hpp"

static char *__cdecl __getsystime(){time_t __time__=time(0);time(&__time__);return ctime(&__time__);}

int main()
{
	system("Color 0C");
	std::cout << "********************************************************************************Welcome to Moorhuhn Y // Started at:   "<<__getsystime()<<"********************************************************************************"<<std::endl;
	Engine game;
	game.start();
}