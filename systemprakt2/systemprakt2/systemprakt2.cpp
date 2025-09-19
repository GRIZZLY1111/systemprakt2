// systemprakt2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
struct Rectangle{
    double width;
    double height;
};
class String {
private:
    char str[100];

public:
    String() {
        str[0] = '\0';
    }
    String(const char s[]) {
        int i = 0;
        while (s[i] != '\0' && i < 99) {
            str[i] = s[i];
            i++;
        }
        str[i] = '\0';
    }
    //конкатенация строки
    void concat(String other) {
        int i = 0;
        while (str[i] != '\0') {
            i++;
        }
        int j = 0;
        while (other.str[j] != '\0' && i < 99) {
            str[i] = other.str[j];
            i++;
            j++;
        }
        str[i] = '\0';
    }
    void print() {
        std::cout << str;
    }
};


int main()
{
    setlocale(0, "rus");
    //Задание 1 Варант 22
    /*
    std::cout << "Элементы массива: ";
    srand(time(NULL));
    int arr[10];
    for (int i = 0;i < 10;i++) {
        arr[i] = rand() % 10;
    }
    int sum = 0;
    for (int i = 0;i < 10;i++) {
        sum += arr[i];
        std::cout << arr[i]<<" ";
    }
    std::cout<<"\n";
    double sr = 0.0;
    sr = sum / 10;
    std::cout <<"Среднее арифметическое = " << sr << "\n";
    int count = 0;
    for (int i = 0; i < 10; i++) {
        if (sr < arr[i]) {
            count++;
        } 
    }
    std::cout <<"Элементов больше среднего арифметического:" << count;
    */

    //Задание 2 Вариант 22

    /*
    std::cout << "Элементы массива: \n";
    srand(time(NULL));
    int arr[3][3];
    for (int i = 0;i < 3;i++) {
        for (int j = 0;j < 3;j++) {
            arr[i][j] = rand() % 10;
            std::cout << arr[i][j] << " ";
        }
        std::cout << "\n";
    }
    int count = 0;
    for (int i = 0;i < 3;i++) {
        int sum = 0;
        for (int j = 0;j < 3;j++) {
            sum += arr[i][j];
        }
        double sr = 0.0;
        sr = sum / 3;
        std::cout << "Среднее арифметическое "<<i+1<<" строки = " << sr << "\n";
        for (int j = 0;j < 3;j++) {
            if (sr < arr[i][j]) {
                count++;
            }
        }

    }
    std::cout << "Элементов больше среднего арифметического:" << count<<std::endl;
    */

    //Задание 3 Вариант 22

    
    Rectangle myRectangle;
    bool f = true;
    while (f) {
        std::cout << "Введите ширину\n";
        std::cin >> myRectangle.width;
        if (myRectangle.width > 0) {
            f = false;
        }
        else {
            std::cout << "Ошибка! Ширина не может быть меньше или равна нулю"<<std::endl;
        }
    }
    f = true;
    while (f) {
        std::cout << "Введите высоту\n";
        std::cin >> myRectangle.height;
        if (myRectangle.height > 0) {
            f = false;
        }
        else {
            std::cout << "Ошибка! Высота не может быть меньше или равна нулю"<<std::endl;
        }
    }
    double P = myRectangle.width * 2 + myRectangle.height * 2;
    std::cout << "Периметр прямоугольника = " << P<<std::endl;
    double S = myRectangle.width * myRectangle.height;
    std::cout << "Площадь заданного прямоугольнка = " << S<<std::endl;
    

    //Задания 4 Вариант 22
    /*
    String s1("Привет меня зовут ");
    String s2("Мехрдод");
    std::cout << "Первая строка: ";
    s1.print();
    std::cout << std::endl;
    std::cout << "Вторая строка: ";
    s2.print();
    std::cout << std::endl;
    s1.concat(s2);
    std::cout << "После склейки: ";
    s1.print();
    std::cout << std::endl;
    return 0;
    */
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
