#include <iostream>
#include <string>

int main()
{
    int puanlar[]{ 1,2,3,5,8 };
    int eleman1 = puanlar[5];
    std::cout << "Eleman: " << eleman1;
    std::cout << "\n--\n";

    for (int i = 0; i < 5; i++)
    {
        int eleman = puanlar[i];
        std::string elemandegeri = std::to_string(i + 1);
        std::cout << "\nEleman" + elemandegeri + " : " << eleman;
    }

    std::cout << "\n--\n";

    int i = 0;
    while (true)
    {
        int elemanwhile = puanlar[i];
        std::string elemandegeri1 = std::to_string(i + 1);
        std::cout << "\nEleman" + elemandegeri1 + " : " << elemanwhile;
        i++;
        if (i == 5)
        {
            break;
        }
    }
}
