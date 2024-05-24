#include "Header.h"

char* int_to_char(int i) {
    char* c = new char[5];
    std::string s;
    while (i > 0) {
        s.push_back(i % 10 + '0');
        i /= 10;
    }
    s.reserve();
    for (int i = 0; i < s.length(); ++i) {
        c[i] = s[i];
    }
    return c;
}

void get_string_from_file(std::string &a, std::ifstream& input) {
    a.resize(0);
    char c;
    input >> c;
    int i = 0;
    while (c != '\n' && c != '\t' && !input.eof()) {
        a.push_back(c);
        i += 1;
        c = input.get();
    }
}

void save_medicines_to_txt(Medicine* medicines, int last) {
    std::ofstream output("medicines.txt");
    for (int i = 0; i < last; ++i) {
        output << medicines[i].id;
        output << '\t' << medicines[i].name;
        output << '\t' << medicines[i].maker;
        output << '\t' << medicines[i].category;
        output << '\t' << medicines[i].form;
        output << '\t' << medicines[i].price;
        output << '\t' << medicines[i].quantity;
        output << '\t' << std::endl;
    }
    output.close();
}

void read_medicines_from_txt(Medicine* medicines, int& last) {
    std::ifstream input("medicines.txt");
    int i = 0;
    while (!input.eof()) {
        input >> medicines[i].id;
        get_string_from_file(medicines[i].name, input);
        get_string_from_file(medicines[i].maker, input);
        get_string_from_file(medicines[i].category, input);
        get_string_from_file(medicines[i].form, input);
        input >> medicines[i].price;
        input >> medicines[i].quantity;
        i += 1;
    }
    last = i - 1;
    input.close();
}

void save_medicines_to_txt2(Medicine* medicines, int last) {
    std::ofstream output("medicines_search.txt");
    output << "Медицинские препараты\n";
    output << std::setw(3) << std::left << "№";
    output << std::setw(15) << "Название";
    output << std::setw(15) << "Производитель";
    output << std::setw(22) << "Категория";
    output << std::setw(10) << "Форма";
    output << std::setw(6) << "Цена";
    output << std::setw(6) << "Количество" << "\n\n";
    for (int i = 0; i < last; ++i) {
        output << std::setw(3) << i + 1;
        output << std::setw(15) << medicines[i].name;
        output << std::setw(15) << medicines[i].maker;
        output << std::setw(22) << medicines[i].category;
        output << std::setw(10) << medicines[i].form;
        output << std::setw(6) << medicines[i].price;
        output << std::setw(6) << medicines[i].quantity;
        output << std::endl;
    }
    output.close();
}

//void print_medicine_table(std::ofstream output) {
//    output << "+--------------------------------------------------------------------------------+\n";
//    output << "|   id  |       Категория |   Название |   Количество | Цена |     Производитель |" << endl;
//}
//
//
//void print_str(std::string str1, int l, int r, std::ofstream& output) {
//    for (int i = l; i <= r; ++i) {
//        if (str1[i] != '\0') {
//            output << str1[i];
//        }
//        else {
//            output << " ";
//        }
//    }
//}
//
//void print_medicine_info(Medicine st, int i, std::ofstream& output) {
//    output << "| " << std::setw(5) << st.id << " | ";
//    print_str(st.category, 0, 14, output);
//    output << " | ";
//    print_str(st.name, 0, 9, output);
//    output << " | " << std::setw(12) << st.quantity << " | " << std::setw(4) << st.price;
//    output << " | ";// << setw(4) << st.course << " | ";
//    print_str(st.maker, 0, 16, output);
//    output << " | " << std::endl;
//    int i1 = 10;
//    while (st.category[i1] != '\0' || st.name[i1] != '\0') {
//        output << "| " << std::setw(5) << " " << " | ";
//        print_str(st.category, i1, i1 + 9, output);
//        output << " | ";
//        print_str(st.name, i1, i1 + 9, output);
//        output << " | " << std::setw(4) << " " << " | " << std::setw(5) << " " << " | " << std::setw(4) << " ";
//        output << " | " << std::setw(4) << " " << " | " << std::setw(10) << " " << " | " << std::endl;
//        i1 += 10;
//    }
//}
//
//
//void print_medicines(Medicine* medicines, int last) {
//    std::ofstream output("medicines_search.txt");
//    print_medicine_table(output);
//    for (int i = 1; i < last; ++i) {
//        output << "|       |                 |            |              |      |                   |\n";
//        print_medicine_info(medicines[i], i, output);
//    }
//    output << "+--------------------------------------------------------------------------------+\n";
//}


//
//void save_medicines_to_bin(medicine* medicines, int last) {
//    fstream output("binary_file.bin", std::ios::out | std::ios::binary);
//    for (int i = 1; i < last; ++i) {
//        output.write(reinterpret_cast<const char*>(&medicines[i]), sizeof(medicines[i]));
//    }
//    output.close();
//}
//
//void read_medicines_from_bin(medicine* medicines, int& last) {
//    fstream input("binary_file.bin", std::ios::in | std::ios::binary);
//    int i = 0;
//    while (!input.eof()) {
//        i += 1;
//        input.read(reinterpret_cast<char*>(&medicines[i]), sizeof(medicines[i]));
//    }
//    last = i;
//    input.close();
//}
//
//void from_txt_to_bin() {
//    ifstream output("medicines.txt");
//    fstream input("binary_file.bin", std::ios::in | std::ios::binary);
//    medicine st;
//    int j = 0;
//    while (!output.eof()) {
//        output >> j;
//        get_string_from_file(st.category, output);
//        get_string_from_file(st.name, output);
//        output >> st.id >> st.quantity >> st.price;
//        output >> st.maker;
//        input.read(reinterpret_cast<char*>(&st), sizeof(st));
//    }
//    input.close();
//    output.close();
//}