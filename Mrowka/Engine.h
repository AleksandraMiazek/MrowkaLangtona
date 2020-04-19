#include "Kom.h"
#include <iostream>
class Engine
{
protected:								//protected dost�pne dla dziedzic�w
	Kom **Plansza;
	Kom ** Temp;						//tablica pomocnicza
	int x, y;
	int PozX, PozY;						//aktualna pozycja mr�wki
		//std::pair <int, int> Poz;

	enum Kierunek {						//enumerator przechowuje informacje w kt�rym kierunku
		prawo,							//poruszy�a si� mr�wka
		lewo,
		gora,
		dol
	};
	Kierunek m_kierunek;


	Engine();							//konstr. bezparametrowy ustawia plansz� na 120
	Engine(int i, int j);				//konstr. parametrowy	
	Engine(const Engine&copy);			//konstr. kopiuj�cy	
	virtual ~Engine();					//destruktor
	
	//FUNKCJE
	void Analiza();					
										
	void Uruchom();						//ustawiam pocz�tkow� pozycj� mr�wki
	void SetKierunek(Kierunek kierunek);
	//virtual void View()=0;


};

