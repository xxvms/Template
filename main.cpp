#include <string>
#include <iostream>
using namespace std	;

class Part
{
private:
	int arr[2];
public:

	class TooBig
	{
	public:
		string  sr;
		TooBig()
		{}

		TooBig(string kl)
		{
			sr = kl;
		}
	};
	void init(int i)
	{
		if (i >= 2) throw TooBig("i is bigger then 2");
		arr[i] = i;
	}
};

int main(void)
{
	try
	{
		Part p1;
		p1.init(2);
	}

	catch(Part::TooBig bg)
	{cout << bg.sr  << endl	;}
	//cin.get();
	return 0;
}



/*#include <iostream>
using namespace std;

double division(int a, int b)
{
	if( b == 0 )
	{
		throw "Division by zero condition!";
	}
	return (a/b);
}

int main ()
{
	int x = 50;
	int y = 0;

	try {
		double z = division(x, y);
		cout << z << endl;
		cin.get();
	}

	catch (const char* msg) {
		cout<< msg << endl;
		cin.get();
	}
	return 0;
}*/



//#include <iostream>
//using namespace std;
//
//template <class T> // T is type so here we are passing INT
//class Part
//{
//private:
//	T a;
//
//public:
//	Part():a(0)
//	{}
//	Part(T b):a(b)
//	{}
//	void display(void)
//	{
//		cout << a << endl;
//	}
//};
//
//int main()
//{
//	int x = 2;
//	Part  <int> part(x);
//	part.display();
//
//	float f = 2.3;
//	Part  <float> part1(f);
//	part1.display();
//
//	string test{"strings works like a dream"};
//	Part  <string> part2(test);
//	part2.display();
//	cin.get();
//	return 0;
//}



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
