#include <iostream>
//#include <math.h>
#include <stdio.h>
//#include <stdlib.h>
#include <ctime>

using namespace std;

void vvod()
{	
    char alphavit[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char slovo[11]={'p','r','o','g','r','a','m','m','i','s','t'};
    char Slovo[11]={'?','?','?','?','?','?','?','?','?','?','?'};
    char povtor[17]={'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*',};
    char bukva = ' ';
    cout <<("Slovo")<< '\n';
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
                    cout <<("Slovo")<< '\n';
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
