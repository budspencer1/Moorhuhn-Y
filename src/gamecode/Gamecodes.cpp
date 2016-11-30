/*
* Project:		Moorhuhn Y
* File Name:	Gameerrors.cpp
* Date:			2016
* Author:		Sebastian <3
*
* Purpose:		define errors, warnings, infos;
*/

#include"Gamecodes.hpp"

char *__cdecl getsystime(){time_t __time__=time(0);time(&__time__);return ctime(&__time__);}

gamecodes::Error::Error(const char msg[512],int error_code)
{
	std::cerr<<"[ERROR] "<<msg<<"  Code: "<<error_code<<std::endl;
	err_count=(err_count+1);return;
}

gamecodes::Error::~Error()
{
}

gamecodes::Warning::Warning(const char msg[512],int warn_code)
{
	std::cerr<<"[WARNING] "<<msg<<"  Code: "<<warn_code<<std::endl;
	warn_count=(warn_count+1);return;
}

gamecodes::Warning::~Warning()
{
}

gamecodes::Information::Information(const char msg[512])
{
	std::cout<<"[INFORMATION] "<<msg<<std::endl;
	info_count=(info_count+1);return;
}

gamecodes::Information::~Information()
{
}
