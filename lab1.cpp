#include <iostream>
using namespace std;

int main() {
    double x; // Переменная для хранения введенного числа
    
    // Запрашиваем число у пользователя
    cout << "Введите число x: ";
    cin >> x;
    
    // Вычисляем результат
    double z = x * 2;
    
    // Выводим результат
    cout << "z = " << x << " * 2 = " << z << endl;
    
    return 0;
} 
