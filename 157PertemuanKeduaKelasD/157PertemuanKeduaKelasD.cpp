#include <iostream>
using namespace std;

int main()
{
	int bilangan;        //karena ini bilangan bulat makanta makenya int
	srand(time(0));

	bilangan = rand() % 10;

	cout << "Bilangan awal = " << bilangan << endl;

	if (bilangan >= 5) {    //itu adalh namanya operator >=
		bilangan = 2 * bilangan;

	}
	cout << "Bilangan akhir = " << bilangan << endl;
	return 0;

}