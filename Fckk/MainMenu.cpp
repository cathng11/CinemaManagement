#include "DBHelper.h"
#include "PHONGCHIEU.h"
#include "BOPHIM.h"
#include "LICHCHIEU.h"
#include "VEPHIM.h"
#include "LinkedList.h"
#include <conio.h>
#include <string>
#include <iomanip>
#include <iostream>
#pragma comment(linker, "/STACK:200000")
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4101)
using namespace std;

char* StringToChar(string s)
{
	int n=s.length() + 1 ;
	char* convert = new char[n];
	strcpy_s(convert,n, s.c_str());
	return convert;
}

void menu1_1()
{
	cout << "\t\t\t\t\t\t\t";
	for (int i = 0; i <= 40; i++) cout << "*";
	cout << " ADMINISTRATOR MENU ";
	for (int i = 0; i <= 40; i++) cout << "*";
	cout << endl;
	cout << "\t\t\t\t\t\t\t" << "Press the bottom 'up arrow'->to go up, 'down arrow'->to go down, 'right arrow'->to extend" << endl;
	cout << "\t\t\t\t\t\t\t" << "> Table 1: Movie" << endl;
	cout << "\t\t\t\t\t\t\t" << "Table 2: Showtimes" << endl;
	cout << "\t\t\t\t\t\t\t" << "Table 3: Room" << endl;
	cout << "\t\t\t\t\t\t\t" << "Table 4: Ticket" << endl;
	cout << "\t\t\t\t\t\t\t" << "Choose 5: Log out" << endl;
	cout << "\t\t\t\t\t\t\t";
	for (int i = 0; i <= 101; i++) cout << "*";
	cout << endl;
}

void menu1_2()
{
	cout << "\t\t\t\t\t\t\t";
	for (int i = 0; i <= 40; i++) cout << "*";
	cout << " ADMINISTRATOR MENU ";
	for (int i = 0; i <= 40; i++) cout << "*";
	cout << endl;
	cout << "\t\t\t\t\t\t\t" << "Press the bottom 'up arrow'->to go up, 'down arrow'->to go down, 'right arrow'->to extend" << endl;
	cout << "\t\t\t\t\t\t\t" << "Table 1: Movie" << endl;
	cout << "\t\t\t\t\t\t\t" << "> Table 2: Showtimes" << endl;
	cout << "\t\t\t\t\t\t\t" << "Table 3: Room" << endl;
	cout << "\t\t\t\t\t\t\t" << "Table 4: Ticket" << endl;
	cout << "\t\t\t\t\t\t\t" << "Choose 5: Log out" << endl;
	cout << "\t\t\t\t\t\t\t";
	for (int i = 0; i <= 101; i++) cout << "*";
	cout << endl;
}

void menu1_3()
{
	cout << "\t\t\t\t\t\t\t";
	for (int i = 0; i <= 40; i++) cout << "*";
	cout << " ADMINISTRATOR MENU ";
	for (int i = 0; i <= 40; i++) cout << "*";
	cout << endl;
	cout << "\t\t\t\t\t\t\t" << "Press the bottom 'up arrow'->to go up, 'down arrow'->to go down, 'right arrow'->to extend" << endl;
	cout << "\t\t\t\t\t\t\t" << "Table 1: Movie" << endl;
	cout << "\t\t\t\t\t\t\t" << "Table 2: Showtimes" << endl;
	cout << "\t\t\t\t\t\t\t" << "> Table 3: Room" << endl;
	cout << "\t\t\t\t\t\t\t" << "Table 4: Ticket" << endl;
	cout << "\t\t\t\t\t\t\t" << "Choose 5: Log out" << endl;
	cout << "\t\t\t\t\t\t\t";
	for (int i = 0; i <= 101; i++) cout << "*";
	cout << endl;
}

void menu1_4()
{
	cout << "\t\t\t\t\t\t\t";
	for (int i = 0; i <= 40; i++) cout << "*";
	cout << " ADMINISTRATOR MENU ";
	for (int i = 0; i <= 40; i++) cout << "*";
	cout << endl;
	cout << "\t\t\t\t\t\t\t" << "Press the bottom 'up arrow'->to go up, 'down arrow'->to go down, 'right arrow'->to extend" << endl;
	cout << "\t\t\t\t\t\t\t" << "Table 1: Movie" << endl;
	cout << "\t\t\t\t\t\t\t" << "Table 2: Showtimes" << endl;
	cout << "\t\t\t\t\t\t\t" << "Table 3: Room" << endl;
	cout << "\t\t\t\t\t\t\t" << "> Table 4: Ticket" << endl;
	cout << "\t\t\t\t\t\t\t" << "Choose 5: Log out" << endl;
	cout << "\t\t\t\t\t\t\t";
	for (int i = 0; i <= 101; i++) cout << "*";
	cout << endl;
}

void menu1_5()
{
	cout << "\t\t\t\t\t\t\t";
	for (int i = 0; i <= 40; i++) cout << "*";
	cout << " ADMINISTRATOR MENU ";
	for (int i = 0; i <= 40; i++) cout << "*";
	cout << endl;
	cout << "\t\t\t\t\t\t\t" << "Press the bottom 'up arrow'->to go up, 'down arrow'->to go down, 'right arrow'->to extend" << endl;
	cout << "\t\t\t\t\t\t\t" << "Table 1: Movie" << endl;
	cout << "\t\t\t\t\t\t\t" << "Table 2: Showtimes" << endl;
	cout << "\t\t\t\t\t\t\t" << "Table 3: Room" << endl;
	cout << "\t\t\t\t\t\t\t" << "Table 4: Ticket" << endl;
	cout << "\t\t\t\t\t\t\t" << "> Choose 5: Log out" << endl;
	cout << "\t\t\t\t\t\t\t";
	for (int i = 0; i <= 101; i++) cout << "*";
	cout << endl;
}

void menu2_1()
{
	cout << "\t\t\t\t\t\t\t" << "Press the bottom 'up arrow'->to go up, 'down arrow'->to go down, 'right arrow'->to extend" << endl;
	cout << "\t\t\t\t\t\t\t" << "> 1. Select" << endl;
	cout << "\t\t\t\t\t\t\t" << "2. Insert" << endl;
	cout << "\t\t\t\t\t\t\t" << "3. Update" << endl;
	cout << "\t\t\t\t\t\t\t" << "4. Delete" << endl;
	cout << "\t\t\t\t\t\t\t" << "5. Go back" << endl;
}

void menu2_2()
{
	cout << "\t\t\t\t\t\t\t" << "Press the bottom 'up arrow'->to go up, 'down arrow'->to go down, 'right arrow'->to extend" << endl;
	cout << "\t\t\t\t\t\t\t" << "1. Select" << endl;
	cout << "\t\t\t\t\t\t\t" << "> 2. Insert" << endl;
	cout << "\t\t\t\t\t\t\t" << "3. Update" << endl;
	cout << "\t\t\t\t\t\t\t" << "4. Delete" << endl;
	cout << "\t\t\t\t\t\t\t" << "5. Go back" << endl;
}

