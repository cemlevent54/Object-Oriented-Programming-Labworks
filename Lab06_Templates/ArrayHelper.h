#pragma once
#include <iostream>
#include <algorithm>
using namespace std;

template <typename T>
class ArrayHelper {
public:
    ArrayHelper();
    ~ArrayHelper();
    void Display(T* array, int size, int numberOfElementsInOneLine, int oneElementLength);
    int MaxIndex(T* array, int size);
    int MinIndex(T* array, int size);
    T* Merge(T* firstArray, int firstArraySize, T* secondArray, int secondArraySize);
    void Sort(T* array, int size);
    void Swap(T& a, T& b);
};


template <typename T>
ArrayHelper<T>::ArrayHelper() {}

template <typename T>
ArrayHelper<T>::~ArrayHelper() {}

template <typename T>
void ArrayHelper<T>::Display(T* array, int size, int numberOfElementsInOneLine, int oneElementLength) {
    for (int i = 0; i < size; i++) {
        cout.width(oneElementLength);
        cout << array[i] << " ";
        if ((i + 1) % numberOfElementsInOneLine == 0)
            cout << std::endl;
    }
    cout << std::endl;
}

template <typename T>
int ArrayHelper<T>::MaxIndex(T* array, int size) {
    int maxIndex = 0;
    for (int i = 1; i < size; i++) {
        if (array[i] > array[maxIndex])
            maxIndex = i;
    }
    return maxIndex;
}

template <typename T>
int ArrayHelper<T>::MinIndex(T* array, int size) {
    int minIndex = 0;
    for (int i = 1; i < size; i++) {
        if (array[i] < array[minIndex])
            minIndex = i;
    }
    return minIndex;
}

template <typename T>
T* ArrayHelper<T>::Merge(T* firstArray, int firstArraySize, T* secondArray, int secondArraySize) {
    int mergedSize = firstArraySize + secondArraySize;
    T* mergedArray = new T[mergedSize];
    for (int i = 0; i < firstArraySize; i++)
        mergedArray[i] = firstArray[i];
    for (int i = 0; i < secondArraySize; i++)
        mergedArray[firstArraySize + i] = secondArray[i];
    return mergedArray;
}

template <typename T>
void ArrayHelper<T>::Sort(T* array, int size) {
    std::sort(array, array + size);
}

template <typename T>
void ArrayHelper<T>::Swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}


