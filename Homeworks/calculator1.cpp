#include <iostream>
#include <cassert>
/*
Дополните  Calculator базовыми арифметическими операциями:
1) Суммирование, разность, умножение
2) Деление всех видов (целое, с остатком, обычное деление)
3) Не забудьте учесть особенности типов и поиграться с перегрузками

В main нужно придумать запустить свой простенький тест (например, проверить каждую операцию по очереди)


Не забывайте про кодстайл, за решение задачки дают семинарские баллы)
*/


// Базовые методы для арифм. операций
int Add(const int first_elem, const int second_elem) {
  return first_elem + second_elem;
}

double Add(const double first_elem, const double second_elem) {
  return first_elem + second_elem;
}

int Diff(const int first_elem, const int second_elem) {
  return first_elem - second_elem;
}

double Diff(const double first_elem, const double second_elem) {
  return first_elem - second_elem;
}

int Multiply(const int first_elem, const int second_elem) {
  return first_elem * second_elem;
}

double Multiply(const double first_elem, const double second_elem) {
  return first_elem * second_elem;
}

int Division(const int first_elem, const int second_elem) {
  assert(second_elem != 0 && "Делитель не должен быть равен 0");
  return first_elem / second_elem;
}

double Division(const double a, const double b) {
  assert(b != 0 && "Делитель не должен быть равен 0");
  return a / b;
}

int RemainderDiv(const int first_elem, const int second_elem) {
  assert(second_elem != 0 && "Делитель не должен быть равен 0");
  return first_elem % second_elem;
}

int main() {
  int a = 5;
  int b = 7;

  double a1 = 15.0;
  double b1 = 3.0;
  
  assert(Add(a, b) == 12 && "Ошибка сложения int");
  assert(Diff(a, b) == -2 && "Ошибка вычитания int");
  assert(Multiply(a, b) == 35 && "Ошибка умножения int");
  assert(Division(10, 3) == 3 && "Ошибка целочисленного деления");
  assert(RemainderDiv(10, 3) == 1 && "Ошибка остатка от деления int");

  assert(Add(a1, b1) == 18.0 && "Ошибка сложения double");
  assert(Division(a1, b1) == 5.0 && "Ошибка деления double");

  std::cout << "Тесты пройдены";
}
