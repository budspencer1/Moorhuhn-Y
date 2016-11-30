/*
* Project:		Moorhuhn Y
* File Name:	Gameerrors.hpp
* Date:			2016 
* Author:		Sebastian <3
*
* Purpose:		error codes classes
*/


#ifndef GAMECODES_HPP_
#define GAMECODES_HPP_

#include"MoorhuhnY.hpp"

namespace gamecodes {

class Error sealed
{
public:
	Error(const char msg[512],int error_code);
	virtual ~Error();
	const unsigned int geterrcount(){return err_count;};
	void setcount(unsigned int count_){err_count=count_;};
private:
	unsigned int err_count;
};

class Warning sealed
{
public:
	Warning(const char msg[512],int warn_code);
	virtual ~Warning();
	const unsigned int getwarncount(){return warn_count;};
	void setcount(unsigned int _count_){warn_count=_count_;};
private:
	unsigned int warn_count;
};

class Information sealed
{
public:
	Information(const char msg[512]);
	virtual ~Information();
	const unsigned int getinfocount(){return info_count;};
	void setcount(unsigned int ___count___){info_count=___count___;};
private:
	unsigned int info_count;
};
}
#endif