#include <iostream>
using namespace std;

int main() {
    int i, n, j, temp;
    int A[100];
    
    cout << "Insertion ascending\n";
    cout << "Jumlah data : ";
    cin >> n;
    cout << endl;
    
    for (i = 0; i < n; i++) {
        cout << "Data ke - " << i+1 << " : ";
        cin >> A[i];
    }
    
    for(i = 1; i < n; i++){
        temp = A[i];
        j = i - 1;
        while(A[j] > temp && j >= 0) {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = temp;
    }
    
    // hasil
    cout << "Data Setelah Di urutkan : \n";
    for (i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    
    return 0;
}
