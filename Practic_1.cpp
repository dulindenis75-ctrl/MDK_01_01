#include <iostream>
#include <cmath> // Библиотека математических функций

using namespace std; // Очень удобная вещь, для группирования идентификаторов (функций, классов, переменных) в логические блоки, чтобы избежать конфликтов имён и лучше структурировать код


void test_1() {
    cout << "C++ is a general-purpose programming language with a bias towards systems programming that\n";
    cout << "is a better C\n";
    cout << "supports data abstraction\n";
    cout << "supports object-oriented programming\n";
    cout << "supports generic programming.\n";
}


long long test_2(long long anter, long long befor) 
{
    return anter + befor;
}


double test_3(double cm) {
    return cm / 2.54;
}


long long test_4(long long n) {
    // Используется long long, чтобы избежать переполнения при n до max
    return n * (n + 1) / 2;
}


int test_9(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {

    test_1();


    long long anter, befor;
    cin >> anter >> befor;
    cout << test_2(anter, befor) << "\n";


    double cm;
    cin >> cm;
    cout << test_3(cm) << "\n";


    long long n;
    cin >> n;
    cout << test_4(n) << "\n";
    

    int n;
    cin >> n;
    cout << test_9(n) << "\n";
    

    return 0;
}
