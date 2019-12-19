#include "Cwin.h"

//回傳的型態
Cwin Cwin::compare(Cwin win)
{
	//this和 win分別代表誰
	if (this->area() >= win.area())
	{
    //return *this 的用法
		return *this;
	}
	else
	{
		return win;
	}
}

int Cwin::area(void)
{
	return width * height;
}

char Cwin::get_id(void)
{
	return id;
}