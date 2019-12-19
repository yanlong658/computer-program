#include <iostream>
#include <cmath>

using namespace std;

//typedef struct的結合
struct data{
	int edg[3];
};

typedef struct data tri_data;

class test
{
private:
	double edg[3];

public:
	bool istri();
	double area();
	double perimeter();
	//矩陣的傳入方式,以及注意他傳入型態
	void set(tri_data *);
};

int main()
{
	
	tri_data data1 = {3,4,5};
	test tri;
	tri.set(&data1);
	cout<<tri.perimeter()<<endl;
	cout << tri.area();
	system("PAUSE");
	return 0;
}

bool test::istri()
{
	//this-> 要使用class內部宣告的東西
	if ((this->edg[0] + this->edg[1]) > (this->edg[2]) && (this->edg[1] + this->edg[2]) && (this->edg[0]) && (this->edg[2] + this->edg[0]) > (this->edg[1]))
		return true;
	else
	{
		cout << "error" << endl;
		return false;
	}
}

double test::area()
{
	if (this->istri() == true)
	{
		double s, A;
		s = this->perimeter()/2;
		A = sqrt(s*(s - this->edg[0])*(s - this->edg[1])*(s - this->edg[2]));
		return  A;
	}		
}

double test::perimeter()
{
	return (this->edg[0] + this->edg[1] + this->edg[2]);
}

void test::set(tri_data * data1)
{
	this->edg[0] = data1->edg[0];
	this->edg[1] = data1->edg[1];
	this->edg[2] = data1->edg[2];
}
