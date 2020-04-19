#include "gra_txt.h"
#include "Windows.h"
#include "time.h"


gra_txt::gra_txt()
{
}

gra_txt::gra_txt(int nw, int nk):Gra(nw,nk)
{
}


gra_txt::~gra_txt()
{
}

void gra_txt::View()
{
	//* - komórka odwiedzona
	//" " - komorka nieodwiedzona
	system("CLS");
	for (int i = 0;i < x;i++)
	{
		for (int j = 0;j < y;j++)
		{
			if (i == PozX && j == PozY)
			{
				std::cout << "Z";
			}
			if (Plansza[i][j].GetStan() == true)
			{
				std::cout << " * ";
			}
			if (Plansza[i][j].GetStan() == false)
			{
				std::cout << "  " ;
			}
			
		}
		std::cout << std::endl;
	}
}
