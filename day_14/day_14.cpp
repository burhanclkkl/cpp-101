#include <iostream>

class ElektronikMalzeme
{
    public:
        std::string marka;
        std::string kullanimalani;
        int fiyat;
};

class Klavye : public ElektronikMalzeme
{
    public:
        std::string klavyetur;
};

class Mouse : public ElektronikMalzeme
{
    public:
        int mousedpi;
};

class Hoparlor : public ElektronikMalzeme
{
    public:
        std::string hoplarlortur;
};

void Goster(ElektronikMalzeme* elektronikmalzemePtr)
{
    std::cout << elektronikmalzemePtr->marka << " " << elektronikmalzemePtr->fiyat << "\n";
}
int main()
{
    Klavye klavye;
    klavye.klavyetur = "Q Klavye";
    klavye.fiyat = 1285;
    klavye.marka = "Logitech";
    Goster(&klavye);

    Mouse mouse;
    mouse.fiyat = 215;
    mouse.marka = "Logitech";
    
    Goster(&mouse);

    Hoparlor hoparlor;
    hoparlor.fiyat = 2563;
    hoparlor.marka = "JBL";

    Goster(&hoparlor);
}
