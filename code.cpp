#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
 
int main(){

cout << "Выберите действие:" << endl;
cout << "1) Открыть калькулятор" << endl;
cout << "2) Открыть калькулятор квадратных уравнений" << endl;

 int option; // Действие,которое нужно совершить
  cin >> option; 
  switch (option){
    case 1:
      cout << "Выберите действие:" << endl;
    cout << "1) Вычитание" << endl;    
    cout << "2) Сложение" << endl;
    cout << "3) Умножение" << endl;
    cout << "4) Деление" << endl; 
    cout << "5) Вычисление квадратного корня" << endl;
    cout << "6) Возведение в степень" << endl;
    double a;
    double b;
    char operation;
  cin >> operation;
      
    switch (operation){  //выбор действия с калькулятором
    case '-': 
       cin >> a >> b;
        cout << "Результат:" <<  a - b << endl;;
        break;
    case '+':
       cin >> a >> b;
        cout << "Результат:" << a + b << endl;
        break;
    case '*':
       cin >> a >> b;
        cout << "Результат:" << a * b << endl;
        break;
    case '/':
       cin >> a >> b;
        cout << "Результат:" << a / b << endl;
        break;
      case 's':
      cin >> a >> b;
      cout << "Результат:" << fixed << setprecision(2) << sqrt(a * b) << endl;
      case 'p':
      cout << "Результат:" << pow(a, b) << endl;
    }
  
    case 2: // Калькулятор квадратного уравнения
  int d, e, c;
  double x1,x2;
  cin >> d >> b >> c;
  int D = pow(e, 2) - 4 * d * c;
  if(D > 0){
    x1 = (((-1 * e) + sqrt(D))/(2 * d));
    x2 = (((-1 * e) - sqrt(D))/(2 * d));
    cout << "Результат:" << fixed << setprecision(2) << x1 << endl; 
    cout << fixed << setprecision(2) << x2 << endl;
    }
    else if(D == 0){
      x1 = (-e + sqrt(D) / (2 * d));
      cout << "Результат:" << fixed << setprecision(2) << x1;
      }
  else if(D < 0) cout << "Нет Корней";
  }
    return 0;
  }
