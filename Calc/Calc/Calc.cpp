//Пусто не там, где начало, пусто там, где давно ничего не делали. ИС211
//Рис. 2.5: fig02_05.cpp
//Программа сложения, показывающая сумму двух чисел.
#include <iostream> //Позволяет программе производить ввод/вывод
//Функция main начинает исполнение программы 
int main()
{
//Объявление переменных
	int number1; //Первое из складываемых чисел
	int number2; //Второе из складываемых чисел
	int sum; //Сумма number1 и namber2
	int division; //Деление number1 и number2
	int subtraction; //Вычитание number1 и namber2
	int multiplication; //Произведение number1 и number2
	int modul; //Остаток от деление number1 и number2
	
	std::cout << "Enter first integer: "; //Запросить данные
	std::cin >> number1; //Прочитать первое число в number1

	std::cout << "Enter second integer: "; //Запросить данные
	std::cin >> number2; //Прочитатьь второе число в number2

	sum = number1 + number2; //Сложить числа; записать сумму в sum
	subtraction = number1 - number2; //Вычесть числа; записать вычетание
	division = number1 / number2; //Поделить числа; записать сумму в division
	multiplication = number1 * number2; //Умножить числа; записать умножение в multiplication
	modul = number1 % number2; // Получить остаток от деления; записать остаток в modul

	std::cout << "Sum is            | " << sum << std::endl; //Вывести сумму
	std::cout << "Subtractionn is   | " << subtraction << std::endl; //Вывести разность
	std::cout << "Division is       | " << division << std::endl; //Вывести частное
	std::cout << "Multiplication is | " << multiplication << std::endl; //Вывести произведение
	std::cout << "Modul is          | " << modul << std::endl; //Вывести остаток от деления

	return 0; //Показывает успешное завершение программы
}
//Конец функции main