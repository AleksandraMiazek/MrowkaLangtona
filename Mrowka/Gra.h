#include "Engine.h"
#include <string>
class Gra: public Engine
{
public:
	Gra();
	Gra(int nw, int nk);
	virtual ~Gra();

	void Start();		//w pêtli nieskonczonej lub skonczonej, mozna próbnie dwa kroki tylko zrobiæ
						//pokazaæ tablice, a potem rób analizê


	virtual void View()=0;

};

