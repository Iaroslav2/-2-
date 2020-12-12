#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
	int main() {
		char arr[256];
		printf("vvedite stroku: ");
		fgets(arr, 255, stdin);
		int left = 0, right = 0, len = 0, i = 0, sim = 0, polov = 0;
		printf("\nsimmetrichnie slova -> ");
		while (arr[i] != '\0') {
			if ((arr[i] >= 'A' && arr[i] <= 'Z') || (arr[i] >= 'a' && arr[i] <= 'z')) {
				len++;
				polov = len / 2;
			}
			else {
				for (left = i - len, right = i - 1; left < right; ++left, --right) {
					if (arr[left] == arr[right]) {
						sim++;
					}
				}
				if (sim == polov){
					for (left = i - len; left <= i - 1; left++) {
						printf("%c", arr[left]);
						if (left > i - 2) {
							printf("  ");
						}
					}
				}
				sim = 0;
				len = 0;
			}
			i++;
		}
		printf("\n\n");
		printf("nesimmetrichnie slova -> ");
		i = 0;
		while (arr[i] != '\0') {
			if ((arr[i] >= 'A' && arr[i] <= 'Z') || (arr[i] >= 'a' && arr[i] <= 'z')) {
				len++;
				polov = len / 2;
			}
			else {
				for (left = i - len, right = i - 1; left < right; ++left, --right) {
					if (arr[left] == arr[right]) {
						sim++;
					}
				}
				if (sim != polov) {
					for (left = i - len; left <= i - 1; left++) {
						printf("%c", arr[left]);
						if (left > i - 2) {
							printf("  ");
						}
					}
				}
				sim = 0;
				len = 0;
			}
			i++;
		}
		printf("\n");
		return 0;
    }