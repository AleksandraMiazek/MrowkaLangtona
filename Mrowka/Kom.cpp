#include "Kom.h"


Kom::Kom(bool Stan)
{
	stan = Stan;
}


Kom::~Kom()
{
}

void Kom::SetStan(bool Stan)
{
	this->stan = Stan;
}

bool Kom::GetStan()
{
	return stan;
}


