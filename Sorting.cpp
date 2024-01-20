#include <iostream>
#include <vector>
using namespace std;

// Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++)
        for (int j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
}


// Insertion Sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i], j = i - 1;
        while (j >= 0 && arr[j] > key) arr[j+1] = arr[j--];
        arr[j+1] = key;
    }
}

// Quick Sort
vector<int> quickSort(vector<int>& arr) {
    if (arr.size() <= 1) return arr;
    int pivot = arr.back(); arr.pop_back();
    vector<int> less, greater;
    for (int elem : arr) (elem <= pivot ? less : greater).push_back(elem);
    auto sortedLess = quickSort(less), sortedGreater = quickSort(greater);
    sortedLess.push_back(pivot);
    sortedLess.insert(sortedLess.end(), sortedGreater.begin(), sortedGreater.end());
    return sortedLess;
}

int main() {
    int bubbleArr[] = {64, 25, 12, 22, 11}, bubbleSize = sizeof(bubbleArr) / sizeof(bubbleArr[0]);
    bubbleSort(bubbleArr, bubbleSize);
    cout << "Bubble Sort: "; for (int i = 0; i < bubbleSize; i++) cout << bubbleArr[i] << " "; cout << endl;

    int insertionArr[] = {64, 25, 12, 22, 11}, insertionSize = sizeof(insertionArr) / sizeof(insertionArr[0]);
    insertionSort(insertionArr, insertionSize);
    cout << "Insertion Sort: "; for (int i = 0; i < insertionSize; i++) cout << insertionArr[i] << " "; cout << endl;

    vector<int> quickVec = {64, 25, 12, 22, 11};
    auto sortedQuick = quickSort(quickVec);
    cout << "Quick Sort: "; for (int elem : sortedQuick) cout << elem << " "; cout << endl;
    return 0;
}