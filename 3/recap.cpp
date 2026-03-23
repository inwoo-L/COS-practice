#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int x;
	int y;


	cout << "Enter a first number: ";
	cin >> x;
	
	cout << "Enter a second number: ";
	cin >> y;

	while(x < y){

		if (x == y)
			cout << "two number is same" << endl;

		else if (x > y){
			return 0;
		}
		else
		{
			x += y;
			cout << "recent sum result: " << x << endl;
		}

		cout << "x: " << x << ", y: " << y << ", x>y: " << (x > y) << endl;

		cout << "Enter a second number: ";
		cin >> y;
	}

	cout << "The sencond number smaller than the first number" << endl;

	return 0;
}
