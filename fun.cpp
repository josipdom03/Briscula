#include"Header.h"







void igra::mijesanje()
{
	for (int i = 0; i < 40; i++)
	{
		int swap= rand() % 40;
		card temp = spil[i];
		spil[i] = spil[swap];
		spil[swap] = temp;
	}
	
}



void igra::pocetak()
{
	int i;
	cout << "zelis li predizati karte" << endl <<"\n\t1.Da \t 2.Ne"<<endl;
	cin >> i;
	if (i == 1) {
		predizanje();
		punruk1();

	}
	else punruk2();

	system("cls");
	
}


void igra::predizanje()
{
	int j = 20;
	for (int i = 0; i < 20; i++)
	{
		card temp = spil[i];
		spil[i] = spil[j];
		spil[j] = temp;
		j++;
	}
}



void igra::punruk1()
{

	int j = 0;
	for (int i = 0; i < 3;i++)
	{
		
		r1[i] = spil[j];
		j++;
		
		r2[i] = spil[j];
		j++;
	}
	
}

void igra::punruk2()
{
	int j = 0;
	for (int i = 0; i < 3; i++)
	{
		r1[i] = spil[j]; 
		j++;
	}
	for (int i = 0; i < 3; i++)
	{
		r2[i] = spil[j];
		j++;
	}
}

void igra::ruka1()
{
	cout << "\t";
	for (int i = 0; i < 3; i++)
	{
		cout << i+1 << "." << r1[i].broj << " " << r1[i].zog  << "\t\t";
	}
	cout << endl;
}


void igra::ruka2()
{
	for (int i = 0; i < 3; i++)
	{
		cout << i + 1 << ".   " << r2[i].broj << " " << r2[i].zog  << "\t";
	}
	cout << endl;
}


card igra::zog() 
{
	card zadnja = spil[6];
	spil[6] = spil[39];
	spil[39] = zadnja;
	
	return spil[39];
		
	
}
bool igra::vise1(card a, card b, card z,int igrac)
{
	if (a.zog == z.zog && b.zog == z.zog)
	{
		if (a.snaga > b.snaga)
			return true;
		return false;

	}
	if (a.zog == z.zog && b.zog != z.zog)
	{

		return true;

	}
	if (a.zog != z.zog && b.zog == z.zog)
	{
		return false;
	}
	if (a.zog != z.zog && b.zog != z.zog && igrac==0)
	{
		if (a.zog == b.zog)
		{
			if (a.snaga > b.snaga)
				return true;
			return false;
		}
		if (a.zog != b.zog)
			return true;
		return false;

	}
	if (a.zog != z.zog && b.zog != z.zog && igrac == 1)
	{
		if (a.zog == b.zog)
		{
			if (a.snaga > b.snaga)
				return true;
			return false;
		}
		if (a.zog != b.zog)
			return false;
		return true;

	}
	return false;
}



card igra::bacanje()
{
	int p=0;
	card v;
	cout <<endl<<endl << "Odaberi kartu koju ces baciti:     "<<endl<<endl;
	ruka1();
	int x = 0;
	cout << endl;
	while ( x==0)
	{
		cin >> p;
		p = p - 1;
		if (p == 0 || p == 1 || p == 2)
			x = 1;
	}
	
	
	
	v = r1[p];
	del(r1, r1[p]);
	return v;
}


card igra::bacanjeran()
{
	while (1)
	{
		srand(time(NULL));

		int p = rand() % 3;
		card v;
		v = r2[p];

		if (v.snaga!=0)
		{
			del(r2, r2[p]);

			return v;
		}
	}
	

}


void del(card* niz, card e)
{
	int i = 0;
	while (i<3)
	{
		if (e.broj == niz[i].broj && e.zog == niz[i].zog)
		{
			niz[i].broj.erase();
			niz[i].punti = 0;

			niz[i].snaga = 0;
			niz[i].zog.erase();
			

			
		}
		i++ ;
	}
}