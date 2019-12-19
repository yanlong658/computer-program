#include <iostream>
#include "Cwin.h"

using namespace std;

int main()
{
	Cwin win1('A',70,80);
	Cwin win2('B', 60, 90);

	cout << "window" << (win1.compare(win2)).get_id()<<endl;

	system("PAUSE");
	return 0;
}