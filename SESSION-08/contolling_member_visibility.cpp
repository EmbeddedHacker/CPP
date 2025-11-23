#include<iostream>

struct MassAndDistance_1
{
	double m1;
	double m2;
	double r;
};

class MassAndDistance_2
{
	double m1;
	double m2;
	double r;
};

int main(void)
{
	using std::cout;
	using std::endl;

	struct MassAndDistance_1 X1;
	MassAndDistance_2 X2;

	X1.m1 = 1.1;
	X1.m2 = 2.2;
	X1.r = 3.3;

	X2.m1 = 1.1;
	X2.m2 = 2.2;
	X2.r = 3.3;

	return 0;
}


