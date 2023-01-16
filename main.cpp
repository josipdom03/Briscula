#include"Header.h"



int main()
{
	cout << "			Dobrodosa u Igru\n\n\n\t\t\tBriscula\n\n\t";


	int ukrez1 = 0,ukrez2=0;
	int x = 1;
	while (x) {
		srand(time(NULL));
		igra ig;


		ig.punjenje();

		int uk = 0;


		ig.mijesanje();
		ig.pocetak();




		uk = ig.petlja();
		if (uk)
		{
			ukrez1++;
			cout << endl << endl << endl << "\t\tcestitam pobijedio si" << endl << endl << endl;
		}
		else
		{
			ukrez2++;
			cout << endl << endl << endl << " \t\tizgubio si " << endl << endl << endl;
		}
		system("cls");

		cout << "ukupni rezultat:" << endl<<endl<<endl<<"Igrac 1:\t"<<ukrez1<<endl<<"Igrac 2:\t"<<ukrez2;
		cout <<endl<<endl<<endl<< "zelis li nastaviti igru"<<endl<<endl<<"\t\t1.Da\t\t2.Ne"<<endl<<endl;

		int y = 1;
		while (y)
		{

			cin >> x;
			if (x - 1 == 0)
			{
				y = 0;
				x = 1;
			}
			if (x - 1 == 1)
			{
				y = 0;
				x = 0;
				break;
			}
		}

	}
}