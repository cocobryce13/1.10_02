#include <iostream>
#include <windows.h>

double* createArray(int size)
{
    double* arr = new double[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = 0;
    }
    
    return arr;
}

void Array(double* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n\n\n";
}

void freeArray(double* arr)
{
    delete[] arr;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int size;
    std::cout << "Введите размер массива: ";
    std::cin >> size;

    double* arr = createArray(size);
    Array(arr, size);
    freeArray(arr);
    

    return 0;
}