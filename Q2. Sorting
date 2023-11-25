#include <iostream>
using namespace std;
class SortArray {
private:
    int size;
    int* arr;
public:
    SortArray(int s) {
        size = s;
        arr = new int[size];
    }
    void inputArray() {
        cout << "Enter " << size << " elements:\n";
        for (int i = 0; i < size; ++i) {
            cout << "Element " << i + 1 << ": ";
            cin >> arr[i];
        }
    }
    void sortArray() {
        int minIndex;
        for (int i = 0; i < size - 1; ++i) {
            minIndex = i;
            for (int j = i + 1; j < size; ++j) {
                if (arr[j] < arr[minIndex]) {
                    minIndex = j;
                }
            }
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
    void displayArray() {
        cout << "Sorted array in ascending order:\n";
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    SortArray myArray(size);
    myArray.inputArray();
    myArray.sortArray();
    myArray.displayArray();
    return 0;
}
