/*
* Project:		Moorhuhn Y
* File Name:	Functions.hpp
* Date:			2016
* Author:		Sebastian <3
*
* Purpose:		define functions for programming
*/

#ifndef FUNCTIONS 
#define FUNCTIONS 

#include"MoorhuhnY.hpp"

class Functions
{
public:
	Functions();
	virtual ~Functions();
	static inline void consoleout(const char *message){printf(message);return;}
	static inline void fatalerror(const LPCWSTR*fmt,const LPCWSTR*caption,bool __var__,...){MessageBox(NULL,*fmt,*caption,MB_OK|MB_SYSTEMMODAL);close(__var__);return;} 
	static inline void pause(bool &__variable__){switch(__variable__){case true:__variable__=false;consoleout("[INFO] -> Game is resumed\n");break;case false:__variable__=true;consoleout("[INFO] -> Game is paused\n");break;}return;}
	static inline void close(bool &__variable__){__variable__=false;return;}
	static inline void screenshot(sf::RenderWindow *renderwindow___){sf::Image latest_screenshot=renderwindow___->capture();char name__=static_cast<char>((rand()%10000000000));std::stringstream pic_ss;pic_ss<<name__;latest_screenshot.saveToFile("screenshots/screenshot_"+pic_ss.str()+".png");consoleout("Screenshot has been saved under 'screenshots/screenshot_"+name__);return;}
	static char *__cdecl __getsystime(){time_t __time__=time(0);time(&__time__);return ctime(&__time__);}
	static inline const char getplatform()
	{
		#if (defined _WIN32||defined _WIN64)
			return ((const char)"Windows");
		#elif (defined __unix||__unix__)
			return ((const char)"Unix");
		#elif (defined __APPLE__||__MACH__)
			return ((const char)"Mac OS X");
		#elif (defined __linux__)
			return ((const char)"Linux");
		#elif (defined __FreeBSD__)
			return ((const char)"FreeBSD");
		#elif 
			return ((const char)"Unknown Operating System");
		#endif
	}
	static const char getarch()
	{
		#if (defined _WIN32||defined _WIN64)
		#if (defined _WIN64)
			return ((const char)"x64");
		#elif (defined _WIN32)
			return ((const char)"x32");
		#elif 
			return ((const char)"x??");
		#endif
		#endif
	}

private:;
};

#endif 