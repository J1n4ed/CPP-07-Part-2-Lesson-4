// address.cpp

/*
Реализация функция класса Address из заголовочного файла address.h
*/

#include "address.h"
#include <iostream>

namespace jinx 
{	
	/*
	Функция вывода адреса в заданном формате
	*/
	void jinx::Address::print_address()
	{
		/*
		Заданный формат вывода адреса:
		<название города>, <название улицы>, <номер дома>, <номер квартиры>
		Новосибирск, Мира, 85, 64
		*/

		std::cout << this->city_ << ", " << this->street_ << ", " << this->building_ << ", " << this->appartment_;
	} // END OF print_address()

	// сеттеры

	/*
	Функция сеттер для названия города
	На вход принимает параметр string
	*/
	bool jinx::Address::set_city(std::string city)
	{
		city_ = city;
		return EXIT_SUCCESS;
	} // END OF set_city(std::string city)

	/*
	Функция сеттер для названия улицы
	На вход принимает параметр string
	*/
	bool jinx::Address::set_street(std::string street)
	{
		street_ = street;
		return EXIT_SUCCESS;
	} // END OF set_street(std::string street)

	/*
	Функиця сеттер для номера здания
	На вход принимает параметр int
	*/
	bool jinx::Address::set_building(int building)
	{
		if (building > 0)
		{ 
			building_ = building;
			return EXIT_SUCCESS;
		} // end if
		else
		{
			return EXIT_FAILURE;
		} // end else
	} // END OF set_building(int building)

	/*
	Функция сеттер для номера квартиры
	На вход принимает параметр int 
	*/
	bool jinx::Address::set_appartment(int appartment)
	{
		if (appartment > 0)
		{
			appartment_ = appartment;
			return EXIT_SUCCESS;
		} // end if
		else
		{
			return EXIT_FAILURE;
		} // end else
	} // END OF set_appartment(int appartment)

	/*
	Функция сеттер для всего адреса
	На вход принимает параметры
	- string city
	- string street
	- int building
	- int appartment
	*/
	bool jinx::Address::set_address(std::string city, std::string street, int building, int appartment)
	{
		if ( (building > 0) && (appartment > 0) )
		{ 
			city_ = city;
			street_ = street;
			building_ = building;
			appartment_ = appartment;
			return EXIT_SUCCESS;
		} // end if
		else
		{
			return EXIT_FAILURE;
		} // end else
	} // END OF set_address(std::string city, std::string street, int building, int appartment)

	// геттеры

	/*
	Функция геттер названия города
	Возвращает значение string
	*/
	std::string jinx::Address::get_city()
	{
		return city_;
	} // END OF get_city()

	/*
	Функция геттер названия улицы
	Возвращает значение string
	*/
	std::string jinx::Address::get_street()
	{
		return street_;
	} // END OF get_street()

	/*
	Функция геттер номера здания
	Возвращает значение int
	*/
	int jinx::Address::get_building()
	{
		return building_;
	} // END OF get_building()

	/*
	Функция геттер номера квартиры
	Возвращает значение int
	*/
	int jinx::Address::get_appartment()
	{
		return appartment_;
	} // END OF get_appartment()

} /* END OF NAMESPACE JINX */