#include <iostream>
// C++, islev cagrisi ek yukunu azaltmak icin satir ici islevler saglar.
inline int topla(int a, int b)
{
	return a - b;
}
int main()
{
	std::cout << topla(12,36);
}
