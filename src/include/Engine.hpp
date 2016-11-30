/*
* Project:		Moorhuhn Y
* File Name:	Engine.hpp
* Date:			2016
* Author:		Sebastian <3
* 
* Purpose:		main routines
*/

#ifndef ENGINE___
#define ENGINE___

#include"MoorhuhnY.hpp"
#include"Gamecodes.hpp"
#include"Functions.hpp"
#include"VersionControl.inc"
#include"Mathematics.hpp"

using namespace Mathematic;
using namespace std;
using namespace sf;

class Engine
{
public:
	Engine();
	~Engine();
	bool isRunning;bool isPaused;
	void update(float frametime); void handle(); void render();
	float getframetime(); signed int getfps(); 
	void start(); void quit();
private:
	Mathematics *Mathematic_Lib;
	RenderWindow *renderwindow; Clock *clock; Clock *fpsclock; Event *mainevent;
	Sprite *backgrounds;Texture *backgroundt;
	float frametime,fps;
	void setbackground(sf::Texture *tex);
};

#endif