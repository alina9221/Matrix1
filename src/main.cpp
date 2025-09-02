#include <src/matrix.h>
#include <iostream>

class Matrix {
private:
    std::vector<std::vector<int>> data;
    int rows, cols;

public:
    // Конструктор
    Matrix(int r, int c) : rows(r), cols(c) {
        data.resize(rows, std::vector<int>(cols, 0));
    }
 


};    

int main()
{
    math::Matrix m(3, 3); //Инициализация матрицы m
    m(0,0) = 1.;
    m(1,1) = 1.;

    math::Matrix m1(3, 3); //Инициализация матрицы m1
    m1(0,0)=5.;
    m1(1,1)=5.;

    math::Matrix m5(3, 3); 
    m5=m;

    math::Matrix m6(3, 3); 
    m6=m;

    std::cout << "Matrix m is:" << std::endl; //Вывод матрицы m
    m.print();

    std::cout << std::endl
              << "Matrix m1 is:" << std::endl; //Вывод матрицы m1
    m1.print();

    std::cout << std::endl //Суммирование m и m1
              << "Sum of matrices m and m1 is:" << std::endl; 
    math::Matrix m2 = m + m1;
    m2.print();

    std::cout << std::endl //Вычитание m и m1
              << "Subtract of matrices m and m1 is:" << std::endl; 
    math::Matrix m3 = m - m1;
    m3.print();

    std::cout << std::endl //Умножение m и m1
              << "Multiplication of matrices m and m1 is:" << std::endl;
    math::Matrix m4 = m * m1;
    m4.print();

    std::cout << std::endl //Суммирование m1 и m5
              << "Sum of matrices m5 and m1 is:" << std::endl;
    m5 += m1;
    m5.print();

    std::cout << std::endl //Вычитание m1 и m5
              << "Subtract of matrices m6 and m1 is:" << std::endl;
    m6 -= m1;
    m6.print();

    std::cout << std::endl //Умножение m6 на 5
              << "Multiplication of matric on 5 is:" << std::endl;
    m6 *= 5;
    m6.print();

    return 0;
}
