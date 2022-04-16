
//#include <iostream>
//using namespace std;
///*
//Задание 1. Написать функцию, реализующую алгоритм
//линейного поиска заданного ключа в одномерном массиве.
//*/
//
//bool searchNumber(int arr[], int massivDimention, int number);
//
//int main()
//{
//    setlocale(LC_ALL, "Rus");
//    int userNumber;
//    int massiv[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//    int massivDimention = sizeof(massiv) / sizeof(int);
//    cout << "Программа поиска номера в массиве" << endl <<
//        "Массив: ";
//    for (int i = 0; i < massivDimention; i++)
//    {
//        cout << massiv[i] << " ";
//    }
//    cout << endl << "Введите число: ";
//    cin >> userNumber;
//
//    if (!searchNumber(massiv, massivDimention, userNumber))
//    {
//        cout << "Число " << userNumber << " не найдено в массиве" << endl;
//    }
//}
//
//bool searchNumber(int arr[], int masDim, int number)
//{
//    for (int i = 0; i < masDim; i++)
//    {
//        if (arr[i] == number)
//        {
//            cout << "Число " << number << " Найдено в номере ячейки " << i << endl;
//            return true;
//        }
//    }
//    return false;
//}


//***********************************//
//***********************************//
//***********************************//


//#include <iostream>
//#include <stdio.h>
//using namespace std;
///*
//Задание 2. Написать функцию, реализующую алгоритм
//бинарного поиска заданного ключа в одномерном массиве.
//*/
//
//int BinSearch(const int* arr, int count, int key);
//
//int main()
//{
//    setlocale(LC_ALL, "Rus");
//    const int n = 5;
//    int arr[n] = { 1, 2, 3, 4, 5 };
//    int key;
//    cout << "Бинарный поиск ключа ";
//    cout << "Введи число: ";
//    cin >> key;
//
//    if (BinSearch(arr, n, key) != -1)
//        cout << "Ключ найден" << endl;
//    else
//        cout << "Ключ не найден" << endl;
//
//    return 0;
//}
//
//int BinSearch(const int* arr, int count, int key)
//{
//    int l = 0;            // нижняя граница
//    int u = count - 1;    // верхняя граница
//
//    while (l <= u) {
//        int m = (l + u) / 2;
//        if (arr[m] == key) return m;
//        if (arr[m] < key) l = m + 1;
//        if (arr[m] > key) u = m - 1;
//    }
//    return -1;
//}


//***********************************//
//***********************************//
//***********************************//


#include <iostream>

using namespace std;
/*
Задание 3. Написать функцию для перевода числа,
записанного в двоичном виде, в десятичное представление.
*/
 

int main(void)
{
   setlocale(LC_ALL, "Rus");
    
   int i, sum = 0, n, r = 0;
   char date[255];
   cout << "Введите двоичное число" << endl;
   cin >> date;
   n = strlen(date);
   int* arr = new int[n];

   for (i = 0; i < n; i++) {
       arr[i] = (int)date[i] - (int)'0';
   }
   for (i = 0; i < n; i++) {
      cout << arr[i] << " ";
   }
   cout << " " << endl;
   for (i = 0; i < n; i++) {
       r = r + arr[i] * pow(2, n - i - 1);
   }
   cout << "Десятичное число равно " << r;
}
