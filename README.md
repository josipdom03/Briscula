# Briscula
Kartaška igra Briškula


Dobrodosao u igru:

						        *  *
				        		 **
		****   ****  *  ****  *   *    *    *  *           *
		*   *  *  *  *  *     *  *     *    *  *          * *
		*   *  *  *  *  *     * *      *    *  *         *   *
		*****  ****  *  ****  * *      *    *  *        * * * *   
		*   *  * *   *     *  *  *     *    *  *	   *       *
		*   *  *  *  *     *  *   *    *    *  *	  *         *
		****   *   * *  ****  *    *   ******  ***** *			 *


Igra je jednostavna konzolna simulacija kartaške igre briškula koja je popularna
na području Dalmacije i Italije.


Igrica je napravljena u jeziku C++ kao projektni rad za kolegij Objektno programiranje na 
Sveučilišnom odjelu za stručne studije Sveučilišta u Splitu.

Pravila:

	Postoje 4 zoga:
		1.Kupe
		2.špade
		3.dinare
		4.baštone

	Svaki zog se sastoji od 10 karata koje su poredane po snazi:
			
				karta:						Punti:
				1.As						11
				2.3 - trica					10
				3.kralj						4
				4.konj						3
				5.fanat						2
				6.7							0
				7.6							0
				8.5							0
				9.4							0
				10.2						0

	Uvijek ima prednost karta iz zog koji je predmet igre i karta koja je prije bačena ako nije glavni zog ni jedna od 
	bačenih karata.



	Na početku igrač može birati želi li predizati karte, ako želi prva polovica špila se prebacije na 
	kraj.

	Nakon predizanja karte se dijele na dva nčaina:

			1.ako se prediže - dijeli se jedna  karta igraču 1 jedna igraču 2 
			2.ako se ne prediže tri karte igraču 1 i 3 karte igraču 2

	Svaki igrač ima po 3 karte u ruci.


	Zadnja karta u špilu označava zog koji je predmet igre.
	Ona je prikazana dok ima karata u šplu a kad nestane ona se više ne prikazuje.

	Ukupan rezultat koji je zbroj svih punata je 120.

	Pobjedink je onaj igrač koji ima zbroj punata veći od 60.


Licenca: 

	Ova igra nema licencu jer je ovo narodna kartaška
	igra koja je prisutna na području Dalmacije i Italije.



Instalacija:

	Za instalaciju igre potrebno je imati instaliran program Visuala Studio.

	U aplikaciji je potrebno pokrenuti novi projekt.

	Kada se novi projekt učita desnim klikom na Source Files ->Add->  Existing Item
			
		Otvara se program u kojem odabirete sljedeće datoteke:

				1.fun.cpp
				2.karte.cpp
				3.petlje.cpp
				4.main.cpp

	Također je potrebno dodati i Header datoteku koja se dodaje 
			
			Header Files ->Add->  Existing Item gdje se odabire:

				1.Header.h

	Datoteke se nalaze u instalacijskoj datoteci briscula.zip.
	Potrebno je samo izvući datoteke iz zip mape u željenu mapu.

	Nakon učitavanja svih datoteka dovoljno je pritisnuti Control + F5 za pokretanje bez Debugera ili F5
	za pokretanje s Debugerom.




Moguća poboljšanja igre:

		1. Dodavanje grafičkog sučelja koje je bolje i pristupačnije od konzole
		2. Mogućnost igre s više igrača putem interneta.
	
