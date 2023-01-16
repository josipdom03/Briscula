#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<cstdlib>
#include <conio.h>
#include<windows.h>


using namespace std;


class card
{

public:
	int punti;
	string broj;
	string zog;
	int snaga;

};


class igra
{
private:
	int rez1 = 0, rez2 = 0;
	int igrac = 0;
	card spil[40];
	card r1[3], r2[3];

public:
	//nizovi
	

	//funkcije


	void punjenje();
	void mijesanje();
	void pocetak();
	void predizanje();
	void ruka1();
	void ruka2();
	void punruk1();
	void punruk2();
	bool vise1(card a, card b, card z, int igrac);

	card zog();
	card bacanje();
	card bacanjeran();


	int petlja();

};



void del(card* niz, card e);




