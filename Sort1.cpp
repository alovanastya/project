#include "Header.h"

bool comp11(Medicine medicine1, Medicine medicine2) {
	return medicine1.id < medicine2.id;
}

bool comp12(Medicine medicine1, Medicine medicine2) {
	return medicine1.id > medicine2.id;
}

bool comp21(Medicine medicine1, Medicine medicine2) {
	return medicine1.name < medicine2.name;
}

bool comp22(Medicine medicine1, Medicine medicine2) {
	return medicine1.name > medicine2.name;
}

bool comp31(Medicine medicine1, Medicine medicine2) {
	return medicine1.maker < medicine2.maker;
}

bool comp32(Medicine medicine1, Medicine medicine2) {
	return medicine1.maker > medicine2.maker;
}

bool comp41(Medicine medicine1, Medicine medicine2) {
	return medicine1.category < medicine2.category;
}

bool comp42(Medicine medicine1, Medicine medicine2) {
	return medicine1.category > medicine2.category;
}

bool comp51(Medicine medicine1, Medicine medicine2) {
	return medicine1.form < medicine2.form;
}

bool comp52(Medicine medicine1, Medicine medicine2) {
	return medicine1.form > medicine2.form;
}

bool comp61(Medicine medicine1, Medicine medicine2) {
	return medicine1.price < medicine2.price;
}

bool comp62(Medicine medicine1, Medicine medicine2) {
	return medicine1.price > medicine2.price;
}

bool comp71(Medicine medicine1, Medicine medicine2) {
	return medicine1.quantity < medicine2.quantity;
}

bool comp72(Medicine medicine1, Medicine medicine2) {
	return medicine1.quantity > medicine2.quantity;
}

void func_sort(Medicine* medicines, int last, bool (*comp)(Medicine, Medicine)) {
	for (int i = 0; i < last; ++i) {
		for (int j = 0; j < last - 1; ++j) {
			if (comp(medicines[j], medicines[j + 1])) {
				Medicine s = medicines[j];
				medicines[j] = medicines[j + 1];
				medicines[j + 1] = s;
			}
		}
	}
}


