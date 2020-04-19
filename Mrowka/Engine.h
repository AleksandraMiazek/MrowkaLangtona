#include "Kom.h"
#include <iostream>
class Engine
{
protected:								//protected dostêpne dla dziedziców
	Kom **Plansza;
	Kom ** Temp;						//tablica pomocnicza
	int x, y;
	int PozX, PozY;						//aktualna pozycja mrówki
		//std::pair <int, int> Poz;

	enum Kierunek {						//enumerator przechowuje informacje w którym kierunku
		prawo,							//poruszy³a siê mrówka
		lewo,
		gora,
		dol
	};
	Kierunek m_kierunek;


	Engine();							//konstr. bezparametrowy ustawia planszê na 120
	Engine(int i, int j);				//konstr. parametrowy	
	Engine(const Engine&copy);			//konstr. kopiuj¹cy	
	virtual ~Engine();					//destruktor
	
	//FUNKCJE
	void Analiza();					
										
	void Uruchom();						//ustawiam pocz¹tkow¹ pozycjê mrówki
	void SetKierunek(Kierunek kierunek);
	//virtual void View()=0;


};

