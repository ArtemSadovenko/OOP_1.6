#pragma once
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Bus
{
	int am_pas;

	class Car
	{
		string mark;
		int am_cil;
		double power;
	public:
		void set_mark(string a) { mark = a; }
		void set_am_cil(int a) { am_cil = a; }
		void set_power(double a) { power = a; }

		string get_mark() { return mark; }
		int get_am_cil() { return am_cil; }
		double get_power() { return power; }

		void init(string mark, int am_cil, double power);

		string toString();
		void read();
		void display();
	};

	Car car;
public:
	void set_am_pas(int a) { am_pas = a; }
	int get_am_pas() { return am_pas; }
	void set_mark(string a) { car.set_mark(a); }
	string get_mark() { return car.get_mark(); }

	void init(int am_pas, Car car);

	string toString();
	void read();
	void display();
};

