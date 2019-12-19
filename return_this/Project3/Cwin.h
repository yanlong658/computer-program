#pragma once
#ifndef Cwin_H //去執行底下程式一次,去確認底有的程式(貼標籤意思)
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