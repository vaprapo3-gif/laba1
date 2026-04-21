#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Введіть кількість елементів масиву: ";
    cin >> n;

    int a[100];
    double sum = 0;

    cout << "Введіть елементи масиву:" << endl;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    double average = sum / n;

    cout << "Середнє арифметичне = " << average << endl;

    // сортування
    for(int k = 0; k < n; k++) {

        // парні індекси (0,2,4...) — за зростанням
        for(int i = 0; i + 2 < n; i += 2) {
            if(a[i] > a[i + 2]) {
                int temp = a[i];
                a[i] = a[i + 2];
                a[i + 2] = temp;
            }
        }

        // непарні індекси (1,3,5...) — за спаданням
        for(int i = 1; i + 2 < n; i += 2) {
            if(a[i] < a[i + 2]) {
                int temp = a[i];
                a[i] = a[i + 2];
                a[i + 2] = temp;
            }
        }
    }

    cout << "Масив після сортування:" << endl;
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}