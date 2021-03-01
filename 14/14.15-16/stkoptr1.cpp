#include <iostream>
#include <cstdlib>
#include <ctime>
#include "stcktp1.h"

const int Num = 10;
int main()
{
	std::srand(std::time(0));
	std::cout << "Podaj rozmiar stosu: ";
	int stacksize;
	std::cin >> stacksize;
	Stack<const char*>st(stacksize);
	const char* in[Num] = { "1: Henryk Gilgamesz","2: Henryk Gilgamesz", "3: Henryk Gilgamesz", "4: Henryk Gilgamesz", "5: Henryk Gilgamesz",
							"6: Henryk Gilgamesz", "7: Henryk Gilgamesz", "8: Henryk Gilgamesz", "9: Henryk Gilgamesz", "10: Henryk Gilgamesz", };

	const char* out[Num];
	int processed = 0;
	int nextin = 0;
	while (processed < Num)
	{
		if (st.isempty())
			st.push(in[nextin++]);
		else if (st.isfull())
			st.pop(out[processed++]);
		else if (std::rand() % 2 && nextin < Num)
			st.push(in[nextin++]);
		else
			st.pop(out[processed++]);
	}
	for (int i = 0; i < Num; i++)
		std::cout << out[i] << std::endl;
	std::cout << "Koniec\n";
	return 0;
}