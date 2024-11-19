#include "shell_sorting.hpp"

void aba::sortings::shell_sort(vector<int>& a) {
	int h = 1;
	int n = a.size();
	while (3 * h + 1 <= (n + 2) / 3)
		h = 3 * h + 1;
	for (; h > 0; h /= 3) {
		for (int i = h; i < n; ++i) {
			int temp = a[i];
			int j = i;
			for (; j >= h && a[j - h] > temp; j -= h)
				a[j] = a[j - h];
			a[j] = temp;
			
		}
		
	}
	
}