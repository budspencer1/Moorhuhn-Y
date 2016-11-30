/*
* Project:		Moorhuhn Y
* File Name:	MoorhuhnY.hpp
* Date:			2016
* Author:		Sebastian <3
*
* Purpose:		all includes and constants + some type definitions
*/

#pragma once
#pragma warning(disable:4996)

#ifndef HEADER_INCLUDES___
#define HEADER_INCLUDES___

#if (!defined HEIGHT && !defined WIDTH && !defined BIT)
	#define HEIGHT 900
	#define WIDTH 1400
	#define BIT 32
#endif

#include<iostream>
#include<Windows.h>
#include<sstream>
#include<fstream>
#include<SFML\Audio.hpp>
#include<SFML\Config.hpp>
#include<SFML\Graphics.hpp>
#include<SFML\Network.hpp>
#include<SFML\OpenGL.hpp>
#include<SFML\System.hpp>
#include<SFML\Window.hpp>
#include<time.h>
#include<io.h>
#include<ddstream.h>
#include<list>
#include<map>
#include<stdarg.h>

typedef int INTEGER;
typedef bool BOOLEAN_;
typedef float FLOAT;
typedef double DOUBLE;
typedef long double BIGDOUBLE;
typedef long int BIGINT;
typedef signed int SIGNEDINT;
typedef unsigned int UNSIGNEDINT;
typedef unsigned long int POSITIVEINT;

#endif