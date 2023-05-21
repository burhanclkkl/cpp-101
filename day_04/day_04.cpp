#include <iostream>

int topla(int a, int b)
{
    return a + b;
}
int cikar(int a, int b)
{
    return a - b;
}
float bolme(float a, float b)
{
    return a / b;
}
int getirtopla(int(*fint)(int, int))
{
    int a = fint(10, 10);
    return a;
}
int getircikar(int(*fint)(int, int))
{
    int a = fint(25, 12);
    return a;
}

using fint = float(*)(float, float); // int(*fint)(int, int) kullanmamak icin 

float getirbolme(fint f)
{
    float a = f(17, 39);
    return a;
}

int main()
{
    int a = getirtopla(topla);
    std::cout << "toplami: " << a;
    int b = getircikar(cikar);
    std::cout << "\ncikarma: " << b;
    float c = getirbolme(bolme);
    std::cout << "\nbolme: " << c;
}
