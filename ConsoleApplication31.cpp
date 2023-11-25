// ConsoleApplication31.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <variant>
#include <iterator>
    std::variant<int, std::string, std::vector<int>> get_variant() {
    std::srand(std::time(nullptr));
    int random_variable = std::rand() % 3;

    std::variant<int, std::string, std::vector<int>> result;
    switch (random_variable)
    {
    case 0:
        result = 5;
        break;
    case 1:
        result = "string";
        break;
    case 2:
        result = std::vector<int>{ 1, 2, 3, 4, 5 };
       // std::copy(get<std::vector>(result).begin(), get<std::vector>(result).end(), std::ostream_iterator<int>(std::cout, " "));
       // std::vector <int>::iterator p;
        //for (p = result.begin(); p < result.end(); p++) cout << *p << " ";
        break;
    default:
        break;
    }
    return result;
}

int main()
{
    //std::cout << "Hello World!\n";
    std::variant<int, std::string, std::vector<int>> result1;
    setlocale(LC_ALL, "Russian");
    result1=get_variant();
    if (holds_alternative<int>(result1)) std::cout << 2*get<int>(result1) << std::endl;
    if (holds_alternative<std::string>(result1)) std::cout << get<std::string>(result1) << std::endl;
    if (holds_alternative<std::vector<int>>(result1))
    {
       //std:: vector <int>::iterator p;
      //  for (p = result1.begin(); p < result1.end(); p++) cout << *p << " ";
        std::vector<int> a;
        a= get <std::vector<int>>(result1);

        //std::copy(a.begin(), a.end(), std::ostream_iterator<int>(std::cout, " "));
        for (int n : a) { std::cout << n << "  "; }
        
    }

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
/*#include <iostream>
#include <vector>
#include <algorithm>
#include <variant>

int main() {
    std::vector<int> a_vec(4, 8);
    std::cout << "Сoдержимое вектора : ";
    std::copy(a_vec.begin(), a_vec.end(), std::ostream_iterator<int>(std::cout, " "));

    return 0;
}
*/