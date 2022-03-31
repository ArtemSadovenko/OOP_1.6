#include "Bus.h"

void Bus::init(int am_pas, Car car)
{
	this->car = car;
	this->am_pas = am_pas;
}

string Bus::toString()
{
	stringstream sout;
	sout << car.toString() << "amount of passangers = " << am_pas << endl;
	return sout.str();
}

void Bus::read()
{
	int am_pas;
	car.read();
	cout << "Amount of passengers = "; cin >> am_pas;
	init(am_pas, car);

}

void Bus::display()
{
	cout << toString();
}

void Bus::Car::init(string mark, int am_cil, double power)
{
	this->mark = mark;
	this->am_cil = am_cil;
	this->power = power;
}

string Bus::Car::toString()
{
	stringstream sout;
	sout << "mark = " << mark << endl <<
		"amount of cilinder = " << am_cil << endl <<
		"power = " << power << endl;
	return sout.str();
}

void Bus::Car::read()
{
	string mark;
	int am_cil;
	double power;
	cout << "mark = "; cin >> mark;
	cout << "amount of cilinder = "; cin >> am_cil;
	cout << "power = "; cin >> power;
	init(mark, am_cil, power);
}

void Bus::Car::display()
{
	cout << toString();
}