void menu2_3()
{
	cout << "\t\t\t\t\t\t\t" << "Press the bottom 'up arrow'->to go up, 'down arrow'->to go down, 'right arrow'->to extend" << endl;
	cout << "\t\t\t\t\t\t\t" << "1. Select" << endl;
	cout << "\t\t\t\t\t\t\t" << "2. Insert" << endl;
	cout << "\t\t\t\t\t\t\t" << "> 3. Update" << endl;
	cout << "\t\t\t\t\t\t\t" << "4. Delete" << endl;
	cout << "\t\t\t\t\t\t\t" << "5. Go back" << endl;
}

void menu2_4()
{
	cout << "\t\t\t\t\t\t\t" << "Press the bottom 'up arrow'->to go up, 'down arrow'->to go down, 'right arrow'->to extend" << endl;
	cout << "\t\t\t\t\t\t\t" << "1. Select" << endl;
	cout << "\t\t\t\t\t\t\t" << "2. Insert" << endl;
	cout << "\t\t\t\t\t\t\t" << "3. Update" << endl;
	cout << "\t\t\t\t\t\t\t" << "> 4. Delete" << endl;
	cout << "\t\t\t\t\t\t\t" << "5. Go back" << endl;
}

void menu2_5()
{
	cout << "\t\t\t\t\t\t\t" << "Press the bottom 'up arrow'->to go up, 'down arrow'->to go down, 'right arrow'->to extend" << endl;
	cout << "\t\t\t\t\t\t\t" << "1. Select" << endl;
	cout << "\t\t\t\t\t\t\t" << "2. Insert" << endl;
	cout << "\t\t\t\t\t\t\t" << "3. Update" << endl;
	cout << "\t\t\t\t\t\t\t" << "4. Delete" << endl;
	cout << "\t\t\t\t\t\t\t" << "> 5. Go back" << endl;
}

void show_movie()
{
	cout << "\t\t\t\t\t\t\t";
	cout << "Show DataList " << endl;
	cout << "\n" << endl;
	cout << "\t\t\t\t\t"; cout << "\t\t\t\t\t\t\t";
	cout << "     MOVIE ";
	cout << endl;
	cout << "\t\t\t\t\t";
	for (int i = 0; i <= 131; i++) cout << "-";
	cout << endl;
	cout << "\t\t\t\t\t";
	cout << "|" <<setfill(' ')<< left << setw(20) << "Movie number" << setw(20) << "Name" << setw(30) << "Movie type" << setw(20) << "Movie duration" << setw(20) << "Movie status" << setw(20) << "Movie format" << "|" << endl;
	cout << "\t\t\t\t\t"; for (int i = 0; i <= 131; i++) cout << "-";
}

void show_schedule()
{
	cout << "\t\t\t\t\t\t\t";
	cout << "Show DataList " << endl;
	cout << "\n" << endl;
	cout << "\t\t\t\t\t"; cout << "\t\t\t\t\t\t\t";
	cout << "    SHOWTIMES ";
	cout << endl;
	cout << "\t\t\t\t\t\t\t";
	for (int i = 0; i <= 96; i++) cout << "-";
	cout << endl;
	cout << "\t\t\t\t\t\t\t";
	cout << "|" << setfill(' ') << left << setw(20) << "Showtimes number" << setfill(' ') << setw(20) << "Room number" << setfill(' ') << setfill(' ') << setw(20) << "Movie number" << setfill(' ') << setw(18) << "Show date" << right << setfill(' ') << setw(17) << "Show time" << "|" << endl;
	cout << "\t\t\t\t\t\t\t"; for (int i = 0; i <= 96; i++) cout << "-";
}

void show_room()
{
	cout << "\t\t\t\t\t\t\t";
	cout << "Show DataList " << endl;
	cout << "\n" << endl;
	cout << "\t\t\t\t\t"; cout << "\t\t\t\t\t\t\t";
	cout << "     ROOM ";
	cout << endl;
	cout << "\t\t\t\t\t\t\t\t\t";
	for (int i = 0; i <= 61; i++) cout << "-";
	cout << endl;
	cout << "\t\t\t\t\t\t\t\t\t";
	cout << "|" << setfill(' ') << left << setw(20) << "Room number" << setfill(' ') << setw(20) << "Room name" << setfill(' ') << setfill(' ') << setw(20) << "Number of seat" << "|" << endl;
	cout << "\t\t\t\t\t\t\t\t\t"; for (int i = 0; i <= 61; i++) cout << "-";
}

void show_ticket()
{
	cout << "\t\t\t\t\t\t\t";
	cout << "Show DataList " << endl;
	cout << "\n" << endl;
	cout << "\t\t\t\t\t"; cout << "\t\t\t\t\t\t\t";
	cout << "      TICKET ";
	cout << endl;
	cout << "\t\t\t\t\t\t\t";
	for (int i = 0; i <= 103; i++) cout << "-";
	cout << endl;
	cout << "\t\t\t\t\t\t\t";
	cout << "|" << setfill(' ') << left << setw(15) << "Seat number" << setfill(' ') << setw(20) << "Showtimes number" << setfill(' ') << setw(15) << "Ticket format" << setfill(' ') << setw(15) << "Ticket type" << setfill(' ') << right << setw(7) << "Price" << "|" << endl;
	cout << "\t\t\t\t\t\t\t"; for (int i = 0; i <= 103; i++) cout << "-";
}

void show_tableroom()
{
	cout << "\t\t\t\t\t\t\t";
	for (int i = 0; i <= 41; i++) cout << "*";
	cout << " TABLE ROOM ";
	for (int i = 0; i <= 41; i++) cout << "*";
	cout << endl;
	menu2_1();
	cout << "\t\t\t\t\t\t\t";
	for (int i = 0; i <= 96; i++) cout << "*";
	cout << endl;
}

void show_tablemovie()
{
	cout << "\t\t\t\t\t\t\t";
	for (int i = 0; i <= 41; i++) cout << "*";
	cout << " TABLE MOVIE ";
	for (int i = 0; i <= 41; i++) cout << "*";
	cout << endl;
	menu2_1();
	cout << "\t\t\t\t\t\t\t";
	for (int i = 0; i <= 96; i++) cout << "*";
	cout << endl;
}

void show_tableschedule()
{
	cout << "\t\t\t\t\t\t\t";
	for (int i = 0; i <= 41; i++) cout << "*";
	cout << " TABLE SHOWTIMES ";
	for (int i = 0; i <= 41; i++) cout << "*";
	cout << endl;
	menu2_1();
	cout << "\t\t\t\t\t\t\t";
	for (int i = 0; i <= 96; i++) cout << "*";
	cout << endl;
}

void show_tableticket()
{
	cout << "\t\t\t\t\t\t\t";
	for (int i = 0; i <= 41; i++) cout << "*";
	cout << " TABLE TICKET ";
	for (int i = 0; i <= 41; i++) cout << "*";
	cout << endl;
	menu2_1();
	cout << "\t\t\t\t\t\t\t";
	for (int i = 0; i <= 96; i++) cout << "*";
	cout << endl;
}

