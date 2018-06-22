#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctime>

using namespace std;

void nachalo()
{		
    cout << "Правила игры: " << '\n';
    cout << '\n';
    cout << "Добро пожаловать в игру <Виселица>! Тебе нужно будет угадать загаданое мною слово, используя английские буквы на своей клавиатуре. Если в слове не будет твоей буквы, то количество жизней, которых 6 штук, будут уменьшаться. Если угадаешь моё слово, то ты выйграл, если нет, то можешь начать занаво. Удачи тебе!! " << '\n';
    cout << '\n';
    cout << "Буквы, которые можно использовать: " << '\n';
    cout <<("a b c d e f g h i j k l m n o p q r s t u v w x y z")<< '\n';
    cout << '\n';
    cout << "Игра началась!" << '\n';
    cout << '\n';
    system("pause");
    system("clear");
}

void vvod()
{	
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
				
            if (live == 6){
                cout << '\n';
                cout << "Осталось 6 жизней" << '\n';
                }
				
            if (live == 5){
                cout << '\n';
                cout << "Осталось 5 жизней" << '\n';
                }
				
            if (live == 4){
                cout << '\n';
                cout << "Осталось 4 жизни" << '\n';
                }
				
            if (live == 3){
                cout << '\n';
                cout << "Осталось 3 жизни" << '\n';
                }
				
            if (live == 2){
                cout << '\n';
                cout << "Осталось 2 жизни" << '\n';
                }
				
            if (live == 1){
                cout << '\n';
                cout << "Осталась 1 жизнь" << '\n';
                }
				
            if (live == 0){
                live--;
                system ("clear");
                cout << "Вы проиграли((" << '\n';
                break;
                }
				
            if (neizvestnie == 0){
                system ("clear");
                cout << "Вы выйграли!!!" << '\n';
                break;
                }
        }
}

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
            vvod();
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
