#include <iostream>
//Parametre Varsayilan Deger

void print(std::string test, int a = 11, bool deger = true)
{
    std::cout << test << "\n" << a << "\n" << deger;
}
int main()
{
    print("Merhaba!", 12);
}