#include <iostream>
class Marka
{
    public:
        std::string marka;
        std::string alani;
        std::string urun;
        bool yabanci;
        int degeri;
        int calisan;
};

class Tesla : public Marka {
    public: 

    void aciklama() {
     
    }
};

class Nasa : public Marka {
    public:  

    void aciklama() {

    }
};

class Sony : public Marka {
    public: 

    Sony()
    {
        std::cout << "Basladi! ";
    }
    ~Sony()
    {
        std::cout << " Bitti! ";
    }
    void aciklama() {
        std::cout << "Aciklama Eklendi! ";
    }
};

void deneme(Sony& sony)
{
    std::cout << "Deneme Fonk. ";
    sony.alani = "Teknoloji ";
    std::cout << sony.alani;
}

int main()
{
    Nasa nasa;
    nasa.marka = "Nasa";
    nasa.alani = "Uzay";
    nasa.degeri = 94562141;
    nasa.yabanci = true;

    Tesla tesla;
    Tesla* teslaPtr = &tesla;
    teslaPtr->alani = "otonom araç";
    tesla.marka = "Tesla";
    teslaPtr->aciklama();

    Sony sony;
    sony.marka = "Sony";
    sony.aciklama();

    deneme(sony);

    int sayi1 = 10;
    int& deneme = sayi1;
    deneme = 12;
    std::cout << deneme;

    return 0;
}
