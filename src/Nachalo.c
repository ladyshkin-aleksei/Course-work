#include <iostream>
#include <stdio.h>


using namespace std;

void nachalo()
{
	setlocale(LC_ALL, "rus");	
	cout << "Правила игры: " << '\n';
	cout << '\n';
	cout << "Добро пожаловать в игру <Виселица>! Тебе нужно будет угадать загаданое мною слово, используя английские буквы на своей клавиатуре. Если в слове не будет твоей буквы, то количество жизней, которых 6 штук, будут уменьшаться. Если угадаешь моё слово, то ты выйграл, если нет, то можешь начать занаво. Удачи тебе!! " << '\n';
	cout << '\n';
	cout << "Буквы, которые можно использовать: " << '\n';
	cout <<("a b c d e f g h i j k l m n o p q r s t u v w x y z")<< '\n';
	cout << '\n';
	cout << "Игра началась!" << '\n';
	cout << '\n';
	cout << '\n';
}