void SelectMovie()
{
	{
		int count2 = 1;
		system("cls");
		cout << "\t\t\t\t\t\t\t";
		for (int i = 0; i <= 41; i++) cout << "*";
		cout << " TABLE MOVIE ";
		for (int i = 0; i <= 41; i++) cout << "*";
		cout << endl;
		menu2_1();
		cout << "\t\t\t\t\t\t\t";
		for (int i = 0; i <= 96; i++) cout << "*";
		int out2 = 0;
		while (out2 == 0) {
			int change = 0;
			char ch2 = _getch();
			if (ch2 == -32) {
				ch2 = _getch();
				if (ch2 == 72) { if ((count2 > 1) && (count2 <= 5)) --count2; else if (count2 == 1) count2 = 5; }
				if (ch2 == 80) { if ((count2 >= 1) && (count2 < 5)) ++count2; else if (count2 == 5) count2 = 1; }
				if (ch2 == 77) { change++; }
				switch (count2)
				{
				case 1: {system("cls");
					cout << "\t\t\t\t\t\t\t";
					for (int i = 0; i <= 41; i++) cout << "*";
					cout << " TABLE MOVIE ";
					for (int i = 0; i <= 41; i++) cout << "*";
					cout << endl;
					menu2_1();
					cout << "\t\t\t\t\t\t\t";
					for (int i = 0; i <= 96; i++) cout << "*";
					cout << endl;
					if (change != 0)
					{

						DBHelper database;
						database.init();
						BOPHIM* bp = database.getbp(database.count);

						LinkedList<BOPHIM> data_list;
						for (int i = database.count - 1; i >= 0; i--)
						{
							data_list.InsertFront(*(bp + i));
						}
						NodeData<BOPHIM>* p_head = data_list.head();
						if (p_head != NULL)
						{
							NodeData<BOPHIM>* temp = p_head;
							show_movie();
							data_list.PrintList(temp);
						}
						cout << "\n\n";
						cout << "\t\t\t\t\t\t\t" << "Please press the bottom 'up arrow'->to continue !" << endl;
					}
					break;
				}
				case 2: {system("cls");
					cout << "\t\t\t\t\t\t\t";
					for (int i = 0; i <= 41; i++) cout << "*";
					cout << " TABLE MOVIE ";
					for (int i = 0; i <= 41; i++) cout << "*";
					cout << endl;
					menu2_2();
					cout << "\t\t\t\t\t\t\t";
					for (int i = 0; i <= 96; i++) cout << "*";
					cout << endl;
					if (change != 0)
					{
						DBHelper database;
						database.init();
						BOPHIM* bp = database.getbp(database.count);

						LinkedList<BOPHIM> data_list;
						for (int i = database.count - 1; i >= 0; i--)
						{
							data_list.InsertFront(*(bp + i));
						}
						NodeData<BOPHIM>* p_head = data_list.head();
						if (p_head != NULL)
						{
							NodeData<BOPHIM>* temp = p_head;
							show_movie();
							data_list.PrintList(temp);
						}
						cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
						cout << "\t======!!Insert!!======" << endl;
						BOPHIM bophimInsert;
						cout << "\t\t\t\t\t\t\t";

						bophimInsert.scanbp();
						data_list.InsertFront(bophimInsert);

						NodeData<BOPHIM>* p_head1 = data_list.head();
						if (p_head1 != NULL)
						{
							NodeData<BOPHIM>* tempp = p_head1;
							system("cls");
							show_tablemovie();
							cout << "\t\t\t\t\t\t\t";
							cout << "After Inserting: " << endl;
							cout << "\n";
							show_movie();
							data_list.PrintList(tempp);
						}


						string TLP = to_string(bophimInsert.getThoiLuongPhim());
						string bpisf = "INSERT INTO BOPHIM VALUES (";

						bpisf = bpisf + "'" + bophimInsert.getMSPhim()
							+ "','" + bophimInsert.getTenPhim()
							+ "','" + bophimInsert.getTheLoaiPhim()
							+ "','" + TLP
							+ "','" + bophimInsert.getDinhDangPhim()
							+ "','" + bophimInsert.getTrangThaiPhim() + "')";

						database.ExecuteQuery(StringToChar(bpisf));
						database.close();
						cout << "\n\n";
						cout << "\t\t\t\t\t\t\t" << "Please press the bottom 'up arrow'->to continue !" << endl;

					}
					break;
				}
				case 3: {system("cls");
					cout << "\t\t\t\t\t\t\t";
					for (int i = 0; i <= 41; i++) cout << "*";
					cout << " TABLE MOVIE ";
					for (int i = 0; i <= 41; i++) cout << "*";
					cout << endl;
					menu2_3();
					cout << "\t\t\t\t\t\t\t";
					for (int i = 0; i <= 96; i++) cout << "*";
					cout << endl;
					if (change != 0)
					{
						DBHelper database;
						database.init();
						BOPHIM* bp = database.getbp(database.count);

						LinkedList<BOPHIM> data_list;
						for (int i = database.count - 1; i >= 0; i--)
						{
							data_list.InsertFront(*(bp + i));
						}
						NodeData<BOPHIM>* p_head = data_list.head();
						if (p_head != NULL)
						{
							NodeData<BOPHIM>* temp = p_head;
							show_movie();
							data_list.PrintList(temp);
						}
						cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
						cout << "\t======!!Update!!======" << endl;
						BOPHIM bophimUpdate;
						int pos; 
						do
						{
							cout << "\t\t\t\t\t\t\t";
							cout << "Enter the positions you wanna Update: ";
							cin >> pos;

						} while (pos <= 0 || pos > database.count);

						cout << endl; cout << "\t\t\t\t\t\t\t";
						cout << "Enter the new values: ";
						bophimUpdate.scanbp();
						data_list.Update(bophimUpdate, --pos);
						system("cls");
						show_tablemovie();
						cout << "\t\t\t\t\t\t\t";
						cout << "After Updating: " << endl;
						cout << "\n";
						show_movie();
						data_list.PrintList(data_list.head());

						string TLP = to_string(bophimUpdate.getThoiLuongPhim());

						string bpup = "alter table LICHCHIEU nocheck constraint[FK__LICHCHIEU__MSPhi__3C69FB99];  ";

						bpup = bpup + "update LICHCHIEU set MSPhim = '" + bophimUpdate.getMSPhim() + "' where MSPhim = '" + (*(bp + pos)).getMSPhim() + "';  ";
						bpup = bpup + "update BOPHIM set MSPhim = '" + bophimUpdate.getMSPhim()
							+ "', TenPhim='" + bophimUpdate.getTenPhim()
							+ "', TheLoaiPhim = '" + bophimUpdate.getTheLoaiPhim()
							+ "', ThoiLuongPhim = '" + TLP
							+ "', DinhDangPhim = '" + bophimUpdate.getDinhDangPhim()
							+ "', TrangThaiPhim = '" + bophimUpdate.getTrangThaiPhim() + "' "
							+ "WHERE MSPhim = '" + (*(bp + pos)).getMSPhim() + "';  ";

						bpup = bpup + "alter table LICHCHIEU check constraint[FK__LICHCHIEU__MSPhi__3C69FB99];  ";

						database.ExecuteQuery(StringToChar(bpup));
						database.close();
						cout << "\n\n";
						cout << "\t\t\t\t\t\t\t" << "Please press the bottom 'up arrow'->to continue !" << endl;
					}
					break;
				}
				case 4: {system("cls");
					cout << "\t\t\t\t\t\t\t";
					for (int i = 0; i <= 41; i++) cout << "*";
					cout << " TABLE MOVIE ";
					for (int i = 0; i <= 41; i++) cout << "*";
					cout << endl;
					menu2_4();
					cout << "\t\t\t\t\t\t\t";
					for (int i = 0; i <= 96; i++) cout << "*";
					cout << endl;
					if (change != 0)
					{
						DBHelper database;
						database.init();
						BOPHIM* bp = database.getbp(database.count);

						LinkedList<BOPHIM> data_list;
						for (int i = database.count - 1; i >= 0; i--)
						{
							data_list.InsertFront(*(bp + i));
						}
						NodeData<BOPHIM>* p_head = data_list.head();
						if (p_head != NULL)
						{
							NodeData<BOPHIM>* temp = p_head;
							show_movie();
							data_list.PrintList(temp);
						}
						cout << "\n\t\t\t\t\t\t\t\t\t";
						cout << "\t======!!Delete!!======" << endl;
						int posDelete; 
						do
						{
							cout << "\t\t\t\t\t\t\t";
							cout << "Enter the position you wanna Delete: ";
							cin >> posDelete;

						} while (posDelete <= 0 || posDelete > database.count);

						data_list.DeleteNode(--posDelete);
						system("cls");
						show_tablemovie();
						cout << "\t\t\t\t\t\t\t";
						cout << "After Deleting: " << endl;
						cout << "\n";
						show_movie();
						data_list.PrintList(data_list.head());

						string bpdl = "alter table LICHCHIEU nocheck constraint [FK__LICHCHIEU__MSPhi__3C69FB99];   ";
						bpdl = bpdl + "alter table VEPHIM nocheck constraint [FK__VEPHIM__MSLich__3F466844];   ";
						bpdl = bpdl + " Delete from LICHCHIEU where MSPhim = '" + (*(bp + posDelete)).getMSPhim() + "';   ";
						bpdl = bpdl + " Delete from BOPHIM where MSPhim = '" + (*(bp + posDelete)).getMSPhim() + "';   ";
						bpdl = bpdl + "alter table LICHCHIEU check constraint [FK__LICHCHIEU__MSPhi__3C69FB99];   ";
						bpdl = bpdl + "alter table VEPHIM check constraint [FK__VEPHIM__MSLich__3F466844];  ";
						
						database.ExecuteQuery(StringToChar(bpdl));
						database.close();

						cout << "\n\n";
						cout << "\t\t\t\t\t\t\t" << "Please press the bottom 'up arrow'->to continue !" << endl;
					}
					break;
				}
				case 5: {system("cls");
					cout << "\t\t\t\t\t\t\t";
					for (int i = 0; i <= 41; i++) cout << "*";
					cout << " TABLE MOVIE ";
					for (int i = 0; i <= 41; i++) cout << "*";
					cout << endl;
					menu2_5();
					cout << "\t\t\t\t\t\t\t";
					for (int i = 0; i <= 96; i++) cout << "*";
					if (change != 0) {
						out2++; system("cls"); menu1_1();

					}
					cout << "\n\n";
					cout << "\t\t\t\t\t\t\t" << "Please press the bottom 'up arrow'->to continue !" << endl;

					break;
				}
				}
			}
		}
	}
}

