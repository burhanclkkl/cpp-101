#include <iostream>
class Odeme
{
public:
	float tutar;

	std::string paraBirimi;
	std::string hashCode = "142536";
	Odeme(bool f, std::string a)
	{
		tutar = 1.2;
		paraBirimi = "TL";
		std::cout << a;
	}
	Odeme()
	{

	}
	~Odeme()
	{
		std::cout << "Bitti";
	}
	void ode()
	{
		std::cout << "Odeme Tamamlandi ";
	}
};
int main()
{
	{
		Odeme ode(true, "Merhaba! ");
		ode.tutar = 12.55;
		ode.paraBirimi = "TL";
		ode.ode();
	}
	return 0;
}