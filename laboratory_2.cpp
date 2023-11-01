#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");

    //Программа
    bool work = true;
    int input_task;
    char input_resume;
    bool resume;
    //1
	int visitor;
    int input_age;
	int max_age = 0;
	int min_age = 1000000;
	int mid_age = 0;
    //2
	int num_2;
    //3
	char station;
    //4
	int num_1_4, num_2_4;
	int answer_user;
    //5
	int num_5;

	while (work) {
		cout << "1. В спортзал ежедневно приходит какое-то количество посетителей. Необходимо предложить пользователю ввести такие данные: сколько человек посетило спортзал за день, ввести возраст каждого посетителя и в итоге показать возраст самого старшего и самого молодого из них, а также посчитать средний возраст посетителей." << endl;
		cout << "2. Составить свое расписание на неделю. Пользователь вводит порядковый номер дня недели и у него на экране отображается, то, что запланировано на этот день." << endl;
		cout << "3. Пользователю для расчета времени в пути надо вводить не номера станций, а буквы (A,B,C,D,E). Необходимо предусмотреть ввод пользователем и маленьких, и больших букв (избавиться от регистрозависимости).  То есть если введено или D, или d – должен сработать один и тот же case." << endl;
		cout << "4. Необходимо написать программу, которая проверяет пользователя на знание таблицы умножения. Пользователь сам вводит два целых однозначных числа. Программа задаёт вопрос: результат умножения первого числа на второе.  Пользователь должен ввести ответ и увидеть на экране правильно он ответил или нет. Если нет – показать еще и правильный результат." << endl;
		cout << "5. Пользователь вводит порядковый номер пальца руки. Необходимо показать его название на экран." << endl;
		cout << "0. Выход" << endl;
		cout << "\n Введите номер задачи: ";
		cin >> input_task;
		system("cls");

		switch (input_task)
		{
		case 1:
			cout << "Сколько человек посетило спортзал за день: ";
			cin >> visitor;
			for (int i = 1; i <= visitor; i++) {
				cout << "Введите возраст " << i << " поситетеля: ";
				cin >> input_age;
				if (max_age < input_age) {
					max_age = input_age;
				}
				if (min_age > input_age) {
					min_age = input_age;
				}
				mid_age += input_age;
			}
			cout << "Максимальный возраст посетителей равен - " << max_age << endl;
			cout << "Средний возраст посетителей равен - " << mid_age / visitor << endl;
			cout << "Минимальный возраст посетителей равен - " << min_age << endl;
			break;
		case 2:
			cout << "Введите порядковый номер недели, чтобы узнать свой план: ";
			cin >> num_2;
			switch (num_2)
			{
			case 1:
				cout << "Понедельник: 9:00 Колледж" << endl << "19:00 Подработка" << endl;
				break;
			case 2:
				cout << "Вторник: " << endl << "9:00 Колледж" << endl;
				break;
			case 3:
				cout << "Среда: " << endl << "9:00 Колледж" << endl << "19:00 Подработка" << endl;
				break;
			case 4:
				cout << "Четверг: " << endl << "9:00 Колледж" << endl << "19:00 Подработка" << endl;
				break;
			case 5:
				cout << "Пятница: " << endl << "9:00 Колледж" << endl << "19:00 Подработка" << endl;
				break;
			case 6:
				cout << "Суббота: " << endl << "Ничего" << endl;
				break;
			case 7:
				cout << "Четверг: " << endl << "Ничего" << endl;
				break;
			default:
				cout << "Неправельный ввод" << endl;
				break;
			}
			break;
		case 3:
			cout << "Сколько человек посетило спортзал за день: ";
			cin >> station;
			switch (station)
			{
			case 'a':
			case 'A':
				cout << "Станция метро А" << endl;
				break;
			case 'b':
			case 'B':
				cout << "Станция метро B" << endl;
				break;
			case 'c':
			case 'C':
				cout << "Станция метро C" << endl;
				break;
			case 'd':
			case 'D':
				cout << "Станция метро D" << endl;
				break;
			case 'e':
			case 'E':
				cout << "Станция метро E" << endl;
				break;
			default:
				cout << "Вы ввели несуществующую станцию";
				break;
			}
			break;
		case 4:
			cout << "Введите 2 числа: ";
			cin >> num_1_4 >> num_2_4;
			cout << "Введите ответ данного примера: " << num_1_4 << " * " << num_2_4 << " = ";
			cin >> answer_user;
			answer_user == num_1_4 * num_2_4 ? cout << "Вы ввели правельный ответ" : cout << "Вы ввели неверный ответ. Правильный ответ - " << num_1_4 * num_2_4;

			break;
		case 5:
			cout << "Введите номер пальца руки" << endl;
			cin >> num_5;
			switch (num_5) {
			case 1:
				cout << "Это мизинец";
				break;
			case 2:
				cout << "Это безымянный";
				break;
			case 3:
				cout << "Это средний";
				break;
			case 4:
				cout << "Это указательный";
				break;
			case 5:
				cout << "Это большой";
				break;
			default:
				cout << "Сколько у вас вообще пальцев на руке???";
			}
			break;
		case 0:
			system("cls");
			work = false;
			cout << "Программа завершина";
			break;
		default:
			break;
		}
		while (1) {
			cout << "\nПродолжить(y/n)";
			cin >> input_resume;
			if (input_resume == 'y') {
				system("cls");
				break;
			}
			else if (input_resume == 'n') {
				work = false;
				break;
			}
			else {
				system("cls");
				continue;
			}
		}
	}
}
