#include <iostream>
#include <string>
#include <sstream>
void main()
{
	std::string aposta;
	int contar=0,i;
	int rj[10000];
	std::cin >> aposta;
	for ( i = 0; i < aposta.size(); i++)
	{
		if(aposta[i]=='1')
		{
			std::cout << "BU";
			contar = contar + 1;
		}
		else
		{
			rj[i] = contar;
			contar = 0;
		}
	}
	for (i = 0; i < aposta.size(); i++)
	{
		std::cout << rj[i];
	}
}