#pragma once
#ifndef Cwin_H //�h���橳�U�{���@��,�h�T�{�������{��(�K���ҷN��)
#define Cwin_H

class Cwin
{
public:
	Cwin(char i, int w, int h) :id(i), width(w), height(h)
	{

	}
	Cwin compare(Cwin win);
	char get_id(void);
	int area(void);

private:
	char id;
	int width, height;
};

#endif // !1