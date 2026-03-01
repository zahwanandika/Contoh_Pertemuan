#include <iostream>
using namespace std;

int main (){
    int matriks1[10][10], matriks2[10][10], hasil[10][10];
    int i, j, k, m, n, p, q, jumlah = 0;

    cout << "Masukkan jumlah baris matriks pertama: ";
    cin >> m;
    cout << "Masukkan jumlah kolom matriks pertama: ";
    cin >> n;

    cout << "Masukkan jumlah baris matriks kedua: ";
    cin >> p;
    cout << "Masukkan jumlah kolom matriks kedua: ";
    cin >> q;

    if (n != p){
        cout << "Matriks tidak dapat dioperasikan\n";
        return 0;
    }

    cout << "Masukkan elemen matriks pertama: \n";
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            cout << "Matriks1[" << i << "][" << j << "]: ";
            cin >> matriks1[i][j];
        }
    }

    cout << "Masukkan elemen matriks kedua: \n";
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            cout << "Matriks2[" << i << "][" << j << "]: ";
            cin >> matriks2[i][j];
        }
    }

    for (i=0;i<m;i++){
        for (j=0;j<q;j++){
            hasil[i][j] = 0;
        }
    }

    for (i=0;i<m;i++){
        for (j=0;j<q;j++){
            jumlah = 0;
            for (k=0;k<n;k++){
                jumlah = matriks1[i][k] * matriks2[k][j];
            }
            hasil[i][j]=jumlah;
        }
    }

    cout << "Hasil perkalian matriks: \n";
    for (i=0;i<m;i++){
        for (j=0;j<q;j++){
            cout << hasil[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}