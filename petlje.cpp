#include"Header.h"


int igra::petlja()
{


	int p = 5;
	int igrac = 0;
	card z = zog();
	int b = 0;

	for (int i = 0; i < 17; i++)
	{
		card k1, k2;

		cout << "Igrac 1:" << rez1 << endl;
		cout << "Igrac 2:" << rez2 << endl<<endl<<endl;
		
		cout <<"\t\t\t\t\t\t\t" << "zadnja karta:  " << spil[39].broj << "  "<< spil[39].zog  << endl;
		if (igrac == 0)
		{
			k1 = bacanje();
			cout << "Igrac 1:" << endl <<"\t\t\t\t" << k1.zog << "  " << k1.broj << "  " << endl;

			k2 = bacanjeran();
			cout << "Igrac 2:" << endl <<"\t\t\t\t"<< k2.zog << "  " << k2.broj << endl;

			b = 0;
		}
		else
		{
			k2 = bacanjeran();
			cout << "Igrac 2:" << endl << k2.zog << "  " << k2.broj << endl;

			k1 = bacanje();
			cout << "Igrac 1:" << endl << k1.zog << "  " << k1.broj << endl;
			b = 1;
		}
		if (vise1(k1, k2, z,b))
		{

			rez1 = rez1 + k1.punti + k2.punti;
		

			igrac = 0;
			cout <<endl <<endl <<endl << "Vasa pobijeda" << endl;

			//izvlacenej karte
			for (int j = 0; j < 3; j++)
			{
				if (r1[j].snaga == 0)
				{
					p++;
					r1[j] = spil[p];
					


					for (int k = 0; k < 3; k++)
					{
						if (r2[k].snaga == 0)
						{
							p++;
							r2[k] = spil[p];
							
						}
					}
				}

			}
		}
		else
		{
			cout << endl << endl << endl << "pobijeda protivnika" << endl;

			rez2 = rez2 + k2.punti + k1.punti;
			
			igrac = 1;

			//izvlacenej nove karte

			for (int j = 0; j < 3; j++)
			{
				if (r2[j].snaga == 0)
				{
					p++;
					r2[j] = spil[p];

					for (int k = 0; k < 3; k++)
					{
						if (r1[k].snaga == 0)
						{
							p++;
							r1[k] = spil[p];
							
						}
					}
				}

			}

			//kad protivnik izvuèe kartu igraè moe izvlaèiti
		}

		Sleep(1500);
		

		system("cls");



	}




	cout << "nema karata u spilu" << endl << endl << endl;



	for (int i = 0; i < 3; i++)
	{


		cout << "Igrac 1:" << rez1 << endl;
		cout << "Igrac 2:" << rez2 << endl << endl << endl;


		card k1, k2;

		if (igrac == 0)
		{
			int x = 1;
			while (x)
			{
			
				k1 = bacanje();
				if (k1.snaga != 0)
					x = 0;
			}
			cout << " 1:" << endl << k1.zog << "  " << k1.broj << endl;
			
			k2 = bacanjeran();
			cout << " 2:" << endl << k2.zog << "  " << k2.broj << endl;
			b = 0;
		}
		else
		{
			

			k2 = bacanjeran();
			cout << " 2:" << endl << k2.zog << "  " << k2.broj << endl;
			int x = 1;
			while (x)
			{
				k1 = bacanje();
				if (k1.snaga != 0)
					x = 0;
			}
			
			cout << " 1:" << endl << k1.zog << "  " << k1.broj << endl;
			b = 1;
		}
		if (vise1(k1, k2, z,b))
		{

			cout << endl << endl << endl << "Vasa pobijeda" << endl;
			rez1 = rez1 + k1.punti + k2.punti;
			igrac = 0;

		}
		else
		{
			cout << endl << endl << endl << "Pobijeda protivnika" << endl;
			rez2 = rez2 + k2.punti + k1.punti;
			igrac = 1;
		}

		Sleep(1500);

		system("cls");
	}







	cout << "Igrac 1:" << rez1 << endl;
	cout << "Igrac 2:" << rez2 << endl;




	if (rez1 > rez2)
	{
		return 1;

	}
	else return 0;
}