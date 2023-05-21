#include <iostream>
// Asiri Yukleme
int topla(int sayi1, int sayi2)
{
    std::cout << "int ";
    return sayi1 + sayi2;
}

double topla(double sayi1, double sayi2)
{
    std::cout << "\ndouble ";
    return sayi1 + sayi2;
}

int main()
{
    int a = 12.2;
    int b = 15.5;
    std::cout << "Toplam: " << topla(a, b);

    double a1 = 12.2;
    double b1 = 15.5;
    std::cout << "Toplam: " << topla(a1, b1);
}
