#include <iostream>
using namespace std;

class Add {
private:
	int a, b;

public:
	void set(int x, int y)
	{
		a = x;
		b = y;
	}

	void display()
	{
		cout << "a = " << a << endl;
		cout << "b = " << b << endl;
	}
};

int main()
{
	Add obj;
	obj.set(50, 60);
	obj.display();
	return 0;
}