//using namespace std;
//
//bool str1_greater_str2(char* str1, char* str2) {
//	int i = 0;
//	char str10[100], str20[100];
//	while (str1[i] != 0 || str2[i] != 0) {
//		char c1 = str1[i], c2 = str2[i];
//		if (c1 >= 'A' && c1 <= 'Z') c1 = c1 + ('a' - 'A');
//		if (c2 >= 'A' && c2 <= 'Z') c2 = c2 + ('a' - 'A');
//		if (c1 >= 'А' && c1 <= 'Я') c1 = c1 + ('а' - 'А');
//		if (c2 >= 'А' && c2 <= 'Я') c2 = c2 + ('а' - 'А');
//		str10[i] = c1;
//		str20[i] = c2;
//		i += 1;
//	}
//	i = 0;
//	while (str1[i] != 0 || str2[i] != 0) {
//		char c1 = str10[i], c2 = str20[i];
//		if (int(c1) != int(c2)) {
//			if (c1 >= 'a' && c1 <= 'z') {
//				if (c2 >= 'a' && c2 <= 'z') {
//					return int(c1) < int(c2);
//				}
//				else return true;
//			}
//			if (c2 >= 'a' && c2 <= 'z') return false;
//
//			if (c1 >= 'а' && c1 <= 'я') {
//				if (c2 >= 'а' && c2 <= 'я') {
//					return int(c1) < int(c2);
//				}
//				else return true;
//			}
//			if (c2 >= 'а' && c2 <= 'я') return false;
//
//			return int(c1) < int(c2);
//		}
//		i += 1;
//	}
//	return true;
//}
//
//bool comp11(Medicine medicine1, Medicine medicine2) {
//	return !str1_greater_str2(medicine1.category, medicine2.category);
//}
//
//bool comp12(Medicine medicine1, Medicine medicine2) {
//	return str1_greater_str2(medicine1.category, medicine2.category);
//}
//
//bool comp21(Medicine medicine1, Medicine medicine2) {
//	return !str1_greater_str2(medicine1.name, medicine2.name);
//}
//
//bool comp22(Medicine medicine1, Medicine medicine2) {
//	return str1_greater_str2(medicine1.name, medicine2.name);
//}
//
//bool comp31(Medicine medicine1, Medicine medicine2) {
//	return medicine1.id >= medicine2.id;
//}
//
//bool comp32(Medicine medicine1, Medicine medicine2) {
//	return medicine1.id <= medicine2.id;
//}
//
//bool comp41(Medicine medicine1, Medicine medicine2) {
//	return medicine1.quantity >= medicine2.quantity;
//}
//
//bool comp42(Medicine medicine1, Medicine medicine2) {
//	return medicine1.quantity <= medicine2.quantity;
//}
//
//bool comp51(Medicine medicine1, Medicine medicine2) {
//	return medicine1.price >= medicine2.price;
//}
//
//bool comp52(Medicine medicine1, Medicine medicine2) {
//	return medicine1.price <= medicine2.price;
//}
//
//bool comp61(Medicine medicine1, Medicine medicine2) {
//	return !str1_greater_str2(medicine1.form, medicine2.form);
//}
//
//bool comp62(Medicine medicine1, Medicine medicine2) {
//	return str1_greater_str2(medicine1.form, medicine2.form);
//}
//
//bool comp71(Medicine medicine1, Medicine medicine2) {
//	return !str1_greater_str2(medicine1.maker, medicine2.maker);
//}
//
//bool comp72(Medicine medicine1, Medicine medicine2) {
//	return str1_greater_str2(medicine1.maker, medicine2.maker);
//}
//
//void func_sort(medicine* medicines, int last, bool (*comp)(medicine, medicine)) {
//	for (int i = 1; i < last; ++i) {
//		for (int j = 1; j < last - 1; ++j) {
//			if (comp(medicines[j], medicines[j + 1])) {
//				medicine s = medicines[j];
//				medicines[j] = medicines[j + 1];
//				medicines[j + 1] = s;
//			}
//		}
//	}
//}
//
//void sort_table(medicine* medicines, int last) {
//	int n3 = 1, n4 = 1;
//	while (n3 != 0) {
//		//cout << "+---------------------------------------------+\n";
//		//cout << "| Как хотите сортировать?                     |\n";
//		//cout << "|  1. По категории                            |\n";
//		//cout << "|  2. По названию                             |\n";
//		//cout << "|  3. По id                                   |\n";
//		//cout << "|  4. По количеству                           |\n";
//		//cout << "|  5. По цене                                 |\n";
//		//cout << "|  6. По форме выпуска                        |\n";
//		//cout << "|  7. По производителю                        |\n";
//		//cout << "|  0. Выход                                   |\n";
//		//cout << "+---------------------------------------------+\n";
//		////n3 = get_int();
//		//while (n3 < 0 || n3 > 7) {
//		//	cout << "Введите верное число\n";
//		//	n3 = get_int();
//		//}
//		//if (n3 >= 3) {
//		//	cout << "+---------------------------------------------+\n";
//		//	cout << "| Сортировать по возрастанию или убыванию?    |\n";
//		//	cout << "|  1. По возрастанию                          |\n";
//		//	cout << "|  2. По убыванию                             |\n";
//		//	cout << "+---------------------------------------------+\n";
//		//	n4 = get_int();
//		//	while (n4 < 1 && n4 > 2) {
//		//		cout << "Введите верное число\n";
//		//		n4 = get_int();
//		//	}
//		//}
//		//if (n3 == 1 || n3 == 2) {
//		//	cout << "+---------------------------------------------+\n";
//		//	cout << "| Сортировать в алфавитном порядке?           |\n";
//		//	cout << "|  1. В алфавитном порядке                    |\n";
//		//	cout << "|  2. В обратном алфавитном порядке           |\n";
//		//	cout << "+---------------------------------------------+\n";
//		//	n4 = get_int();
//		//	while (n4 < 1 && n4 > 2) {
//		//		cout << "Введите верное число\n";
//		//		n4 = get_int();
//		//	}
//		//}
//
//		//system("cls");
//		if (n3 == 1) {
//			if (n4 == 1) func_sort(medicines, last, comp11);
//			if (n4 == 2) func_sort(medicines, last, comp12);
//		}
//
//		if (n3 == 2) {
//			if (n4 == 1) func_sort(medicines, last, comp21);
//			if (n4 == 2) func_sort(medicines, last, comp22);
//		}
//
//		if (n3 == 3) {
//			if (n4 == 1) func_sort(medicines, last, comp31);
//			if (n4 == 2) func_sort(medicines, last, comp32);
//		}
//
//		if (n3 == 4) {
//			if (n4 == 1) func_sort(medicines, last, comp41);
//			if (n4 == 2) func_sort(medicines, last, comp42);
//		}
//
//		if (n3 == 5) {
//			if (n4 == 1) func_sort(medicines, last, comp51);
//			if (n4 == 2) func_sort(medicines, last, comp52);
//		}
//
//		if (n3 == 6) {
//			if (n4 == 1) func_sort(medicines, last, comp61);
//			if (n4 == 2) func_sort(medicines, last, comp62);
//		}
//
//		if (n3 == 7) {
//			if (n4 == 1) func_sort(medicines, last, comp71);
//			if (n4 == 2) func_sort(medicines, last, comp72);
//		}
//		n3 = 0;
//	}
//}