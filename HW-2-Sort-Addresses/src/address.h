// address.h

/*
������������ ���� ������ Address ��� �������� ������ �� �������
���������� ������� ������ � ����� address.cpp
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

		// ��������� ������ ----------------

		/*
		������� ������ ������ � �������� �������
		*/
		void print_address();

		/*
		������� ������ ��� �������� ������
		�� ���� ��������� �������� string
		*/
		bool set_city(std::string);

		/*
		������� ������ ��� �������� �����
		�� ���� ��������� �������� string
		*/
		bool set_street(std::string);

		/*
		������� ������ ��� ������ ������
		�� ���� ��������� �������� int
		*/
		bool set_building(int);

		/*
		������� ������ ��� ������ ��������
		�� ���� ��������� �������� int 
		*/
		bool set_appartment(int);

		/*
		������� ������ ��� ����� ������
		�� ���� ��������� ���������
		- string city
		- string street
		- int building
		- int appartment
		*/
		bool set_address(std::string, std::string, int, int);

		// �������

		/*
		������� ������ �������� ������
		���������� �������� string
		*/
		std::string get_city();

		/*
		������� ������ �������� �����
		���������� �������� string
		*/
		std::string get_street();

		/*
		������� ������ ������ ������
		���������� �������� int
		*/
		int get_building();

		/*
		������� ������ ������ ��������
		���������� �������� int
		*/
		int get_appartment();

		/* ������������ � ����������� */

		// ����������� �� ��������� off
		Address() = delete;

		// ���������� � �����������
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