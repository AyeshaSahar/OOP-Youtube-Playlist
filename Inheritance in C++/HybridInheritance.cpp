#include <iostream>
using namespace std;

// base class
class Cat {
public:
	Cat() { cout << "This is a Cat\n"; }
};

// base class
class Sound {
public:
	Sound() { cout << "Cat says meow meow\n"; }
};

// first sub class
class MaineCoon : public Cat {
};

// second sub class
class Persian : public Cat, public Sound {
};

int main()
{
	// Creating object of sub class will invoke the constructor of base class.
	Persian obj2;
	return 0;
}
