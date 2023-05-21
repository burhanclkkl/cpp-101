#include <iostream>
class Hesapla{
    public:
        int genislik;
        int yukseklik;
        int alan;

        void giris()
        {
            std::cout << "yukseklik degeri: ";
            std::cin >> yukseklik;
        
            std::cout << "genislik degeri: ";
            std::cin >> genislik;
        }
        void hesapla()
        {
            alan = yukseklik * genislik;
            std::cout << "alan: " << alan;
        }
};

int main()
{
    Hesapla hesap;
    hesap.giris();
    hesap.hesapla();
}