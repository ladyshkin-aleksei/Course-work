#include <iostream>
#include <stdio.h>
#include <ctime>
#include <math.h>


using namespace std;

void vvod()
{
	setlocale(LC_ALL, "rus");	
	char alphavit[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char slovo[11]={'p','r','o','g','r','a','m','m','i','s','t'};
	char Slovo[11]={'?','?','?','?','?','?','?','?','?','?','?'};
	char povtor[17]={'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*',};
	char bukva = ' ';
	printf ("%s", Slovo);
	int live = 6;
	int neizvestnie = 11;
	int pravilno;
	int mesto = 0;
	
	if (live == 6){
		cout << '\n';
		cout << "Всего 6 жизней" << '\n';
		}
		
	while (true){	
		cout << '\n';
		cout << "Введите букву: " << '\n';
		cout << '\n';
		cin >> bukva;				

		pravilno = false;
		for (int i=0; i<26; i++)
		if(bukva == alphavit[i]){	
			pravilno = true;
			break;
			}
			
		if (!pravilno){
			cout << '\n';
			cout << "Смените раскладку!" << '\n';
			continue;
			}
		
		pravilno = false;
		for (int i=0; i<17; i++)
		if (bukva == povtor[i]){
			cout << '\n';
			cout << "Эта буква уже была использована" << '\n';
			pravilno = true;
			}

		if (pravilno != false){
			continue;
			}		
				
		pravilno = false;
		for (int i=0; i<11; i++)
		if(bukva == slovo[i]){
			neizvestnie--;
			Slovo[i] = slovo[i];
			system ("clear");				
			printf ("%s", Slovo);
			pravilno = true;				
			}
			
		povtor[mesto] = bukva;
		mesto++;
				
		if (!pravilno){
			cout << '\n';
			cout << "Не правильная буква!" << '\n';
			live--;		
			}
				
				if (live == 6)
				{
					cout << endl;
					cout << "Îñòàëîñü 6 æèçíåé" << endl;
				}
				
				if (live == 5)
				{
					cout << endl;
					cout << "Îñòàëîñü 5 æèçíåé" << endl;
				}
				
				if (live == 4)
				{
					cout << endl;
					cout << "Îñòàëîñü 4 æèçíè" << endl;
				}
				
				if (live == 3)
				{
					cout << endl;
					cout << "Îñòàëîñü 3 æèçíè" << endl;
				}
				
				if (live == 2)
				{
					cout << endl;
					cout << "Îñòàëîñü 2 æèçíè" << endl;
				}
				
				if (live == 1)
				{
					cout << endl;
					cout << "Îñòàëàñü 1 æèçíü" << endl;
				}
				
				if (live == 0)
				{
					live--;
					system ("cls");
					cout << "Âû ïðîèãðàëè((" << endl;
					break;
				}
				
				if (neizvestnie == 0)
				{
					system ("cls");
					cout << "Âû âûéãðàëè!!!" << endl;
					break;
				}
		}
}
