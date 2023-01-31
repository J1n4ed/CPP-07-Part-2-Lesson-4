// main.cpp

/*
  30.01.2023
  ���� 2, ������� 4
  ������ 1, ������
  CPP-07
  @j1n4ed
*/

/* includes ------------- */
#include "src/address.h"
#include <fstream>
#include <iostream>
#include <Windows.h>
#include <vector>
#include <string>
/* ---------------------- */

int main(int argc, char** argv)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// ������� ���������� �������
	int numberOfEntrees = 0;

	// ����� ��� ������ �� ����� in.txt
	std::ifstream reader;
	reader.open("in.txt", std::ios::in);

	// ����� ��� ������ � ���� out.txt
	std::ofstream wrighter;
	wrighter.open("out.txt", std::ios::out);

	// ������ ������� ��� �������� ������� ������� �� �����
	std::vector<jinx::Address> addressBook;

	if ( reader.is_open() && wrighter.is_open() )
	{

		// ���������� ��� ������
		std::string line;
		std::getline(reader, line);
		numberOfEntrees = std::stoi(line);

		if ( numberOfEntrees > 0 )
		{
			// ���������� ��� ������
			std::string city; 
			std::string street;  
			int building;  
			int appartment;  

			// �������� ��� ������ ������
			int counter = 0;

			// ������� ���������� ��� ������ �� ������
			int exitCount = numberOfEntrees * 5;
			
			// ---------------------

			// while (!reader.eof())
			while (exitCount)	// ������ ���� exitCount > 0
			{
				counter++;		
				exitCount--;

				switch ( counter )
				{
				case 1:
					std::getline(reader, line);					
					city = line;
					break;
				case 2:
					std::getline(reader, line);					
					street = line;					
					break;
				case 3:
					std::getline(reader, line);					
					building = std::stoi(line);					
					break;
				case 4:
					std::getline(reader, line);					
					appartment = std::stoi(line);									
					break;
				case 5:
					counter = 0;
					jinx::Address tempAddress(city, street, building, appartment);
					addressBook.push_back(tempAddress);	
					break;
				}				
					
			} // end of while ( std::getline(reader, line) )	

			// jinx::Address tempAddress(city, street, building, appartment);
			// addressBook.push_back(tempAddress);			}

			// ------------------------------------

			wrighter << numberOfEntrees << '\n';

			// Printing results to console
			std::cout << "���������� ������ �� �����: \n\n";
			for (int i = 0; i < numberOfEntrees; ++i)
			{
				addressBook[i].print_address();
				std::cout << std::endl;				
			}

			// ������ � ���� out.txt
			for (int i = numberOfEntrees - 1; i >= 0; i--)
			{
				wrighter	<< addressBook[i].get_city() << ", "
							<< addressBook[i].get_street() << ", "
							<< addressBook[i].get_building() << ", "
							<< addressBook[i].get_appartment() << "\n";
			}

		} // end of if (numberOfEntrees > 0)

		reader.close();
		wrighter.close();

	} // end of if ( reader.is_open() )
	else
	{
		std::cout << "ERROR OPENING FILES!" << std::endl;
		system("pause");
		return EXIT_FAILURE;
	}	

	addressBook.clear();

	std::cout << std::endl;

	system("pause");
	return EXIT_SUCCESS;
} /*END OF MAIN() ------------------*/