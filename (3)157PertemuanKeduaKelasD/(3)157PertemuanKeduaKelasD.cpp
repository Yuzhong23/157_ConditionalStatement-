#include<iostream>
using namespace std;

int main()
{
	int nBilanganA, nBilanganB;
	
	string status;
	srand(time(0));

	nBilanganA = rand() % 10;
	nBilanganB = rand() % 10;
 
	if (nBilanganA == nBilanganB) {
		status = "Nilai Sama Besar";

	}


	else if (nBilanganA > nBilanganB)
	{
		status = "nilai A lebih besar dari nilai B";

	}
	else {
		status = "nilai A lebih kecil dari nilai B";
	}

	cout << "Bilangan A = " << nBilanganA << endl;
	cout << "Bilangan B = " << nBilanganA << endl;
	cout << "status = " << status << endl;
	return (0);


 
}