#include <iostream>
using namespace std;

template <class T> // T is type so here we are passing INT
class Part
{
private:
	T a;

public:
	Part():a(0)
	{}
	Part(T b):a(b)
	{}
	void display(void)
	{
		cout << a << endl;
	}
};

int main()
{
	int x = 2;
	Part  <int> part(x);
	part.display();

	float f = 2.3;
	Part  <float> part1(f);
	part1.display();

	string test{"strings works like a dream"};
	Part  <string> part2(test);
	part2.display();
	cin.get();
	return 0;
}



/*#include <iostream>
using namespace std;

template <class T>

void display(T n)
{
	cout << n << endl		;
}

int main()
{
	int i = 3			;
	long l = 4L			;
	float f = 6.4F		;
	double d = 6.5		;
	string string1 = "dupa";

	display(i)			;
	display(l)			;
	display(f)			;
	display(d)			;
	display(string1);
	cin.get();
	return 0			;
}*/
