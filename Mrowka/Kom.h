#include <utility> //pair
class Kom
{
protected:
	bool stan;					 //stan komórki
								 //stan=0 nie odwiedzona
								 //stan=1 odwiedzona
	

	

public:
	Kom() { stan = false; };
	Kom(bool Stan);
	~Kom();

	void SetStan(bool Stan);
	bool GetStan();


friend class Engine;
};

