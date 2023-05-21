#include <iostream>

int main()
{
	int dizi[2][3]{ {11,13,15},{25,66,54} };
	std::cout << dizi[1][2] << "\n--\n";

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << dizi[i][j] << "\n";
		}
	}

	//statik dizi sayilarin yerine degisken koyulamaz.
	const int sayi1 = 3;
	constexpr int sayi2 = 2;
	int dizi2[sayi1][sayi2]
	{
		{11,22},
		{33,44},
		{55,66}
	};

	std::cout<<"Deger Sayisi: " << std::size(dizi2[0]) <<"\n";

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			std::cout << dizi2[i][j] << "\n";
		}
	}
}
