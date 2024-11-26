#include <iostream>

void print_dynamic_array(int* arr, int logical_size, int actual_size) {
    for (int i = 0; i < actual_size; ++i) {
        if (i < logical_size) {
            std::cout << arr[i] << (i == logical_size - 1 ? "" : " ");
        }
        else {
            std::cout << "_" << (i == actual_size - 1 ? "" : " ");
        }
    }
    std::cout << std::endl;
}

int main() {
    setlocale(LC_ALL, "Russian");

    int actual_size, logical_size;

    std::cout << "Введите фактический размер массива: ";
    std::cin >> actual_size;
    std::cout << "Введите логический размер массива: ";
    std::cin >> logical_size;

    if (logical_size > actual_size) {
        std::cout << "Ошибка! Логический размер массива не может превышать фактический!" << std::endl;
        return 1;
    }

    int* arr = new int[actual_size];

    for (int i = 0; i < logical_size; ++i) {
        std::cout << "Введите arr[" << i << "]: ";
        std::cin >> arr[i];
    }

    std::cout << "Динамический массив: ";
    print_dynamic_array(arr, logical_size, actual_size);

    delete[] arr;
    return 0;
}

