#include <iostream>
#include "Bus.h"

using namespace std;

int main() {
	Bus a;
	a.read();
	a.display();

	a.set_mark("volvo");
	a.set_am_pas(21);
	a.display();

	return 0;
}