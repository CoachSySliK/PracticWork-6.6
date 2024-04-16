#include <iostream>
#include "C:\Users\hp victus\source\repos\Ending\functions.h"

using namespace std;

int main()
{
    int sum;
    int rate;
    int totalSum;
    int year = 0;
    char years = 'y';
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
    
    //я сделал функцию

    cout << "Вам потребуется " << year << ending(year, years) << endl;


    return 0;
}
