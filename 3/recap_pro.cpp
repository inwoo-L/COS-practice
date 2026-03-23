#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int a, b, sum, num;

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	if (a >= b)
	{
		cerr << "Error! The second argument must be bigger than the first argument" << endl;
		return 1;
	}

	sum = 0;
	for (num = a; num <= b; num ++)
		sum += num;

	cout <<"Sum: " << sum << endl;

	return 0;

}

