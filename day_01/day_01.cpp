#include <iostream>
// Ileriye Dönük Bildirim
// bildirim ve tanýmlama
// decleration definition
// derleme sýrasýnda hata atmaz görmezden gelir

int topla(int sayi1, int sayi2); // fonksiyon bilirim
int cikar(int sayi1, int sayi2); // fonksiyon bilirim
float bol(float sayi1, float sayi2); // fonksiyon bilirim

int main()
{
    int a = 24;
    int b = 13;

    std::cout << "Toplama: " << topla(a, b);
    std::cout << "\nCikarma: " << cikar(a, b);
    std::cout << "\nBolme: " << bol(a, b);
}

int topla(int sayi1, int sayi2) // fonksiyon tanýmlandý
{
    return sayi1 + sayi2;
}

int cikar(int sayi1, int sayi2) // fonksiyon tanýmlandý
{
    return sayi1 - sayi2;
}

float bol(float sayi1, float sayi2) // fonksiyon tanýmlandý
{
    return sayi1 / sayi2;
}