void SelectSchedule()
{
	int count2 = 1;
	system("cls");
	cout << "\t\t\t\t\t\t\t";
	for (int i = 0; i <= 41; i++) cout << "*";
	cout << " TABLE SHOWTIMES ";
	for (int i = 0; i <= 40; i++) cout << "*";
	cout << endl;
	menu2_1();
	cout << "\t\t\t\t\t\t\t";
	for (int i = 0; i <= 99; i++) cout << "*";
	int out2 = 0;
	while (out2 == 0) {
		char ch2 = _getch();
		if (ch2 == -32) {
			int change = 0;
			ch2 = _getch();
			if (ch2 == 72) { if ((count2 > 1) && (count2 <= 5)) --count2; else if (count2 == 1) count2 = 5; }
			if (ch2 == 80) { if ((count2 >= 1) && (count2 < 5)) ++count2; else if (count2 == 5) count2 = 1; }
			if (ch2 == 77) { change++; }
			switch (count2)
			{
			case 1: {system("cls");
				cout << "\t\t\t\t\t\t\t";
				for (int i = 0; i <= 41; i++) cout << "*";
				cout << " TABLE SHOWTIMES ";
				for (int i = 0; i <= 40; i++) cout << "*";
				cout << endl;
				menu2_1();
				cout << "\t\t\t\t\t\t\t";
				for (int i = 0; i <= 99; i++) cout << "*";
				cout << endl;
				if (change != 0)
				{
					DBHelper database;
					database.init();
					LICHCHIEU* lc = database.getlc(database.count);

					LinkedList<LICHCHIEU> data_list;
					for (int i = database.count - 1; i >= 0; i--)
					{
						data_list.InsertFront(*(lc + i));
					}
					NodeData<LICHCHIEU>* p_head = data_list.head();
					if (p_head != NULL)
					{
						NodeData<LICHCHIEU>* temp = p_head;
						show_schedule();
						data_list.PrintList(temp);
					}
					cout << "\n\n";
					cout << "\t\t\t\t\t\t\t" << "Please press the bottom 'up arrow'->to continue !" << endl;
				}
				break;
			}
			case 2: {system("cls");
				cout << "\t\t\t\t\t\t\t";
				for (int i = 0; i <= 41; i++) cout << "*";
				cout << " TABLE SHOWTIMES ";
				for (int i = 0; i <= 40; i++) cout << "*";
				cout << endl;
				menu2_2();
				cout << "\t\t\t\t\t\t\t";
				for (int i = 0; i <= 99; i++) cout << "*";
				cout << endl;
				if (change != 0)
				{
					DBHelper database;
					database.init();
					LICHCHIEU* lc = database.getlc(database.count);

					LinkedList<LICHCHIEU> data_list;
					for (int i = database.count - 1; i >= 0; i--)
					{
						data_list.InsertFront(*(lc + i));
					}
					NodeData<LICHCHIEU>* p_head = data_list.head();
					if (p_head != NULL)
					{
						NodeData<LICHCHIEU>* temp = p_head;
						show_schedule();
						data_list.PrintList(temp);
					}
					cout << "\n\t\t\t\t\t\t\t\t\t";
					cout << "\t======!!Insert!!======" << endl;
					LICHCHIEU lichchieuInsert;
					cout << "\n";
					cout << "\t\t\t\t\t\t\tWARNING: You can only inserting Showtimes that have Cinemaroom ID and Movie ID within the Database!" << endl;
					cout << "\t\t\t\t\t\t\t";

					lichchieuInsert.scanlc();
					data_list.InsertFront(lichchieuInsert);

					NodeData<LICHCHIEU>* p_head1 = data_list.head();
					if (p_head1 != NULL)
					{
						NodeData<LICHCHIEU>* tempp = p_head1;
						system("cls");
						show_tableschedule();
						cout << "\t\t\t\t\t\t\t";
						cout << "After Inserting: " << endl;
						cout << "\n";
						show_schedule();
						data_list.PrintList(tempp);
					}

					string year   = to_string(lichchieuInsert.getNgayChieuPhim().getYear());
					string month  = to_string(lichchieuInsert.getNgayChieuPhim().getMonth());
					string day    = to_string(lichchieuInsert.getNgayChieuPhim().getDay());

					string hour   = to_string(lichchieuInsert.getGioChieuPhim().getHour());
					string minute = to_string(lichchieuInsert.getGioChieuPhim().getMinute());
					string second = to_string(lichchieuInsert.getGioChieuPhim().getSecond());

					string lcisf = "INSERT INTO LICHCHIEU VALUES (";
					lcisf = lcisf + "'" + lichchieuInsert.getMSLich()
						+ "','" + lichchieuInsert.getMSPhong()
						+ "','" + lichchieuInsert.getMSPhim()
						+ "',convert(date,'"
						+ year + "-" + month + "-" + day
						+ "',120),convert(time,'"
						+ hour + ":" + minute + ":" + second + "'))";

					database.ExecuteQuery(StringToChar(lcisf));
					database.close();

					cout << "\n\n";
					cout << "\t\t\t\t\t\t\t" << "Please press the bottom 'up arrow'->to continue !" << endl;
				}
				break;
			}
			case 3: {system("cls");
				cout << "\t\t\t\t\t\t\t";
				for (int i = 0; i <= 41; i++) cout << "*";
				cout << " TABLE SHOWTIMES ";
				for (int i = 0; i <= 40; i++) cout << "*";
				cout << endl;
				menu2_3();
				cout << "\t\t\t\t\t\t\t";
				for (int i = 0; i <= 99; i++) cout << "*";
				cout << endl;
				if (change != 0)
				{
					DBHelper database;
					database.init();
					LICHCHIEU* lc = database.getlc(database.count);

					LinkedList<LICHCHIEU> data_list;
					for (int i = database.count - 1; i >= 0; i--)
					{
						data_list.InsertFront(*(lc + i));
					}

					NodeData<LICHCHIEU>* p_head = data_list.head();
					if (p_head != NULL)
					{
						NodeData<LICHCHIEU>* temp = p_head;
						show_schedule();
						data_list.PrintList(temp);
					}
					cout << "\n\t\t\t\t\t\t\t\t\t";
					cout << "\t======!!Update!!======" << endl;
					LICHCHIEU lichchieuUpdate;
					int pos;
					cout << "\n";
					cout << "\t\t\t\t\t\t\tWARNING: You can only updating Showtimes that has Cinemaroom ID and Movie ID within the Database!" << endl;
					do
					{
						cout << "\t\t\t\t\t\t\t";
						cout << "Enter the positions you wanna Update: ";
						cin >> pos;

					} while (pos <= 0 || pos > database.count);
					cout << endl;

					cout << "\t\t\t\t\t\t\tEnter the new values: " << endl;
					lichchieuUpdate.scanlc();
					data_list.Update(lichchieuUpdate,--pos);
					system("cls");
					
					show_tableschedule();
					cout << "\t\t\t\t\t\t\t";
					cout << "After Updating: " << endl;
					cout << "\n";
					show_schedule();
					data_list.PrintList(data_list.head());


					string year   = to_string(lichchieuUpdate.getNgayChieuPhim().getYear());
					string month  = to_string(lichchieuUpdate.getNgayChieuPhim().getMonth());
					string day    = to_string(lichchieuUpdate.getNgayChieuPhim().getDay());

					string hour   = to_string(lichchieuUpdate.getGioChieuPhim().getHour());
					string minute = to_string(lichchieuUpdate.getGioChieuPhim().getMinute());
					string second = to_string(lichchieuUpdate.getGioChieuPhim().getSecond());

					string lcup = "alter table VEPHIM nocheck constraint [FK__VEPHIM__MSLich__3F466844]   ";
					lcup = lcup + "UPDATE VEPHIM SET MSLich='" + lichchieuUpdate.getMSLich() + "' where MSLich ='"
						        + (*(lc + pos)).getMSLich() + "'  ";
					lcup = lcup + "UPDATE LICHCHIEU SET ";
					lcup = lcup +"MSLich ='" + lichchieuUpdate.getMSLich()+ "',  MSPhong = '" + lichchieuUpdate.getMSPhong()
						+ "', MSPhim = '" + lichchieuUpdate.getMSPhim()
						+ "', NgayChieuPhim = '" + year + "-" + month + "-" + day
						+ "',GioChieuPhim='" + hour + ":" + minute + ":" + second + "' ";
					
					lcup = lcup + "WHERE MSLich = '" + (*(lc + pos)).getMSLich() + "';  ";
					lcup = lcup + "alter table VEPHIM check constraint [FK__VEPHIM__MSLich__3F466844]   ";

					database.ExecuteQuery(StringToChar(lcup));
					database.close();

					cout << "\n\n";
					cout << "\t\t\t\t\t\t\t" << "Please press the bottom 'up arrow'->to continue !" << endl;
				}
				break;
			}
			case 4: {system("cls");
				cout << "\t\t\t\t\t\t\t";
				for (int i = 0; i <= 41; i++) cout << "*";
				cout << " TABLE SHOWTIMES ";
				for (int i = 0; i <= 40; i++) cout << "*";
				cout << endl;
				menu2_4();
				cout << "\t\t\t\t\t\t\t";
				for (int i = 0; i <= 99; i++) cout << "*";
				cout << endl;
				if (change != 0)
				{
					DBHelper database;
					database.init();
					LICHCHIEU* lc = database.getlc(database.count);

					LinkedList<LICHCHIEU> data_list;
					for (int i = database.count - 1; i >= 0; i--)
					{
						data_list.InsertFront(*(lc + i));
					}
					NodeData<LICHCHIEU>* p_head = data_list.head();
					if (p_head != NULL)
					{
						NodeData<LICHCHIEU>* temp = p_head;
						show_schedule();
						data_list.PrintList(temp);
					}
					cout << "\t\t\t\t\t\t\t======!!Delete!!======" << endl;
					int posDelete;
					do
					{
						cout << "\n";
						cout << "\t\t\t\t\t\t\tEnter the position you wanna Delete: ";
						cin >> posDelete;

					} while (posDelete <= 0 || posDelete > database.count);

					data_list.DeleteNode(--posDelete);
					system("cls");
					show_tableschedule();
					cout << "\t\t\t\t\t\t\t";
					cout << "After Deleting: " << endl;
					cout << "\n";
					show_schedule();
					data_list.PrintList(data_list.head());

					string lcdl = "alter table VEPHIM nocheck constraint [FK__VEPHIM__MSLich__3F466844]   ";
					lcdl = lcdl + "DELETE FROM LICHCHIEU WHERE ";
					lcdl = lcdl + "MSLich = '" + (*(lc + posDelete)).getMSLich() + "';";
					lcdl = lcdl + "DELTE FROM VEPHIM WHERE MSLich ='" + (*(lc + posDelete)).getMSLich() + "';";
					lcdl = lcdl + "alter table VEPHIM check constraint [FK__VEPHIM__MSLich__3F466844]   ";
					
					database.ExecuteQuery(StringToChar(lcdl));
					database.close();

					cout << "\n\n";
					cout << "\t\t\t\t\t\t\t" << "Please press the bottom 'up arrow'->to continue !" << endl;
				}
				break;
			}
			case 5: {system("cls");
				cout << "\t\t\t\t\t\t\t";
				for (int i = 0; i <= 41; i++) cout << "*";
				cout << " TABLE SHOWTIMES ";
				for (int i = 0; i <= 40; i++) cout << "*";
				cout << endl;
				menu2_5();
				cout << "\t\t\t\t\t\t\t";
				for (int i = 0; i <= 99; i++) cout << "*";
				if (change != 0) {
					out2++; system("cls"); menu1_2();
				}
				break;
			}
			}
		}
	}
}

