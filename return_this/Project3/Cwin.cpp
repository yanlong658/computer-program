#include "Cwin.h"

//�^�Ǫ����A
Cwin Cwin::compare(Cwin win)
{
	//this�M win���O�N���
	if (this->area() >= win.area())
	{
    //return *this ���Ϊk
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