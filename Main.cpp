#include<iostream>

template <typename T>
void print_arr(T arr[], const int length) {
	std::cout << "{ ";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b }\n";
}


void p_arr_swap(int arr[], const int length) {
	for (int i = 0; i < length; i++) {
		int* parr = &arr[i];
		if (i % 2 == 0)
			std::swap(*parr, *(parr + 1));
	}
}

void power(int* num, int num2) {
	int* degree = num;
	for (int i = 1; i < num2; i++)
		*degree *= *num;
	std::cout << "Полученное число = " << *degree;
}

int main() {
	setlocale(LC_ALL, "russian");
	//Задача 1.
	const int size1 = 10;
	int arr1[size1]{ 1,2,3,4,5,6,7,8,9,10 };
	std::cout << "Задача 1.\nИзначальный массив: ";
	print_arr(arr1, size1);
	p_arr_swap(arr1, size1);
	print_arr(arr1, size1);
	//Задача 2.
	int n, m;
	std::cout << "Задaча 2.\nВВедите число -> ";
	std::cin >> n;
	std::cout << "Введите степень -> ";
	std::cin >> m;
	power(&n, m);

	return 0;
}

