// Используя указатель на массив целых чисел,
// изменить порядок следования элементов массива на
// противоположный.
// Использовать в программе арифметику указателей
// для продвижения по массиву, а также оператор разыменования.

#include <iostream>
#include <random>
#include <windows.h>
using namespace std;

template<typename T>
void FillArray(T* arr, int size);

template<typename T>
void PrintArray(T* arr, int size, bool isReverse);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int size = 0;
	cout << "Указать размер массива для заполнения : ";
	cin >> size;
	int* Array = new int[size];	

	FillArray(Array, size);

	cout << "Заполненный массив ------------------- >>" << endl;
	PrintArray(Array, size, false);

	cout << "Ревёрснутый массив ------------------- >>" << endl;	
	PrintArray(Array, size, true);
}

template<typename T>
void FillArray(T* arr, int size) {
	random_device random;
	for (T* i = arr; i < arr + size; ++i) {
		*i = random() % (100 + 50) - 50;
	}
}

template<typename T>
void PrintArray(T* arr, int size, bool isReverse) {

	if (!isReverse)
		for (T* i = arr; i < arr + size; ++i) cout << "[ " << *i << " ]";
	else
		for (T* j = arr + size - 1; j >= arr; --j)cout << "[ " << *j << " ]";

	cout << endl;
}
