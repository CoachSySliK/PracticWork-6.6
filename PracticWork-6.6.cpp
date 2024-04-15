#include <iostream>

using namespace std;

int main()
{
    int sum;
    int rate;
    int totalSum;
    int year = 0;
    string years[3] = {" год", " года", " лет"};
    int word;

    start:
    cout << "Введите размер вклада: ";
    cin >> sum;
    sum *= 100; // тем самым мы будем производить расчеты в копейках
    cout << "Введите процентнуй ставку: ";
    cin >> rate;
    cout << "Введите желаемую сумму: ";
    cin >> totalSum;
    totalSum *= 100;

    cout << "-----Считаем-----\n";
    
    if (sum <= 0 || rate <= 0 || totalSum <= 0) {
        cout << "Не корректный ввод данных! Попробуйте ещё раз!\n";
        goto start;
    }
    
    while (sum < totalSum) {
        sum += sum * rate / 100;
        year++;
    }
    
    //мне срочно надо научиться делать функцию в отдельном файле или билиотеке, потому что работа с окончаниями почти в каждом проекте.

    if (year % 10 == 1) word = 0;
    else if (year % 10 >= 5) word = 2;
    else word = 1;

    cout << "Вам потребуется " << year << years[word] << endl;


    return 0;
}
