#include "io.hpp"
#include "shell_sortings.hpp"

int main() {
    vector <int> arr = {1, 8, 2, 5, 3, 11};
	cout << "Исходный массив:";
	
	aba::print_array("Массив до сортировки:", arr, arr_size);
    
    aba::sortings::shell_sort(arr);

    aba::print_array("Массив после сортировки:", arr, arr_size);

    return 0;
}
