#include <iostream>
#include <Windows.h>
/*
Типы данных:
			bool - true/false
			char - '+' 43	-128 -- 127
   unsigned char - '#'			0 -- 255
		   short - 123		-32768 -- 32767
  unsigned short - 123			0 -- 65535
			 int - 123	-2147483648 -- 2147483647
   long long int - 123 -9223372036854775808 -- 9223372036854775807
    unsigned int - 123			0 -- 4294967295
		   float - 0.5			3.4E+-38
		  double - 0.05			1.7E+-308
	 long double - 0.005		3.4e-4932 -- 1.1e+4932
Операторы:
	математические: + - * / = % ++ -- () { -= += *= /= } - себя на което число
	сравнительные : > < <= >= != == <=>
	логические	  : && || !
	НЕ ЮЗАТ		  : goto and not {int я}
	*/
/*if (z == 43)
{
	std::cout << a << " + " << b << " = " << a + b;
}
else if (z == 45) {
	std::cout << a << " - " << b << " = " << a - b;
}
else if (z == 47) {
	std::cout << a << " / " << b << " = " << a / b;
}
else if (z == 42) {
	std::cout << a << " * " << b << " = " << a * b;
}
else {
	std::cout << "ввели не правильно знак";
}

  */
/*int choose = 0, randomNum = 0, number = 0;
int hp = 0, maxHp = 25, maxHpHard = 25;
int chance = 30;
while (true)
{
	system("cls");
	std::cout << "\n\n\nИгра \"Угадай число\"\n\n";
	std::cout << "1 - начать игру\n";
	std::cout << "2 - настройки\n";
	std::cout << "0 - выход\n\n";
	std::cout << "Ввод: ";
	std::cin >> choose;
	if (choose == 1) {
		while (true) {
			system("cls");
			std::cout << "\n\n\nВыберите уровень сложности\"\n\n";
			std::cout << "1 - легкий (1 - 500)\n";
			std::cout << "2 - сложный (1 - 5000)\n";
			std::cout << "0 - выход в главное меню\n\n";
			std::cout << "Ввод: ";
			std::cin >> choose;
			if (choose == 1) {
				randomNum = rand() % 500 + 1;
				hp = maxHp;
				while (true) {
					system("cls");
					std::cout << "Кол-во жизней: " << hp << "\n";
					std::cout << "Введите число от 1 до 500: ";
					std::cin >> number;
					if (randomNum == number) {
						std::cout << "Вы угадали! Поздравляем\n";
						system("pause");
						break;
					}
					else if (number < 1 || number > 500)
					{
						std::cout << "Вы вышли за лимиы\n";
						Sleep(1000);
					}
					else {
						hp--;
						std::cout << "Не верно\n\n";
						Sleep(1400);
						system("cls");
						std::cout << "Кол-во жизней: " << hp << "\n";
						std::cout << "Взять подсказку за 1 жизнь?\n";
						std::cout << "1 - Да\nЛюбое число - нет\nВвод: ";
						std::cin >> choose;
						if (choose == 1) {
							hp--;
							if (hp <= 0)
							{
								std::cout << "Вы проиграли!\n";
								std::cout << "Число компьютера было: " << randomNum << "\n";
								system("pause");
								break;
							}
							if (number < randomNum) {
								std::cout << "Ваше число меньше числа компьютера\n";
							}
							else {
								std::cout << "Ваше число больше числа компьютера\n";
							}
							Sleep(1500);
						}
							else {
								std::cout << "Отказ от подсказки\n";
							}
					}
				}
			}
			else if (choose == 2) {
					randomNum = rand() % 5000 + 1;
					hp = maxHpHard;
					while (true) {
						system("cls");
						std::cout << "Кол-во жизней: " << hp << "\n";
						std::cout << "Введите число от 1 до 5000: ";
						std::cin >> number;

						if (randomNum == number) {
							std::cout << "Вы угадали! Поздравляем\n";
							system("pause");
							break;
						}
						else if (number < 1 || number > 5000)
						{
							std::cout << "Вы вышли за лимиы\n";
							Sleep(1000);
						}
						else {
							hp--;
							std::cout << "Не верно\n\n";
							Sleep(1400);
							system("cls");
							std::cout << "Кол-во жизней: " << hp << "\n";
							std::cout << "Взять подсказку за 1 жизнь?\n";
							std::cout << "1 - Да\nЛюбое число - нет\nВвод: ";
							std::cin >> choose;
							if (choose == 1) {
								if (rand() % 101 <= chance)
								{
									std::cout << "Бесплатная подсказка\n";
									Sleep(1000);
								}
								else {
								hp--;
									if (hp <= 0)
									{
									std::cout << "Вы проиграли!\n";
									std::cout << "Число компьютера было: " << randomNum << "\n";
									system("pause");
									break;
									}
								}

								if (number < randomNum) {
									std::cout << "Ваше число меньше числа компьютера\n";
								}
								else {
									std::cout << "Ваше число больше числа компьютера\n";
								}
								Sleep(1500);
							}
							else {
								std::cout << "Отказ от подсказки\n";
							}
						}
					}
			}
			else if (choose == 0) {
				system("cls");
				std::cout << "\n\n\n\t\tСпасибо за игру\n\n\n";
				break;
			}
			else {
				std::cout << "\nНекорректный ввод\n";
				Sleep(1500);
			}
		}
	}
	else if (choose == 2) {
		while (true) {
			std::cout << "\n\n\nНастройки игры\"\n\n";
			std::cout << "1 - настройки жизней легкой игры\n";
			std::cout << "2 - настройки жизней сложной игры\n";
			std::cout << "3 - шанс бесплатной подсказки сложной игры\n\n";
			std::cout << "0 - выход\n\n";
			std::cout << "Ввод: ";
			std::cin >> choose;
			if (choose == 1) {
				while (true) {
					std::cout << "Введите количество жизней для легкой игры: ";
					std::cin >> choose;
					if (choose < 1 || choose > 333) {
						std::cout << "Допустимые значения от 1 до 333\n";
						Sleep(1500);
					}
					else {
						std::cout << "Успешно\n";
						maxHp = choose;
						Sleep(1500);
						break;
					}
				}
			}
			else if (choose == 2) {
				while (true) {
					std::cout << "Введите количество жизней для легкой игры: ";
					std::cin >> choose;
					if (choose < 1 || choose > 333) {
						std::cout << "Допустимые значения от 1 до 333\n";
						Sleep(1500);
					}
					else {
						std::cout << "Успешно\n";
						maxHpHard = choose;
						Sleep(1500);
						break;
					}
				}
			}
			else if (choose == 3) {
				while (true) {
					std::cout << "Введите шанс бесплатной подсказки для сложной игры: ";
					std::cin >> choose;
					if (choose < 1 || choose > 100) {
						std::cout << "Допустимые значения от 1 до 100\n";
						Sleep(1500);
					}
					else {
						std::cout << "Успешно\n";
						chance = choose;
						Sleep(1500);
						break;
					}
				}
			}
			else if (choose == 0) {
				system("cls");
				std::cout << "\n\n\n\t\tСпасибо за игру\n\n\n";
				break;
			}
			else {

			}
		}
	}
	else if (choose == 0) {
		system("cls");
		std::cout << "\n\n\n\t\tСпасибо за игру\n\n\n";
		break;
	}
	else {
		std::cout << "\nНекорректный ввод\n";
		Sleep(1500);
	}
}*/
/*int const size = 10;
double summa = 0;
double minussumma = 0;
double srednee = 0;
int arr[size]{};
std::cout << "массив\n";
int randm;
for (int i = 0; i < size; i++) {
	arr[i] = randm = rand() % 21 - 10;
	std::cout << arr[i] << " ";
	if (arr[i] > 0) {
		summa += arr[i];
	}
	else {
		minussumma += arr[i];
	}
}
std::cout << "\nСумма всех положительных чисел: " << summa;
std::cout << "\nСумма всех отрицательных чисел: " << minussumma;
srednee = (minussumma + summa) / size;
std::cout << "\nСреднее арифметическое массива: " << srednee << std::endl;*/
/*const int perv = 5, vtor = 3;
int arr[perv][vtor];
for (int i = 0; i < perv; i++) {
	for (int j = 0; j < vtor; j++)
	{
		arr[i][j] = rand() % 10;
		std::cout << arr[i][j] << " ";
	}
	std::cout << "\n";
}*/
int main() { SetConsoleCP(CP_UTF8);SetConsoleOutputCP(CP_UTF8);srand(time(NULL));
std::cout << "izmenenie";
return 0;
}