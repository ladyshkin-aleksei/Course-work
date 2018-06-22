#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>


using namespace std;
setlocale(LC_ALL, "rus");

void nachalo()
{		
	cout << "Правила игры: " << endl;
	cout << endl;
	cout << endl;
	cout << "Добро пожаловать в игру <Виселица>! Тебе нужно будет угадать загаданое мною слово, используя английские буквы на своей клавиатуре. Если в слове не будет твоей буквы, то количество жизней, которых 6 штук, будут уменьшаться. Если угадаешь моё слово, то ты выйграл, если нет, то можешь начать занаво. Удачи тебе!! " << endl;
	cout << endl;
	cout << endl;
	cout << "Буквы, которые можно использовать: " << endl;
	printf ("a b c d e f g h i j k l m n o p q r s t u v w x y z");
	cout << endl;
	cout << endl;
	cout << "Игра началась!" << endl;
	cout << endl;
	system("pause");
	system("cls");
}


void vvod()
{	
	char alphavit[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char slovo[11]={'p','r','o','g','r','a','m','m','i','s','t'};
	char Slovo[11]={'?','?','?','?','?','?','?','?','?','?','?'};
	char povtor[17]={'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*',};
	char bukva = ' ';
	printf ("%s",Slovo);
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
				printf ("%s",Slovo);
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


int main()
{
	int N=0;
	

	while (N != 1 || N != 0)
	{

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
