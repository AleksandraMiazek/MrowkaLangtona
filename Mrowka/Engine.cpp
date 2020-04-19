#include "Engine.h"
#include <fstream>


Engine::Engine()
{
	x = 120;
	y = 120;
	PozX = x / 2;
	PozY = y / 2;
	Plansza = new Kom*[x];
	Temp = new Kom*[x];
	for (int i = 0; i < x; i++)
	{
		Plansza[i] = new Kom[y];
		Temp[i] = new Kom[y];
	}
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			Plansza[i][j] = 0; //wszystkie komórki s¹ nie odwiedzone
			Temp[i][j] = false;
		}
	}
}

Engine::Engine(int X, int Y)
{
	x = X;
	y = Y;
	PozX = x / 2;
	PozY = y / 2;
	Plansza = new Kom*[x];
	Temp = new Kom*[x];
	for (int i = 0; i < x; i++)
	{
		Plansza[i] = new Kom[y];
		Temp[i] = new Kom[y];
	}
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			Plansza[i][j] = false; //wszystkie komórki s¹ nie odwiedzone
			Temp[i][j] = false; 
		}
	}
}
Engine::Engine(const Engine & copy)
{
	x = copy.x;
	y = copy.y;
	Plansza = new Kom*[x];
	for (int i = 0; i < x; i++)
	{
		Plansza[i] = new Kom[y];
		for (int j = 0; j < y; j++)
		{
			Plansza[i][j] = copy.Plansza[i][j];
		}
	}

}
Engine::~Engine()
{
	for (int i = 0; i < x; i++)
	{
		delete[]Plansza[i];
		delete[]Temp[i];
	}
	delete[]Plansza;
	delete[]Temp;
}

void Engine::Analiza()
{
	if (PozY > y - 1)
	{
		PozY = 0;
	}
	if (PozX > x - 1)
	{
		PozX = 0;
	}
	if (PozX < 0)
	{
		PozX = x - 1;
	}
	if (PozY < 0)
	{
		PozY = y - 1;
	}
	if (m_kierunek == Engine::Kierunek::gora)
	{
		if (Plansza[PozX][PozY].stan == true)
		{
			Plansza[PozX][PozY].stan = !Plansza[PozX][PozY].stan; //zmiana wartoœci pola stan na przeciwne 
			m_kierunek = Engine::Kierunek::prawo;
			PozX = PozX + 1;
		}
		else if (Plansza[PozX][PozY].stan == false)
		{
			Plansza[PozX][PozY].stan = !Plansza[PozX][PozY].stan; //zmiana wartoœci pola stan na przeciwne 
			m_kierunek = Engine::Kierunek::lewo;
			PozX = PozX - 1;
		}
	}
	else if (m_kierunek == Engine::Kierunek::dol)
	{
		if (Plansza[PozX][PozY].stan == true)
		{
			Plansza[PozX][PozY].stan = !Plansza[PozX][PozY].stan; //zmiana wartoœci pola stan na przeciwne 
			m_kierunek = Engine::Kierunek::lewo;
			PozX = PozX - 1;
		}
		else if (Plansza[PozX][PozY].stan == false)
		{
			Plansza[PozX][PozY].stan = !Plansza[PozX][PozY].stan; //zmiana wartoœci pola stan na przeciwne 
			m_kierunek = Engine::Kierunek::prawo;
			PozX = PozX + 1;
		}
	}
	else if (m_kierunek == Engine::Kierunek::lewo)
	{
		if (Plansza[PozX][PozY].stan == true)
		{
			Plansza[PozX][PozY].stan = !Plansza[PozX][PozY].stan; //zmiana wartoœci pola stan na przeciwne 
			m_kierunek = Engine::Kierunek::gora;
			PozY = PozY - 1;
		}
		else if (Plansza[PozX][PozY].stan == false)
		{
			Plansza[PozX][PozY].stan = !Plansza[PozX][PozY].stan; //zmiana wartoœci pola stan na przeciwne 
			m_kierunek = Engine::Kierunek::dol;
			PozY = PozY + 1;
		}
	}
	else if (m_kierunek == Engine::Kierunek::prawo)
	{
		if (Plansza[PozX][PozY].stan == true)
		{
			Plansza[PozX][PozY].stan = !Plansza[PozX][PozY].stan; //zmiana wartoœci pola stan na przeciwne 
			m_kierunek = Engine::Kierunek::dol;
			PozY = PozY + 1;
		}
		else if (Plansza[PozX][PozY].stan == false)
		{
			Plansza[PozX][PozY].stan = !Plansza[PozX][PozY].stan; //zmiana wartoœci pola stan na przeciwne 
			m_kierunek = Engine::Kierunek::gora;
			PozY = PozY - 1;
		}
	}
	
}

void Engine::Uruchom()
{
	//wykonaj ruch do góry
	Plansza[PozX][PozY] = true;
	PozY = PozY - 1;
	SetKierunek(gora);
}

void Engine::SetKierunek(Kierunek kierunek)
{
	m_kierunek = kierunek;
}

//void Engine::UstawMrowke()
//{
//	int PozX = x / 2;
//	int PozY = y / 2;
//	Plansza[PozX][PozY] = true;
//}


//
//bool Engine::AnalizaKomorki(int i, int j)
//{
//	
//}



