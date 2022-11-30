/*Sort9 Дано натуральное N и массив целых чисел размерности N. 
Отсортировать данный массив по убыванию методом простых вставок.*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    ifstream f;
    f.open("Sort9.txt");
    int n;
    if (!f.is_open())
    {
        cout << "Ошибка при открытии файла";
    }
    else
    {
        f >> n;
        int* a = new int[n];

        for (int i = 0; i < n; i++)
        {
            int num;
            f >> num;
            a[i] = num;
        }
        int tmp;
        for (int i = 1, j; i < n; i++)
        {
            tmp = a[i];
            for (j = i - 1; j >= 0 && a[j] < tmp; j--)
                a[j + 1] = a[j];
                a[j + 1] = tmp;
                for (int i = 0; i < n; i++)
                   cout << a[i] << " ";
                cout << endl;
        }
    delete[]a;
    }
}
/*
12 2 23 34 4 78
23 12 2 34 4 78
34 23 12 2 4 78
34 23 12 4 2 78
78 34 23 12 4 2
*/

/*
0 -1 43 123 2 94 1 54
43 0 -1 123 2 94 1 54
123 43 0 -1 2 94 1 54
123 43 2 0 -1 94 1 54
123 94 43 2 0 -1 1 54
123 94 43 2 1 0 -1 54
123 94 54 43 2 1 0 -1
*/