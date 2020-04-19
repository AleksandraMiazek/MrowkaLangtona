
#include "Gra.h"


Gra::Gra()
{
}

Gra::Gra(int nw, int nk) : Engine(nw, nk)
{
}


Gra::~Gra()
{
}

void Gra::Start()
{
	View();
	Uruchom();
	while (true)
	{	
		//system("CLS");
		
		View();
		Analiza();
	}
}
