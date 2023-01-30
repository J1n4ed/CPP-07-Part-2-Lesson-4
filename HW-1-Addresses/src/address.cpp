// address.cpp

/*
���������� ������� ������ Address �� ������������� ����� address.h
*/

#include "address.h"
#include <iostream>

namespace jinx 
{	
	/*
	������� ������ ������ � �������� �������
	*/
	void jinx::Address::print_address()
	{
		/*
		�������� ������ ������ ������:
		<�������� ������>, <�������� �����>, <����� ����>, <����� ��������>
		�����������, ����, 85, 64
		*/

		std::cout << this->city_ << ", " << this->street_ << ", " << this->building_ << ", " << this->appartment_;
	} // END OF print_address()

	// �������

	/*
	������� ������ ��� �������� ������
	�� ���� ��������� �������� string
	*/
	bool jinx::Address::set_city(std::string city)
	{
		city_ = city;
		return EXIT_SUCCESS;
	} // END OF set_city(std::string city)

	/*
	������� ������ ��� �������� �����
	�� ���� ��������� �������� string
	*/
	bool jinx::Address::set_street(std::string street)
	{
		street_ = street;
		return EXIT_SUCCESS;
	} // END OF set_street(std::string street)

	/*
	������� ������ ��� ������ ������
	�� ���� ��������� �������� int
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
	������� ������ ��� ������ ��������
	�� ���� ��������� �������� int 
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
	������� ������ ��� ����� ������
	�� ���� ��������� ���������
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

	// �������

	/*
	������� ������ �������� ������
	���������� �������� string
	*/
	std::string jinx::Address::get_city()
	{
		return city_;
	} // END OF get_city()

	/*
	������� ������ �������� �����
	���������� �������� string
	*/
	std::string jinx::Address::get_street()
	{
		return street_;
	} // END OF get_street()

	/*
	������� ������ ������ ������
	���������� �������� int
	*/
	int jinx::Address::get_building()
	{
		return building_;
	} // END OF get_building()

	/*
	������� ������ ������ ��������
	���������� �������� int
	*/
	int jinx::Address::get_appartment()
	{
		return appartment_;
	} // END OF get_appartment()

} /* END OF NAMESPACE JINX */