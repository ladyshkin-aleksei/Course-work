#include "Nachalo.h"
#include "Vvod.h"
#include <iostream>
#include <stdio.h>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int N=0;
	
	while (N != 1 || N != 0)
	{

		cout << '\n';
		cout << "Начать игру: 1" << '\n';
		cout << "Выход: 0" << '\n';
		cin >> N; 
	    
	if (N == 0){
		system ("clear");
		cout << "Игра окончена" << '\n';
		break;
		} 
	    
	if (N == 1){
		system ("clear");
		nachalo();
		//vvod();
		continue;	
		}
	    
	if (N !=1 && N !=0){
		cout << '\n';
		printf("Не верный режим");
		cout << '\n';
		continue;
		}
	}	
}
