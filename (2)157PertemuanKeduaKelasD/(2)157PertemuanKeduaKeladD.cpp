#include <iostream> //nama asdosnya adalah mass adri
using namespace std;

int main()
{
	int nBilangan;
	string status; //variabel status 

	srand(time(0));

	nBilangan = rand() % 6;

	if (nBilangan % 2 == 0) {
		status = "Genap";

	}
	else {
		status = "Ganjil";
	}

	cout << "Bilangan akhir = " << nBilangan << endl;
	cout << "Bilanganya adalah = " << status << endl;






}