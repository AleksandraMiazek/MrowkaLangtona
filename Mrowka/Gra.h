#include "Engine.h"
#include <string>
class Gra: public Engine
{
public:
	Gra();
	Gra(int nw, int nk);
	virtual ~Gra();

	void Start();		//w p�tli nieskonczonej lub skonczonej, mozna pr�bnie dwa kroki tylko zrobi�
						//pokaza� tablice, a potem r�b analiz�


	virtual void View()=0;

};

