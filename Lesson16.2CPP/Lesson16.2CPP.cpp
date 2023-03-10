// Lesson16.2CPP.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
/*
#define _USE_MATH_DEFINES


#include <numbers>
#include <math.h>

using namespace std;

class Circle
{
private: 
    double _x;
    double _y;
    double _radius;
public:
    Circle(double x, double y, double radius)
    {
        _x = x;
        _y = y;
        _radius = radius;
    }

    bool operator==(Circle circle)
    {
        return _radius == circle._radius;
    }

    bool operator>(Circle circle)
    {
        return (2 * M_PI * _radius > 2 * M_PI * circle._radius);
    }
    bool operator<(Circle circle)
    {
        return (2 * M_PI * _radius < 2 * M_PI * circle._radius);
    }
    friend Circle& operator+=(Circle& circle, double incr)
    {
        circle._radius += incr;
        return circle;
    }
    friend Circle& operator-=(Circle& circle, double incr)
    {
        circle._radius -= incr;
        return circle;
    }

    friend ostream& operator<<(ostream& out, Circle circle)
    {
        out << "Координаты центра окружности: " << circle._x << ":" << circle._y << "\n";
        out << "Радиус окружности: " << circle._radius << "\n";
        out << "Длина окружности: " << 2 * M_PI * circle._radius << "\n";
        return out;
    }
};
*/

class Airplane
{
private:
    std::string _type;
    int _currentCountPassengers;
    int _maxCountPassengers;
public:
    Airplane(std::string type, int passengers, int maxpassengers)
    {
        _type = type;
        _currentCountPassengers = passengers;
        _maxCountPassengers = maxpassengers;
    }

    bool operator==(Airplane plane)
    {
        return (_type == plane._type && _maxCountPassengers == plane._maxCountPassengers);
    }
    friend Airplane operator++(Airplane& plane)
    {
        ++plane._currentCountPassengers;
        return plane;
    }
    friend Airplane operator--(Airplane& plane)
    {
        ++plane._currentCountPassengers;
        return plane;
    }    
    bool operator>(Airplane& plane)
    {
        return (_maxCountPassengers > plane._maxCountPassengers);
    }
    bool operator<(Airplane& plane)
    {
        return (_maxCountPassengers < plane._maxCountPassengers);
    }
    friend std::ostream& operator<<(std::ostream& out, Airplane plane)
    {
        out << "Тип самолета: " << plane._type << "\n";
        out << "Количество пассажиров: " << plane._currentCountPassengers << "\n";
        out << "Максимальная вместимость: " << plane._maxCountPassengers << "\n";
        return out;
    }
};
int main()
{    
    setlocale( LC_ALL, "Russian");

    Airplane plane("Boieng", 5, 100);
    Airplane plane2("Boieng", 15, 95);
    std::cout << plane;
    ++plane;
    std::cout << plane;

    std::cout << (plane < plane2) << "\n";

    std::cout << (plane > plane2) << "\n";

    /*Circle circle1(1, 1, 5);
    Circle circle2(2, 5, 2);

    std::cout << (circle1 == circle2) << "\n";
    std::cout << (circle1 > circle2) << "\n";
    std::cout << (circle1 < circle2) << "\n";
    std::cout << circle1 << "\n";
    circle1 += 5.0;
    std::cout << circle1 << "\n";
    circle1 -= 3.0;
    std::cout << circle1 << "\n";
    */
    std::cout << "Hello World!\n";
    return 0;
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
