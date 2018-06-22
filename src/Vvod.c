#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>



using namespace std;

void vvod()
{	
	char alphavit[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char slovo[11]={'p','r','o','g','r','a','m','m','i','s','t'};
	char Slovo[11]={'?','?','?','?','?','?','?','?','?','?','?'};
	char povtor[17]={'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*',};
	char bukva = ' ';
	fprintf (Slovo);
	int live = 6;
	int neizvestnie = 11;
	int pravilno;
	int mesto = 0;
	
	if (live == 6)
	{
		cout << endl;
		cout << "Всего 6 жизней" << endl;
	}
		
	while (true)
	{	
		cout << endl;
		cout << endl;
		cout << "Введите букву: " << endl;
		cout << endl;
		cin >> bukva;				

		pravilno = false;
		for (int i=0; i<26; i++)
			if(bukva == alphavit[i])
			{	
				pravilno = true;
				break;
			}
			
			if (!pravilno)
			{
				cout << endl;
				cout << "Смените раскладку!" << endl;
				continue;
			}
		
		pravilno = false;
		for (int i=0; i<17; i++)
			if (bukva == povtor[i])
			{
				cout << endl;
				cout << "Эта буква уже была использована" << endl;
				pravilno = true;
			}

			if (pravilno != false)
			{
				continue;
			}		
				
		pravilno = false;
		for (int i=0; i<11; i++)
			if(bukva == slovo[i])
			{
				neizvestnie--;
				Slovo[i] = slovo[i];

				system ("cls");				
				fprintf(Slovo);
				pravilno = true;				
			}
			
				povtor[mesto] = bukva;
				mesto++;
				
			if (!pravilno)
			{
				cout << endl;
				cout << "Не правильная буква!" << endl;
				live--;		
			}
				
				if (live == 6)
				{
					cout << endl;
					cout << "Осталось 6 жизней" << endl;
				}
				
				if (live == 5)
				{
					cout << endl;
					cout << "Осталось 5 жизней" << endl;
				}
				
				if (live == 4)
				{
					cout << endl;
					cout << "Осталось 4 жизни" << endl;
				}
				
				if (live == 3)
				{
					cout << endl;
					cout << "Осталось 3 жизни" << endl;
				}
				
				if (live == 2)
				{
					cout << endl;
					cout << "Осталось 2 жизни" << endl;
				}
				
				if (live == 1)
				{
					cout << endl;
					cout << "Осталась 1 жизнь" << endl;
				}
				
				if (live == 0)
				{
					live--;
					system ("cls");
					cout << "Вы проиграли((" << endl;
					break;
				}
				
				if (neizvestnie == 0)
				{
					system ("cls");
					cout << "Вы выйграли!!!" << endl;
					break;
				}
		}
}
