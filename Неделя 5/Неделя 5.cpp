// Неделя 5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    // Неделя 5

    // Задача 1
   /* setlocale(LC_ALL, "");
    char symbol;
    cout << "Введите символ" << endl;
    cin >> symbol;
    if (((int)symbol >= 65 && (int)symbol <= 90) || ((int)symbol >= 97 && (int)symbol <= 122)) {
        cout << "Введена буква";
    }
    else if ((int)symbol >= 48 && (int)symbol <= 57) {
        cout << "Введена цифра";
    }
    else if ((int)symbol == 33 || (int)symbol == 34 || (int)symbol == 39 || (int)symbol == 40 || (int)symbol == 41
        || (int)symbol == 44 || (int)symbol == 45 || (int)symbol == 46 || (int)symbol == 47 || (int)symbol ==58 || (int)symbol == 59 || (int)symbol == 63) {
        cout << "Введен знак препинания";
    }
        else cout << "Введен иной символ";*/



        // Задача 2

  /*  setlocale(LC_ALL, "");
    int operIsh, operVh, dlit;
    float stoimMTS = 1.5, stoimMf = 1.7, stoimTele2 = 2;
    cout << "Введите длительность разговора  " << endl;
    cin >> dlit;
    cout << endl << "Укажите вашего оператора:" << endl;
    cout << "МТС введите 1" << endl;
    cout << "Megafon введите 2" << endl;
    cout << "Tele 2 введите 3" << endl;
    cin >> operIsh;
    cout << endl << "Укажите оператора на который осуществляется звонок:" << endl;
    cout << "МТС введите 1" << endl;
    cout << "Megafon введите 2" << endl;
    cout << "Tele 2 введите 3" << endl;
    cin >> operVh;
    if (operIsh > 3 || operVh > 3) {
        cout << "Введен не верный оператор";
    }
    else
    {

    
        if (operIsh == operVh) {
            cout << "Звонки бесплатны";
        }
        else
        {
            if (operIsh == 1){
               cout << "Стоимость звонка:  " << dlit * stoimMTS;
            }
            else
            {
                if (operIsh == 2) {
                    cout << "Стоимость звонка:  " << dlit * stoimMf;
                }
                else
                {
                    if (operIsh == 3) {
                        cout << "Стоимость звонка:  " << dlit * stoimTele2;
                    }
                
                }

            }
        }

    }*/


        //Задача 3


    setlocale(LC_ALL, "");
    float dohodZhel, zarp = 0, shtraf;
    int str, opozd, punkMen;
    cout << "Выберете пунк от 1 до 3: " << endl;
    cout << "1) Пользователь вводит доход и кол-во опозданий. Вычисляем кол-во строк кода." << endl;
    cout << "2) Пользователь вводит кол-во строк кода и доход. Вычисляем сколько можно опоздать" << endl;
    cout << "3) Пользователь вводит кол-во строк кода и кол-во опозданий. Вычисляем доход" << endl;
    cin >> punkMen;
    switch (punkMen)
    {
    case 1: {
        cout << "Введите желаемый доход " << endl;
        cin >> dohodZhel;
        cout << "Введите кол-во опозданий " << endl;
        cin >> opozd;
        str = 0;
        while ((str * 0.5  - opozd / 3 *20) < dohodZhel)
        {
            str++;
        }
        cout << "Необходимо написать  " << str << " строк кода";
        break;
        }
    case 2: {
        cout << "Введите число строк кода" << endl;
        cin >> str;
        cout << "Введите желаемый доход " << endl;
        cin >> dohodZhel;
        zarp = str * 0.5;
        if ((zarp - dohodZhel) >= 0) {
            cout << "Можно опоздать " << (int)(zarp - dohodZhel) / 20 * 3 + 2 << " раз";
        }
        else
        {
            cout << "Мало написано строк кода";
        }
        break;
    }
    
    case 3: {
        cout << "Введите число строк кода" << endl;
        cin >> str;
        cout << "Введите кол-во опозданий " << endl;
        cin >> opozd;
        zarp = str * 0.5;
        shtraf = opozd / 3 * 20;
        if ((zarp - shtraf) >= 0) {
            cout << "Зарплата равна " << zarp - shtraf;
        }
        else {
            cout << "Нужно больше кодить";
        }
        break;
         
    }

    default:
        cout << "Веден не правильный пункт меню";
    }

}

