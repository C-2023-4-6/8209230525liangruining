#include <iostream>  
using namespace std;

void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) 
    {
        if (list1[i] < list2[j]) {
            list3[k] = list1[i];
            k++;
            i++;
        }
        else {
            list3[k] = list2[j];
            k++;
            j++;
        }
    }
    while (i < size1) {
        list3[k] = list1[i];
        k++;
        i++;
    }
    while (j < size2) {
        list3[k] = list2[j];
        k++;
        j++;
    }
    for (int n = 0; n < size1 + size2; n++) {
        cout << list3[n] << " ";
    }
}

int main() {
    int size1, size2;
    cout << "Enter list1:";
    cin >> size1;
    int list1[100];
    for (int i = 0; i < size1; i++)
    {
        cin >> list1[i];
    }
    cout << "Enter list2:";
    cin >> size2;
    int list2[100];
    for (int i = 0; i < size2; i++) 
    {
        cin >> list2[i];
    }
    cout << "The merged list is";
    int list3[200];
    merge(list1, size1, list2, size2, list3);
    return 0;
}