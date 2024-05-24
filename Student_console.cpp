//#include "Header.h"
//
//void get_string(char* a, int len = 90) {
//    char c;
//    cin >> c;
//    int i = 0;
//    while (c != '\n' && i < len) {
//        c = (c == '\t') ? ' ' : c;
//        a[i] = c;
//        i += 1;
//        c = cin.get();
//    }
//    ios_base::sync_with_stdio(0);
//    cin.ignore(cin.rdbuf()->in_avail());
//    for (int j = i; j < 100; ++j) {
//        a[j] = 0;
//    }
//}
//
//int get_int() {
//    int number = 0;
//    char c;
//    bool flag = 1;
//    while (flag) {
//        char a[100]{};
//        get_string(a, 8);
//        bool flag2 = 1;
//        for (int i = 0; i < 100 && flag && flag2; ++i) {
//            c = a[i];
//            if (c >= '0' && c <= '9' && flag) {
//                number = number * 10 + c - '0';
//            }
//            else if (c == ' ' || c == '\n' || c == 0) {
//                flag = 0;
//            }
//            else {
//                cout << "Пожалуйста, введите натуральное число!" << endl;
//                number = 0;
//                c = '0';
//                flag2 = 0;
//            }
//        }
//    }
//    return number;
//}
//
//bool cheking(int last) {
//    if (last > 1) {
//        return true;
//    }
//    else {
//        cout << "Таблица пуста.\n";
//        return false;
//    }
//}
//
//int get_index(int last) {
//    int i;
//    bool flag = 1;
//    cout << "Введите id лекарства: ";
//    while (flag) {
//        i = get_int();
//        if (i > 0 && i < last) {
//            flag = 0;
//        }
//        else {
//            cout << "Ошибка! Лекартсва с таким id нет. Введите id заново: ";
//        }
//    }
//    return i;
//}
//
//bool search_str_bool(medicine st, char* str1, int i) {
//    if (i == 1) return strcmp(str1, st.category);
//    if (i == 2) return strcmp(str1, st.name);
//    if (i == 6) return strcmp(str1, st.form);
//    if (i == 7) return strcmp(str1, st.maker);
//}
//
//void search_str(medicine* medicines, int last, char* str1, int u) {
//    bool flag = 1;
//    int sch = 1;
//    for (int i = 1; i < last; ++i) {
//        if (!search_str_bool(medicines[i], str1, u)) {
//            if (flag) {
//                print_medicine_table();
//                flag = 0;
//            }
//            print_medicine_info(medicines[i], sch);
//            sch += 1;
//        }
//    }
//    //if (!flag) print_medicine_table_2();
//    //else cout << "Лекарства не найдены.\n";
//}
//
//bool search_int_bool(medicine st, int num, int i) {
//    if (i == 3) return st.id == num;
//    if (i == 4) return st.quantity == num;
//    if (i == 5) return st.price == num;
//    //if (i == 6) return st.course == num;
//}
//
//void search_int(medicine* medicines, int last, int num, int u) {
//    bool flag = 1;
//    int sch = 1;
//    for (int i = 1; i < last; ++i) {
//        if (search_int_bool(medicines[i], num, u)) {
//            if (flag) {
//                print_medicine_table();
//                flag = 0;
//            }
//            print_medicine_info(medicines[i], sch);
//            sch += 1;
//        }
//    }
//    //if (!flag) print_medicine_table_2();
//    //else cout << "Лекарства не найдены.\n";
//}
//
//void search_medicine(medicine* medicines, int last) {
//    cout << "+----------------------------------------------------+\n";
//    cout << "| По какому параматру хотите искать?                 |\n";
//    cout << "|  1. По категории лекарства                         |\n";
//    cout << "|  2. По названию лекарства                          |\n";
//    cout << "|  3. По id лекарства                                |\n";
//    cout << "|  4. По количеству лекартсва                        |\n";
//    cout << "|  5. По цене лекарства                              |\n";
//    cout << "|  6. По форме выпуска                               |\n";
//    cout << "|  7. По производителю лекартсва                     |\n";
//   /* cout << "| 3. По категории и производителю                    |\n";
//    cout << "| 4. По категории и форме выпуска                    |\n";*/
//    cout << "|  0. Выход                                          |\n";
//    cout << "+----------------------------------------------------+\n";
//    int n3;
//    n3 = get_int();
//    while (n3 < 0 || n3 > 7) {
//        cout << "Введите верный пункт меню\n";
//        n3 = get_int();
//    }
//    system("cls");
//    if (n3 == 1) {
//        char str1[100];
//        cout << "Введите категорию: ";
//        get_string(str1);
//        search_str(medicines, last, str1, 1);
//    }
//    if (n3 == 2) {
//        char str1[100];
//        cout << "Введите название: ";
//        get_string(str1);
//        search_str(medicines, last, str1, 2);
//    }
//    if (n3 == 3) {
//        int number;
//        cout << "Введите id: ";
//        number = get_int();
//        search_int(medicines, last, number, 3);
//    }
//    if (n3 == 4) {
//        int number;
//        cout << "Введите количество: ";
//        number = get_int();
//        search_int(medicines, last, number, 4);
//    }
//    if (n3 == 5) {
//        int number;
//        cout << "Введите цену: ";
//        number = get_int();
//        search_int(medicines, last, number, 5);
//    }
//    if (n3 == 6) {
//        char str1[100];
//        cout << "Введите форму: ";
//        get_string(str1);
//        search_str(medicines, last, str1, 6);
//    }
//    if (n3 == 7) {
//        char str1[100];
//        cout << "Введите производителя: ";
//        get_string(str1);
//        search_str(medicines, last, str1, 7);
//    }
//}
//
//void create_medicine(medicine* medicines, int& last) {
//    if (last >= 100) {
//        //cout << "Ошибка! Превышено максимальное количество лекарств.";
//        return;
//    }
//    //cout << "Введите категорию лекарсвта: ";
//    get_string(medicines[last].category);
//    //cout << "Введите название лекарства: ";
//    get_string(medicines[last].name);
//    //cout << "Введите id: ";
//    medicines[last].id = get_int();
//    //while (medicines[last].id < 1 || medicines[last].id > 31) {
//    //    cout << "Ошибка! Такого дня не существует. Введите день заново: ";
//    //    medicines[last].id = get_int();
//    //}
//    cout << "Введите количетво лекарства: ";
//    medicines[last].quantity = get_int();
//    //while (medicines[last].quantity < 1 || medicines[last].quantity > 12) {
//    //    cout << "Ошибка! Такого месяца не существует. Введите месяц заново: ";
//    //    medicines[last].quantity = get_int();
//    //}
//    cout << "Введите цену лекарства: ";
//    medicines[last].price = get_int();
//    //while (medicines[last].price < 1900 || medicines[last].price > 2023) {
//    //    cout << "Ошибка! Неверный год. Введите год заново: ";
//    //    medicines[last].price = get_int();
//    //}
//    cout << "Введите форму выпуска: ";
//    get_string(medicines[last].form);
//    //while (medicines[last].course < 1 || medicines[last].course > 6) {
//    //    cout << "Ошибка! Такого курса не существует. Введите курс заново: ";
//    //   medicines[last].course = get_int();
//    //}
//    cout << "Введите производителя лекарства: ";
//    get_string(medicines[last].maker);
//    last += 1;
//    system("cls");
//}
//
//void change_medicine(medicine* medicines, int &last) {
//    if (!cheking(last)) return;
//    //print_medicines(medicines, last);
//    int i;
//    i = get_index(last);
//   /* cout << "+----------------------------------------------------+\n";
//    cout << "| Что хотите изменить?                               |\n";
//    cout << "|  1. Изменить категорию лекартсва                   |\n";
//    cout << "|  2. Изменить название лекартсва                    |\n";
//    cout << "|  3. Изменить id лекартсва                          |\n";
//    cout << "|  4. Изменить количество лекартсва                  |\n";
//    cout << "|  5. Изменить цену лекартсва                        |\n";
//    cout << "|  6. Изменить форму выпуска                         |\n";
//    cout << "|  7. Изменить производителя лекартсва               |\n";
//    cout << "|  0. Выход                                          |\n";
//    cout << "+----------------------------------------------------+\n";*/
//    int n3;
//    n3 = get_int();
//    while (n3 < 0 || n3 > 7) {
//        //cout << "Введите верное число\n";
//        n3 = get_int();
//    }
//    if (n3 == 1) {
//        //cout << "Введите категорию: ";
//        get_string(medicines[i].category);
//    }
//    if (n3 == 2) {
//        //cout << "Введите название: ";
//        get_string(medicines[i].name);
//    }
//    if (n3 == 3) {
//        //cout << "Введите id: ";
//        medicines[i].id = get_int();
//        //while (medicines[last].id < 1 || medicines[last].id > 31) {
//        //    cout << "Ошибка! Такого дня не существует. Введите день заново: ";
//        //    medicines[last].id = get_int();
//        //}
//    }
//    if (n3 == 4) {
//        //cout << "Введите количество: ";
//        medicines[i].quantity = get_int();
//        //while (medicines[last].quantity < 1 || medicines[last].quantity > 12) {
//        //    cout << "Ошибка! Такого месяца не существует. Введите месяц заново: ";
//        //    medicines[last].quantity = get_int();
//        //}
//    }
//    if (n3 == 5) {
//        //cout << "Введите цену: ";
//        medicines[i].price = get_int();
//        /*while (medicines[last].price < 1900 || medicines[last].price > 2023) {
//            cout << "Ошибка! Неверный год. Введите год заново: ";
//            medicines[last].price = get_int();
//        }*/
//    }
//    if (n3 == 6) {
//        //cout << "Введите форму выпуска: ";
//        get_string(medicines[i].form);
//        //while (medicines[last].course < 1 || medicines[last].course > 6) {
//        //    cout << "Ошибка! Такого курса не существует. Введите курс заново: ";
//        //    medicines[last].course = get_int();
//        //}
//    }
//    if (n3 == 7) {
//        //cout << "Введите производителя: ";
//        get_string(medicines[i].maker);
//    }
//    //system("cls");
//}
//
//void delete_medicine(medicine* medicines, int& last) {
//    if (!cheking(last)) return;
//    //print_medicines(medicines, last);
//    int i;
//    i = get_index(last);
//    //cout << "+------------------------------------+\n";
//    //cout << "| Вы уверены, что хотите удалить?    |\n";
//    //cout << "|  1. Да                             |\n";
//    //cout << "|  0. Нет                            |\n";
//    //cout << "+------------------------------------+\n";
//    int n1 = get_int(); 
//    while (n1 < 0 || n1 > 1) {
//        //cout << "Введите верный пункт меню\n";
//        n1 = get_int();
//    }
//    if (n1) {
//        for (int j = i; j < last; ++j) {
//            medicines[j] = medicines[j + 1];
//        }
//        last -= 1;
//    }
//    //system("cls");
//}
