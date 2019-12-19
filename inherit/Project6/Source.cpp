#include <iostream>

using namespace std;

class dinosaur
{
public:

	int get_hp()
	{
		return _hp;
	}

	int get_attack()
	{
		return _attack;
	}

	int set_hp(int hp)
	{
		_hp = hp;
		return _hp;
	}

	int set_attack(int attack)
	{
		_attack = attack;
		return _attack;
	}

	virtual void show() = 0;

private:
	int _hp, _attack;

};

//public protected private
class polly :public dinosaur
{
public:
	void skill()
	{
		cout << "Polly skills"<<endl;
	}

	void show()
	{
		cout << "Grassland" << endl;
	}
private:

};

class big_polly :public polly
{
public:
	//取代 skill 取代原本的polly_skill
	void skill()
	{
		cout << "big_polly up" << endl;
	}

	//增加功能
	void treasure()
	{
		cout << "get 10 dollar" << endl;
	}

	//擴充功能
	void set_attack(int attack)
	{
		dinosaur::set_attack(attack);
		cout << "big trick" << endl;
	}
	void show()
	{
		cout << "cave" << endl;
	}

private:
	
};

void show(dinosaur &_dinosaur)
{
	_dinosaur.show();
}

int main()
{
	//抽象類別要拿掉
	/*
	dinosaur test;
	test.set_hp(100);
	cout << test.get_hp()<<endl;
	*/

	polly pop;
	pop.set_hp(50);
	cout << pop.get_hp() << endl;

	big_polly bp;
	bp.set_hp(87);
	cout << bp.get_hp() << endl;
	bp.set_attack(1000);
	cout<<bp.get_attack()<<endl;
	bp.skill();

	//compare pop.show()
	//compare bp.show()
	show(pop);
	show(bp);
	system("PAUSE");
	return 0;
}