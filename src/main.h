#pragma once
#include <vector>

namespace math
{
    typedef double real;

    class Matrix
    {
    private: // Закрытое число строк, столбцов и вектора матрицы
        int cols_;
        int rows_;
        std::vector<real> mvec_;
    public:
        Matrix(){}; // Открытый конструктор по умолчанию

        Matrix(int rows, int cols) : cols_(cols), rows_(rows), mvec_(std::vector<real>(rows * cols)) {}; // Конструктор матрицы с заданными размерами в виде вектора 

        real& operator()(int row, int col); // доступ к членам матрицы

        real operator()(int row, int col) const;

        void print(); // Вывод матрицы

        friend Matrix operator+(const Matrix& A, const Matrix& B); // Дружественная функция сложения матриц

        friend Matrix operator-(const Matrix& A, const Matrix& B); // Дружественная функция Вычитания матриц

        friend Matrix operator*(const Matrix& A, const Matrix& B); // // Дружественная функция умножение матриц

        Matrix operator+=(const Matrix& A); // Дружественная функция сложения матриц
    };
} 
