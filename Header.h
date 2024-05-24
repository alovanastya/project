#pragma once
#include <fstream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <msclr\marshal_cppstd.h>


//Класс лекарства, все поля открыты
public class Medicine {
public:
	unsigned int id{}; // id лекарства
	unsigned int quantity{}; // количество лекарства
	unsigned int price{}; // цена лекарства
	std::string name{}; // название лекарства
	std::string maker{}; // производитель лекарства
	std::string category{}; // категория лекарства
	std::string form{}; // форма выпуска лекарства
};


void get_string_from_file(std::string &a, std::ifstream& input);
void save_medicines_to_txt(Medicine* medicines, int last);
void read_medicines_from_txt(Medicine* medicines, int& last);
void save_medicines_to_txt2(Medicine* medicines, int last);
char* int_to_char(int i);

bool comp11(Medicine medicine1, Medicine medicine2);
bool comp12(Medicine medicine1, Medicine medicine2);
bool comp21(Medicine medicine1, Medicine medicine2);
bool comp22(Medicine medicine1, Medicine medicine2);
bool comp31(Medicine medicine1, Medicine medicine2);
bool comp32(Medicine medicine1, Medicine medicine2);
bool comp41(Medicine medicine1, Medicine medicine2);
bool comp42(Medicine medicine1, Medicine medicine2);
bool comp51(Medicine medicine1, Medicine medicine2);
bool comp52(Medicine medicine1, Medicine medicine2);
bool comp61(Medicine medicine1, Medicine medicine2);
bool comp62(Medicine medicine1, Medicine medicine2);
bool comp71(Medicine medicine1, Medicine medicine2);
bool comp72(Medicine medicine1, Medicine medicine2);

//void create_medicine(medicine* medicines, int& last);
//void change_medicine(medicine* medicines, int& last);
//void delete_medicine(medicine* medicines, int& last);
//void search_medicine(medicine* medicines, int last);
//int get_index(int last);
//bool cheking(int last);
//int get_int();
//void func_sort(medicine* medicines, int last, bool (*comp)(medicine, medicine));
//void get_string_from_file(char* a, std::ifstream& input);
//void save_medicines_to_txt(medicine* medicines, int last);
//void read_medicines_from_txt(medicine* medicines, int& last);
//void save_medicines_to_bin(medicine* medicines, int last);
//void read_medicines_from_bin(medicine* medicines, int& last);
//void from_txt_to_bin();
//void get_string_from_file(char* a, std::ifstream& input);
//void save_medicines_to_txt(medicine* medicines, int last);
//void read_medicines_from_txt(medicine* medicines, int& last);
//void save_medicines_to_bin(medicine* medicines, int last);
//void read_medicines_from_bin(medicine* medicines, int& last);
//void from_txt_to_bin();
//void same_price_and_course_medicines(medicine* medicines, int last);