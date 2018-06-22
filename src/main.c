#include <math.h>
#include <stdio.h>
#include <stdlib.h>




int main()
{
	int N=0;
	//using namespace std;

	while (N != 1 || N != 0)
	{
		//setlocale(LC_ALL, "rus");
		std::cout << std::endl;
	    std::cout << "Начать игру: 1" << std::endl;
	    std::cout << "Выход: 0" << std::endl;
	    std::cin >> N; 
	    
		if (N == 0)
	    {
	    	system ("cls");
			std::cout << "Игра окончена" << std::endl;
			break;	
	    } 
	    
		if (N == 1)
	    {
	    	system ("cls");
			nachalo();
			vvod();
			continue;	
	    }
	    
	    if (N !=1 && N !=0)
	    {
	    	std::cout << std::endl;
	    	printf("Не верный режим");
	    	std::cout << std::endl;
	    	continue;
	    }
	}	
}
