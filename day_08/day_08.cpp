#include <iostream>
// Pointer
int main()
{
    int puanlar[3]{ 21,22,33 };
    int* ptr = puanlar + 2;

    std::cout << *ptr;

    int a = 10;
    int* ptr_ = &a; // Bellek Adresi Tutar

    // Aynı
    int* aPtr = &a; int* aPtr1 = &a; int* aPtr2 = &a;

    std::cout << "\nDeger : " << a << std::endl;
    std::cout << "Bellek Adresi : " << &a << std::endl;
    std::cout << "Deger : " << *&a << std::endl;
    std::cout << "Bellek Adresi : " << &*&a << std::endl;
    std::cout << "Deger : " << *&*&a << std::endl;
    std::cout << "Bellek Adresi : " << ptr_ << std::endl;
    std::cout << "Deger : " << *ptr_ << std::endl; // Sayı Getirilir
}
