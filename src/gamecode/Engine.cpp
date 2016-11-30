/*
* Project:		Moorhuhn Y
* File Name:	Engine.cpp
* Date:			2016
* Author:		Sebastian <3
*
* Purpose:		main routines
*/

#pragma once

#include"Engine.hpp"
#include"VersionControl.inc"

static const unsigned int height=HEIGHT,width=WIDTH,bit=BIT;

Engine::Engine()
{
	Mathematic_Lib=new Mathematic::Mathematics(); // initzialize mathematics
#if (defined _WIN32||defined _WIN64) // only if compiled under windows
	gamecodes::Information("-> Game has started! [Version: "___VERSION___"]");
	gamecodes::Information("-> Author(s): Sebastian <3");
	gamecodes::Information("-> Successfully loaded SFML 2.1!");
	gamecodes::Information("-> Successfully loaded Mathematics!\n");
	Functions::consoleout("________________________________________________________________________________\n\n\n");
#endif
	isRunning=true;isPaused=false;
	renderwindow=new RenderWindow(VideoMode(width,height,bit),("Moorhuhn Y"),Style::Titlebar|Style::Close);renderwindow->setVerticalSyncEnabled(true);
	backgrounds=new Sprite();backgroundt=new Texture();backgroundt->loadFromFile(string("media/textures/background_level1.png"));backgrounds->setTexture(*backgroundt);backgrounds->setOrigin(Vector2f((float)backgroundt->getSize().x/2,(float)backgroundt->getSize().y/2));backgrounds->setPosition(Vector2f((float)width/2,(float)height/2));
	mainevent=new Event;
	fpsclock=new Clock,clock=new Clock,clock->restart(),fpsclock->restart();
}

Engine::~Engine()
{
	delete renderwindow;delete mainevent;delete fpsclock;delete clock;
	renderwindow=nullptr;fpsclock=nullptr;clock=nullptr;mainevent=nullptr;
}

void Engine::start()
{
	while(isRunning)
		if(!isPaused)
			getframetime(),getfps(),update(frametime),handle(),render(),quit();
		else 
			getframetime(),getfps(),update(frametime),handle(),render(),quit();
}

void Engine::quit()
{
	if(!isRunning)
		renderwindow->close();
}

void Engine::update(float frametime)
{
}

void Engine::handle()
{
	while(renderwindow->pollEvent(*mainevent))
		if(mainevent->type==Event::Closed)
			isRunning=false;
} 

void Engine::render()
{
	renderwindow->clear(Color::White);
	renderwindow->draw(*backgrounds);
	renderwindow->display();
}

float Engine::getframetime()
{
	float frametime=clock->restart().asSeconds();return frametime;
}

signed int Engine::getfps()
{
	float _fps=(1/(fpsclock->restart().asSeconds())); // calculate fps
	//cout<<_fps<<endl;
	int fps_=static_cast<int>(_fps);return fps_;
}
