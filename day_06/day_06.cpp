#include <iostream>

#include <iostream>
void message(std::string msg)
{
    std::cout << msg;
}

int addition(int sayi1, int sayi2)
{
    std::cout << sayi1 + sayi2 << "\n";
    return 0;
}

int addition2(int sayi1, int sayi2)
{
    return sayi1 + sayi2;
}
void mesaj()
{
    std::cout << "\ntest" << "\n";
}
int addition3(int sayi1, int sayi2)
{
    mesaj();
    int toplam = sayi1 + sayi2;
    return toplam;
}

int main()
{

    message("Hello World!\n");
    addition(25, 63);
    std::cout << addition2(25, 63);
    std::cout << addition3(25, 63);


    int a, b;

    std::cout << "\n\n1. sayi: ";
    std::cin >> a;
    std::cout << "2. sayi: ";
    std::cin >> b;
    std::cout << "toplami: " << a + b <<"\n";

    // if else
    if (a == 25)
    {
        std::cout << "25 Sayisini Girdiniz.";
    }
    else
    {
        std::cout << "25'den Farkli Bir Sayi Girdiniz.";
    }
    if (a > 10 && a < 12)
    {
        std::cout << "\nSayi 11'dir";
    }
    else if (a > 15)
    {
        std::cout << "\nSayi 15'den buyuk";
    }

    char islem;

    std::cout << "\nIslem Degeri Giriniz: ";
    std::cin >> islem;
    //switch case
    switch (islem)
    {
    case '+':
        std::cout << "Sonuc: " << a + b;
        break;

    case '-':
        std::cout << "Sonuc: " << a - b;
        break;

    case '/':
        std::cout << "Sonuc: " << a / b;
        break;

    case '*':
        std::cout << "Sonuc: " << a * b;
        break;
    }

    for (int i = 0; i < 12; i++)
    {
        std::cout << "\n" << i;
    }

    // While
    while (true)
    {
        std::cout << "\nIslem Degeri Giriniz: ";
        std::cin >> islem;

        if (islem == '1')
        {
            break;
        }
        else
        {
            std::cout << "While!";
        }
    }
}