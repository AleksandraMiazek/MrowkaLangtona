#include "Gra.h"
#include <iostream>

class gra_txt: public Gra
{
public:
	gra_txt();
	gra_txt(int nw, int nk);
	virtual ~gra_txt();

	virtual void View();
};

