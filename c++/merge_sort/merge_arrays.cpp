#include <iostream>

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int merged[]) {
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] <= arr2[j]) {
            merged[k] = arr1[i];
            i++;
        } else {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < size1) {
        merged[k] = arr1[i];
        i++;
        k++;
    }

    while (j < size2) {
        merged[k] = arr2[j];
        j++;
        k++;
    }
}

int main() {
    int size2 , int size1;
    int arr1[] = {1, 3, 5, 7};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2, 4, 6, 8};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int* merged = new int[size1 + size2];

    mergeArrays(arr1, size1, arr2, size2, merged);

    std::cout << "Merged Array: ";
    for (int i = 0; i < size1 + size2; i++) {
        std::cout << merged[i] << " ";
    }
    std::cout << std::endl;

    delete[] merged;

    return 0;
}