// address.h

/*
Заголовочный файл класса Address для хранения данных об адресах
Реализация функция класса в файле address.cpp
*/

#ifndef ADDRESSH
#define ADDRESSH

#include <string>

namespace jinx
{

	class Address
	{
	// PUBLIC ----------------------------------- //
	public:

		// Публичные методы ----------------

		/*
		Функция вывода адреса в заданном формате
		*/
		void print_address();

		/*
		Функция сеттер для названия города
		На вход принимает параметр string
		*/
		bool set_city(std::string);

		/*
		Функция сеттер для названия улицы
		На вход принимает параметр string
		*/
		bool set_street(std::string);

		/*
		Функиця сеттер для номера здания
		На вход принимает параметр int
		*/
		bool set_building(int);

		/*
		Функция сеттер для номера квартиры
		На вход принимает параметр int 
		*/
		bool set_appartment(int);

		/*
		Функция сеттер для всего адреса
		На вход принимает параметры
		- string city
		- string street
		- int building
		- int appartment
		*/
		bool set_address(std::string, std::string, int, int);

		// геттеры

		/*
		Функция геттер названия города
		Возвращает значение string
		*/
		std::string get_city();

		/*
		Функция геттер названия улицы
		Возвращает значение string
		*/
		std::string get_street();

		/*
		Функция геттер номера здания
		Возвращает значение int
		*/
		int get_building();

		/*
		Функция геттер номера квартиры
		Возвращает значение int
		*/
		int get_appartment();

		/* Конструкторы и деструкторы */

		// Конструктор по умолчанию off
		Address() = delete;

		// Консруктор с аргументами
		Address(std::string city, std::string street, int building, int appartment)
		{
			city_ = city;

			street_ = street;

			if (building > 0)
				building_ = building;
			else
				building_ = 0;

			if (appartment > 0)
				appartment_ = appartment;
			else
				appartment_ = 0;
		}

		~Address() {}

	// PRIVATE ---------------------------------- //
	private:
		std::string city_;
		std::string street_;
		int building_;
		int appartment_;

	}; /* END OF CLASS Address */

} /* END OF NAMESPACE JINX */

#endif // ADDRESSH