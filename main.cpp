#include <bits/stdc++.h> 

using namespace std; 
  
void insertionSort(int array[], int jumlah)  {  
    int i, key, j;  
    for (i = 1; i < jumlah; i++) {
        key = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > key) {  
            array[j + 1] = array[j];  
            j = j - 1;  
        }  
        array[j + 1] = key;  
    }  
}  

void print(int array[], int jumlah){  
    int i;  
    for (i = 0; i < jumlah; i++)  
        cout << array[i] << " ";  
    cout << endl; 
}  
  
int main()  {  
    int array[] = { 12, 11, 13, 5, 6 };  
    int jumlah = sizeof(array) / sizeof(array[0]);  
    insertionSort(array, jumlah);  
    cout<<" Hasil pengurutan : "; print(array, jumlah);   
    return 0;
}