void SelectRoom()
{
	int count2 = 1;
	system("cls");
	cout << "\t\t\t\t\t\t\t";
	for (int i = 0; i <= 40; i++) cout << "*";
	cout << " TABLE ROOM ";
	for (int i = 0; i <= 40; i++) cout << "*";
	cout << endl;
	menu2_1();
	cout << "\t\t\t\t\t\t\t";
	for (int i = 0; i <= 93; i++) cout << "*";
	int out2 = 0;
	while (out2 == 0) {
		int change = 0;
		char ch2 = _getch();
		if (ch2 == -32) {
			ch2 = _getch();
			if (ch2 == 72) { if ((count2 > 1) && (count2 <= 5)) --count2; else if (count2 == 1) count2 = 5; }
			if (ch2 == 80) { if ((count2 >= 1) && (count2 < 5)) ++count2; else if (count2 == 5) count2 = 1; }
			if (ch2 == 77) { change++; }
			switch (count2)
			{
			case 1: {system("cls");
				cout << "\t\t\t\t\t\t\t";
				for (int i = 0; i <= 40; i++) cout << "*";
				cout << " TABLE ROOM ";
				for (int i = 0; i <= 40; i++) cout << "*";
				cout << endl;
				menu2_1();
				cout << "\t\t\t\t\t\t\t";
				for (int i = 0; i <= 93; i++) cout << "*";
				cout << endl;
				if (change != 0)
				{

					DBHelper database;
					database.init();
					PHONGCHIEU* pc = database.getpc(database.count);
					int countpc = database.count;

					LinkedList<PHONGCHIEU> data_list;
					for (int i = database.count - 1; i >= 0; i--)
					{
						data_list.InsertFront(*(pc + i));
					}
					NodeData<PHONGCHIEU>* p_head = data_list.head();
					if (p_head != NULL)
					{
						NodeData<PHONGCHIEU>* temp = p_head;
						show_room();
						data_list.PrintList(temp);
					}
				}
				break;
			}
			case 2: {system("cls");
				cout << "\t\t\t\t\t\t\t";
				for (int i = 0; i <= 40; i++) cout << "*";
				cout << " TABLE ROOM ";
				for (int i = 0; i <= 40; i++) cout << "*";
				cout << endl;
				menu2_2();
				cout << "\t\t\t\t\t\t\t";
				for (int i = 0; i <= 93; i++) cout << "*";
				cout << endl;
				if (change != 0)
				{
					DBHelper database;
					database.init();
					PHONGCHIEU* pc = database.getpc(database.count);

					LinkedList<PHONGCHIEU> data_list;
					for (int i = database.count - 1; i >= 0; i--)
					{
						data_list.InsertFront(*(pc + i));
					}
					NodeData<PHONGCHIEU>* p_head = data_list.head();
					if (p_head != NULL)
					{
						NodeData<PHONGCHIEU>* temp = p_head;
						show_room();
						data_list.PrintList(temp);
					}
					cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
					cout << "======!!Insert!!======" << endl;
					PHONGCHIEU phongchieuInsert;
					cout << "\t\t\t\t\t\t\t";

					phongchieuInsert.scanpc();
					data_list.InsertFront(phongchieuInsert);

					NodeData<PHONGCHIEU>* p_head1 = data_list.head();
					if (p_head1 != NULL)
					{
						NodeData<PHONGCHIEU>* tempp = p_head1;
						system("cls");
						show_tableroom();
						cout << "\t\t\t\t\t\t\t";
						cout << "After Inserting: " << endl;
						cout << "\n";
						show_room();
						data_list.PrintList(tempp);
					}
					string SLG = to_string(phongchieuInsert.getSoLuongGhe());

					string pcisf = "INSERT INTO PHONGCHIEU VALUES (";

					pcisf = pcisf + "'" + phongchieuInsert.getMSPhong()
						+ "','" + phongchieuInsert.getTenPhong()
						+ "','" + SLG + "')";

					database.ExecuteQuery(StringToChar(pcisf));
					database.close();

					cout << "\n\n";
					cout << "\t\t\t\t\t\t\t" << "Please press the bottom 'up arrow'->to continue !" << endl;
				}
				break;
			}
			case 3: {system("cls");
				cout << "\t\t\t\t\t\t\t";
				for (int i = 0; i <= 40; i++) cout << "*";
				cout << " TABLE ROOM ";
				for (int i = 0; i <= 40; i++) cout << "*";
				cout << endl;
				menu2_3();
				cout << "\t\t\t\t\t\t\t";
				for (int i = 0; i <= 93; i++) cout << "*";
				cout << endl;
				if (change != 0)
				{
					DBHelper database;
					database.init();
					PHONGCHIEU* pc = database.getpc(database.count);

					LinkedList<PHONGCHIEU> data_list;
					for (int i = database.count - 1; i >= 0; i--)
					{
						data_list.InsertFront(*(pc + i));
					}
					NodeData<PHONGCHIEU>* p_head = data_list.head();
					if (p_head != NULL)
					{
						NodeData<PHONGCHIEU>* temp = p_head;
						show_room();
						data_list.PrintList(temp);
					}
					cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
					cout << "======!!Update!!======" << endl;
					PHONGCHIEU phongchieuUpdate;
					int pos;
					do
					{
						cout << "\t\t\t\t\t\t\t";
						cout << "Enter the positions you wanna Update: ";
						cin >> pos;

					} while (pos <= 0 || pos > database.count);

					cout << "\n";
					cout << "\t\t\t\t\t\t\t";
					cout << "Enter the new values: ";
					phongchieuUpdate.scanpc();
					data_list.Update(phongchieuUpdate, --pos);
					system("cls");
					show_tableroom();
					cout << "\t\t\t\t\t\t\t";
					cout << "After Updating: " << endl;
					cout << "\n";
					show_room();
					data_list.PrintList(data_list.head());

					string SLG = to_string(phongchieuUpdate.getSoLuongGhe());

					string pcup = "alter table LICHCHIEU nocheck constraint[FK__LICHCHIEU__MSPho__3B75D760]   ";

					pcup = pcup + "update LICHCHIEU set MSPhong = '";
					pcup = pcup + phongchieuUpdate.getMSPhong() + "' where MSPhong = '" + (*(pc + pos)).getMSPhong() + "';   ";
					pcup = pcup + "update PHONGCHIEU set MSPhong = '";
					pcup = pcup + phongchieuUpdate.getMSPhong() + "', TenPhong= '"
						+ phongchieuUpdate.getTenPhong() + "', SoLuongGhe = '"
						+ SLG + "' where MSPhong = '"
						+ (*(pc + pos)).getMSPhong() + "';   ";
					pcup = pcup + "alter table LICHCHIEU check constraint[FK__LICHCHIEU__MSPho__3B75D760]   ";

					database.ExecuteQuery(StringToChar(pcup));
					database.close();

					cout << "\n\n";
					cout << "\t\t\t\t\t\t\t" << "Please press the bottom 'up arrow'->to continue !" << endl;
				}
				break;
			}
			case 4: {system("cls");
				cout << "\t\t\t\t\t\t\t";
				for (int i = 0; i <= 40; i++) cout << "*";
				cout << " TABLE ROOM ";
				for (int i = 0; i <= 40; i++) cout << "*";
				cout << endl;
				menu2_4();
				cout << "\t\t\t\t\t\t\t";
				for (int i = 0; i <= 93; i++) cout << "*";
				cout << endl;
				if (change != 0)
				{
					DBHelper database;
					database.init();
					PHONGCHIEU* pc = database.getpc(database.count);

					LinkedList<PHONGCHIEU> data_list;
					for (int i = database.count - 1; i >= 0; i--)
					{
						data_list.InsertFront(*(pc + i));
					}
					NodeData<PHONGCHIEU>* p_head = data_list.head();
					if (p_head != NULL)
					{
						NodeData<PHONGCHIEU>* temp = p_head;
						show_room();
						data_list.PrintList(temp);
					}
					cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
					cout << "======!!Delete!!======" << endl;
					int posDelete;
					do
					{
						cout << "\n";
						cout << "\t\t\t\t\t\t\t";
						cout << "Enter the positions you wanna Delete: ";
						cin >> posDelete;

					} while (posDelete <= 0 || posDelete > database.count);

					data_list.DeleteNode(--posDelete);
					system("cls");
					show_tableroom();
					cout << "\t\t\t\t\t\t\t";
					cout << "After Deleting: " << endl;
					cout << "\n";
					show_room();
					data_list.PrintList(data_list.head());

					string pcdl = "alter table LICHCHIEU nocheck constraint [FK__LICHCHIEU__MSPho__3B75D760]   ";
					pcdl = pcdl + "alter table VEPHIM nocheck constraint [FK__VEPHIM__MSLich__3F466844]   ";
					pcdl = pcdl + " Delete from LICHCHIEU where MSPhong = '" + (*(pc + posDelete)).getMSPhong() + "';   ";
					pcdl = pcdl + " Delete from PHONGCHIEU where MSPhong = '" + (*(pc + posDelete)).getMSPhong() + "';   ";
					pcdl = pcdl + "alter table LICHCHIEU check constraint [FK__LICHCHIEU__MSPho__3B75D760]   ";
					pcdl = pcdl + "alter table VEPHIM check constraint [FK__VEPHIM__MSLich__3F466844]  ";

					database.ExecuteQuery(StringToChar(pcdl));
					database.close();
				}
				break;
			}
			case 5: {system("cls");
				cout << "\t\t\t\t\t\t\t";
				for (int i = 0; i <= 40; i++) cout << "*";
				cout << " TABLE ROOM ";
				for (int i = 0; i <= 40; i++) cout << "*";
				cout << endl;
				menu2_5();
				cout << "\t\t\t\t\t\t\t";
				for (int i = 0; i <= 93; i++) cout << "*";
				if (change != 0) {
					out2++; system("cls"); menu1_3();
				}
				cout << "\n\n";
				cout << "\t\t\t\t\t\t\t" << "Please press the bottom 'up arrow'->to continue !" << endl;
				break;
			}
			}
		}
	}
}

