#include "ArrayHelper.h"
#include <time.h>

template<class T>
T GenerateRandomNumber(int lowerBound, int upperBound, double scaler = 1)
{
    lowerBound *= scaler;
    upperBound *= scaler;

    T randomData = lowerBound + rand() % (upperBound - lowerBound + 1);
    randomData /= scaler;

    return randomData;
}

int main()
{
    cout << "-------------------------------------------" << endl;
    cout << "Int Test" << endl;
    srand(time(NULL));
    int minIndex, maxIndex;
    ArrayHelper<int> IntegerArrayHelper;
    int IntegerArray1[10];
    for (size_t i = 0; i < 10; i++)
    {
        IntegerArray1[i] = GenerateRandomNumber<int>(-50, 50);
    }
    cout << "Array 1 Original: " << endl;
    IntegerArrayHelper.Display(IntegerArray1, 10, 5, 4);
    IntegerArrayHelper.Sort(IntegerArray1, 10);
    cout << "Array 1 Sorted: " << endl;
    IntegerArrayHelper.Display(IntegerArray1, 10, 5, 4);
    minIndex = IntegerArrayHelper.MinIndex(IntegerArray1, 10);
    maxIndex = IntegerArrayHelper.MaxIndex(IntegerArray1, 10);
    cout << "Array 1 Min : " << IntegerArray1[minIndex] << endl;
    cout << "Array 1 Max : " << IntegerArray1[maxIndex] << endl;


    int IntegerArray2[5];
    for (size_t i = 0; i < 5; i++)
    {
        IntegerArray2[i] = GenerateRandomNumber<int>(-50, 50);
    }

    cout << "Array 2 Original: " << endl;
    IntegerArrayHelper.Display(IntegerArray2, 5, 5, 4);

    int* newArray = IntegerArrayHelper.Merge(IntegerArray1, 10, IntegerArray2, 5);
    cout << "Merged Array: " << endl;
    IntegerArrayHelper.Display(newArray, 15, 5, 4);
    IntegerArrayHelper.Sort(newArray, 15);
    cout << "Merged Array Sorted: " << endl;
    IntegerArrayHelper.Display(newArray, 15, 5, 4);
    minIndex = IntegerArrayHelper.MinIndex(newArray, 15);
    maxIndex = IntegerArrayHelper.MaxIndex(newArray, 15);
    cout << "Merged Array Min : " << newArray[minIndex] << endl;
    cout << "Merged Array Max : " << newArray[maxIndex] << endl;

    /* REPEAT SAME TEST FOR DOUBLE ARRAY AND CHARACTER ARRAY */


    cout << "-------------------------------------------" << endl;
    cout << "Double Test" << endl;
    ArrayHelper<double> DoubleArrayHelper;
    double DoubleArray1[10];
    for (size_t i = 0; i < 10; i++)
    {
        DoubleArray1[i] = GenerateRandomNumber<double>(-50, 50, 100);
    }
    cout << "Array 1 Original: " << endl;
    DoubleArrayHelper.Display(DoubleArray1, 10, 5, 4);
    DoubleArrayHelper.Sort(DoubleArray1, 10);
    cout << "Array 1 Sorted: " << endl;
    DoubleArrayHelper.Display(DoubleArray1, 10, 5, 4);
    minIndex = DoubleArrayHelper.MinIndex(DoubleArray1, 10);
    maxIndex = DoubleArrayHelper.MaxIndex(DoubleArray1, 10);
    cout << "Array 1 Min : " << DoubleArray1[minIndex] << endl;
    cout << "Array 1 Max : " << DoubleArray1[maxIndex] << endl;



    double DoubleArray2[5];
    for (size_t i = 0; i < 5; i++)
    {
        DoubleArray2[i] = GenerateRandomNumber<double>(-100, 100, 200);
    }
    cout << "Array 2 Original: " << endl;
    DoubleArrayHelper.Display(DoubleArray2, 5, 5, 4);
    double* newDoubleArray = DoubleArrayHelper.Merge(DoubleArray1, 10, DoubleArray2, 5);
    cout << "Merged Array: " << endl;
    DoubleArrayHelper.Display(newDoubleArray, 15, 5, 4);
    DoubleArrayHelper.Sort(newDoubleArray, 15);
    cout << "Merged Array Sorted: " << endl;
    DoubleArrayHelper.Display(newDoubleArray, 15, 5, 4);
    minIndex = DoubleArrayHelper.MinIndex(newDoubleArray, 15);
    maxIndex = DoubleArrayHelper.MaxIndex(newDoubleArray, 15);
    cout << "Merged Array Min : " << newDoubleArray[minIndex] << endl;
    cout << "Merged Array Max : " << newDoubleArray[maxIndex] << endl;

    cout << "-------------------------------------------" << endl;
    cout << "Char Test" << endl;
    ArrayHelper<char> CharArrayHelper;
    char CharArray1[10];
    for (size_t i = 0; i < 10; i++)
    {
        CharArray1[i] = GenerateRandomNumber<char>(65, 90);
    }
    cout << "Array 1 Original: " << endl;
    CharArrayHelper.Display(CharArray1, 10, 5, 4);
    CharArrayHelper.Sort(CharArray1, 10);
    cout << "Array 1 Sorted: " << endl;
    CharArrayHelper.Display(CharArray1, 10, 5, 4);
    minIndex = CharArrayHelper.MinIndex(CharArray1, 10);
    maxIndex = CharArrayHelper.MaxIndex(CharArray1, 10);
    cout << "Array 1 Min : " << CharArray1[minIndex] << endl;
    cout << "Array 1 Max : " << CharArray1[maxIndex] << endl;

    char CharArray2[5];
    for (size_t i = 0; i < 5; i++)
    {
        CharArray2[i] = GenerateRandomNumber<char>(97, 122);
    }

    cout << "Array 2 Original: " << endl;
    CharArrayHelper.Display(CharArray2, 5, 5, 4);
    char* newCharArray = CharArrayHelper.Merge(CharArray1, 10, CharArray2, 5);
    cout << "Merged Array: " << endl;
    CharArrayHelper.Display(newCharArray, 15, 5, 4);
    CharArrayHelper.Sort(newCharArray, 15);
    cout << "Merged Array Sorted: " << endl;
    CharArrayHelper.Display(newCharArray, 15, 5, 4);
    minIndex = CharArrayHelper.MinIndex(newCharArray, 15);
    maxIndex = CharArrayHelper.MaxIndex(newCharArray, 15);
    cout << "Merged ArrayMin : " << newCharArray[minIndex] << endl;
    cout << "Merged ArrayMax : " << newCharArray[maxIndex] << endl;

    return 0;
}
