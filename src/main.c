//#include <iostream>
#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctime>



using namespace std;

int main()
{
	int N=0;
	
	while (N != 1 || N != 0)
	{
		setlocale(LC_ALL, "rus");
		cout << endl;
	    cout << "Начать игру: 1" << endl;
	    cout << "Выход: 0" << endl;
	    cin >> N; 
	    
		if (N == 0)
	    {
	    	system ("cls");
			cout << "Игра окончена" << endl;
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
	    	cout << endl;
	    	printf("Не верный режим");
	    	cout << endl;
	    	continue;
	    }
	}	
}