void SelectTicket()
{
	int count2 = 1;
	system("cls");
	cout << "\t\t\t\t\t\t\t";
	for (int i = 0; i <= 40; i++) cout << "*";
	cout << " TABLE TICKET ";
	for (int i = 0; i <= 41; i++) cout << "*";
	cout << endl;
	menu2_1();
	cout << "\t\t\t\t\t\t\t";
	for (int i = 0; i <= 96; i++) cout << "*";
	int out2 = 0;
	while (out2 == 0) {
		char ch2 = _getch();
		if (ch2 == -32)
		{
			int change = 0;
			ch2 = _getch();
			if (ch2 == 72) { if ((count2 > 1) && (count2 <= 5)) --count2; else if (count2 == 1) count2 = 5; }
			if (ch2 == 80) { if ((count2 >= 1) && (count2 < 5)) ++count2; else if (count2 == 5) count2 = 1; }
			if (ch2 == 77) { change++; }
			switch (count2)
			{
			case 1:
			{
				system("cls");
				cout << "\t\t\t\t\t\t\t";
				for (int i = 0; i <= 40; i++) cout << "*";
				cout << " TABLE TICKET ";
				for (int i = 0; i <= 41; i++) cout << "*";
				cout << endl;
				menu2_1();
				cout << "\t\t\t\t\t\t\t";
				for (int i = 0; i <= 96; i++) cout << "*";
				cout << endl;
				if (change != 0)
				{
					DBHelper database;
					database.init();
					VEPHIM* ve = database.getvp(database.count);

					LinkedList<VEPHIM> data_list;
					for (int i = database.count - 1; i >= 0; i--)
					{
						data_list.InsertFront(*(ve + i));
					}
					NodeData<VEPHIM>* p_head = data_list.head();
					if (p_head != NULL)
					{
						NodeData<VEPHIM>* temp = p_head;
						show_ticket();
						data_list.PrintList(temp);
					}
					cout << "\n\n";
					cout << "\t\t\t\t\t\t\t" << "Please press the bottom 'up arrow'->to continue !" << endl;
				}
				break;
			}
			case 2: {system("cls");
				cout << "\t\t\t\t\t\t\t";
				for (int i = 0; i <= 40; i++) cout << "*";
				cout << " TABLE TICKET ";
				for (int i = 0; i <= 41; i++) cout << "*";
				cout << endl;
				menu2_2();
				cout << "\t\t\t\t\t\t\t";
				for (int i = 0; i <= 96; i++) cout << "*";
				cout << endl;
				if (change != 0)
				{
					DBHelper database;
					database.init();
					VEPHIM* ve = database.getvp(database.count);

					LinkedList<VEPHIM> data_list;
					for (int i = database.count - 1; i >= 0; i--)
					{
						data_list.InsertFront(*(ve + i));
					}
					NodeData<VEPHIM>* p_head = data_list.head();
					if (p_head != NULL)
					{
						NodeData<VEPHIM>* temp = p_head;
						show_ticket();
						data_list.PrintList(temp);
					}
					cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
					cout << "======!!Insert!!======" << endl;
					VEPHIM vephimInsert;
					cout << "\t\t\t\t\t\t\t";

					vephimInsert.scanvp();
					data_list.InsertFront(vephimInsert);

					NodeData<VEPHIM>* p_head1 = data_list.head();
					if (p_head1 != NULL)
					{
						NodeData<VEPHIM>* tempp = p_head1;
						system("cls");
						show_tableticket();
						cout << "\t\t\t\t\t\t\t";
						cout << "After Inserting: " << endl;
						cout << "\n";
						show_ticket();
						data_list.PrintList(tempp);
					}
					string GV = to_string(vephimInsert.getGiaVe());

					string vpisf = "INSERT INTO VEPHIM VALUES (";

					vpisf = vpisf + "'" + vephimInsert.getMSGhe() + "','"
						+ vephimInsert.getMSLich() + "','"
						+ vephimInsert.getDinhDangVe() + "','"
						+ vephimInsert.getLoaiVe() + "','"
						+ GV + "')";

					database.ExecuteQuery(StringToChar(vpisf));
					database.close();
					cout << "\n\n";
					cout << "\t\t\t\t\t\t\t" << "Please press the bottom 'up arrow'->to continue !" << endl;
				}
				break;
			}
			case 3:
			{
				system("cls");
				cout << "\t\t\t\t\t\t\t";
				for (int i = 0; i <= 40; i++) cout << "*";
				cout << " TABLE TICKET ";
				for (int i = 0; i <= 41; i++) cout << "*";
				cout << endl;
				menu2_3();
				cout << "\t\t\t\t\t\t\t";
				for (int i = 0; i <= 96; i++) cout << "*";
				cout << endl;
				if (change != 0)
				{
					DBHelper database;
					database.init();
					VEPHIM* ve = database.getvp(database.count);

					LinkedList<VEPHIM> data_list;
					for (int i = database.count - 1; i >= 0; i--)
					{
						data_list.InsertFront(*(ve + i));
					}
					NodeData<VEPHIM>* p_head = data_list.head();
					if (p_head != NULL)
					{
						NodeData<VEPHIM>* temp = p_head;
						show_ticket();
						data_list.PrintList(temp);
					}
					cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
					cout << "=====Update!!=====" << endl;
					VEPHIM vephimUpdate;
					int pos;
					cout << "\n";
					cout << "\t\t\t\t\t\t\t";
					cout << "Warning: You can only Update the Tickets that have Showtime ID within the Database!!" << endl;
					cout << "\n";
					do
					{
						cout << "\t\t\t\t\t\t\t";
						cout << "Enter the positions you wanna Update: ";
						cin >> pos;

					} while (pos <= 0 || pos > database.count);

					cout << "\n";
					cout << "\t\t\t\t\t\t\t";
					cout << "Enter the new values: ";
					vephimUpdate.scanvp();
					data_list.Update(vephimUpdate, --pos);
					system("cls");
					show_tableticket();
					cout << "\t\t\t\t\t\t\t";
					cout << "After Updating: " << endl;
					cout << "\n";
					show_ticket();
					data_list.PrintList(data_list.head());

					string GV = to_string(vephimUpdate.getGiaVe());

					string vpup = "alter table VEPHIM nocheck constraint[FK__VEPHIM__MSLich__3F466844]  ";

					vpup = vpup + "UPDATE VEPHIM SET ";
					vpup = vpup + "MSGhe = '" + vephimUpdate.getMSGhe()
						+ "', MSlich = '" + vephimUpdate.getMSLich()
						+ "', DinhDangVe = '" + vephimUpdate.getDinhDangVe()
						+ "', LoaiVe = '" + vephimUpdate.getLoaiVe()
						+ "', GiaVe = '" + GV + "' ";

					vpup = vpup + "WHERE MSGhe = '" + (*(ve + pos)).getMSGhe() + "';";
					vpup = vpup + "alter table VEPHIM check constraint[FK__VEPHIM__MSLich__3F466844]  ";

					database.ExecuteQuery(StringToChar(vpup));
					database.close();

					cout << "\n\n";
					cout << "\t\t\t\t\t\t\t" << "Please press the bottom 'up arrow'->to continue !" << endl;
				}
				break;
			}
			case 4: {system("cls");
				cout << "\t\t\t\t\t\t\t";
				for (int i = 0; i <= 40; i++) cout << "*";
				cout << " TABLE TICKET ";
				for (int i = 0; i <= 41; i++) cout << "*";
				cout << endl;
				menu2_4();
				cout << "\t\t\t\t\t\t\t";
				for (int i = 0; i <= 96; i++) cout << "*";
				cout << endl;
				if (change != 0)
				{
					DBHelper database;
					database.init();
					VEPHIM* ve = database.getvp(database.count);

					LinkedList<VEPHIM> data_list;
					for (int i = database.count - 1; i >= 0; i--)
					{
						data_list.InsertFront(*(ve + i));
					}
					NodeData<VEPHIM>* p_head = data_list.head();
					if (p_head != NULL)
					{
						NodeData<VEPHIM>* temp = p_head;
						show_ticket();
						data_list.PrintList(temp);
					}
					cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
					cout << "=====Delete!!=====" << endl;
					int posDelete;
					cout << "\n";
					do
					{
						cout << "\t\t\t\t\t\t\t";
						cout << "Enter the positions you wanna Delete: ";
						cin >> posDelete;
					} while (posDelete <= 0 || posDelete > database.count);

					data_list.DeleteNode(--posDelete);
					system("cls");
					show_tableticket();
					cout << "\t\t\t\t\t\t\t";
					cout << "After Deleting: " << endl;
					cout << "\n";
					show_ticket();
					data_list.PrintList(data_list.head());

					string vpdl = "DELETE FROM VEPHIM WHERE ";
					vpdl = vpdl + "MSGhe = '" + (*(ve + posDelete)).getMSGhe() + "';";

					database.ExecuteQuery(StringToChar(vpdl));
					database.close();
					cout << "\n\n";
					cout << "\t\t\t\t\t\t\t" << "Please press the bottom 'up arrow'->to continue !" << endl;
				}
				break;
			}
			case 5: {system("cls");
				cout << "\t\t\t\t\t\t\t";
				for (int i = 0; i <= 40; i++) cout << "*";
				cout << " TABLE TICKET ";
				for (int i = 0; i <= 41; i++) cout << "*";
				cout << endl;
				menu2_5();
				cout << "\t\t\t\t\t\t\t";
				for (int i = 0; i <= 96; i++) cout << "*";
				if (change != 0) {
					out2++; system("cls"); menu1_4();
				}
				cout << "\n\n";
				cout << "\t\t\t\t\t\t\t" << "Please press the bottom 'up arrow'->to continue !" << endl;
				break;
			}
			}
		}
	}
}
void Select()
{
	int count1 = 1;
	menu1_1();
	int out1 = 0;
	while (out1 == 0) {

		char ch1 = _getch();
		if (ch1 == -32) {

			ch1 = _getch();
			if (ch1 == 72) { if ((count1 > 1) && (count1 <= 5)) --count1; else if (count1 == 1) count1 = 5; }
			if (ch1 == 80) { if ((count1 >= 1) && (count1 < 5)) ++count1; else if (count1 == 5) count1 = 1; }
			int change1 = 0;
			if (ch1 == 77) { change1++; }
			switch (count1)
			{
			case 1: {
				system("cls"); menu1_1();
				if (change1 != 0) {	SelectMovie();};
				break;
					}; 

			case 2: {system("cls"); menu1_2();
				if (change1 != 0) { SelectSchedule(); };
				break;
			};

			case 3: {system("cls"); menu1_3();
				if (change1 != 0) { SelectRoom(); }
				break;
			};
			case 4: {system("cls"); menu1_4();
				if (change1 != 0) { SelectTicket(); }
				break;
			};
			case 5:{system("cls"); menu1_5();
				if (change1 != 0) out1++;

				break;
			}

			}
		}

	}
}

int main()
{
	Select();
	system("pause");
	return 0;
}
