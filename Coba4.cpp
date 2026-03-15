#include <iostream>
using namespace std;

class Node{
    public:
    string judul, penulis;
    int harga, halaman;
    Node* next;
};

int main (){
    //Buat Node pertama
    Node* head = new Node();
    cout << "Nama: ";
    cin >> head->judul;
    cout << "Penulis: ";
    cin >> head->penulis;
    cout << "Banyak halaman: ";
    cin >> head->halaman;
    cout << "Harga: ";
    cin >> head->harga;
    head->next = NULL;

    //Buat Node kedua
    Node* second = new Node();
    cout << "Nama: ";
    cin >> second->judul;
    cout << "Penulis: ";
    cin >> second->penulis;
    cout << "Banyak halaman: ";
    cin >> second->halaman;
    cout << "Harga: ";
    cin >> second->harga;
    second->next = NULL;

    //Sambungkan kedua node
    head->next = second;

    //Buat Node ketiga
    Node* third = new Node();
    cout << "Nama: ";
    cin >> third->judul;
    cout << "Penulis: ";
    cin >> third->penulis;
    cout << "Banyak halaman: ";
    cin >> third->halaman;
    cout << "Harga: ";
    cin >> third->harga;
    third->next = NULL;

    //Sambungkan Node ketiga ke pertama
    second->next = third;

    //Menampilkan isi setiap Node pada linked list
    Node* node = head;
    while (node != NULL)
    {
        cout << "Judul Buku: " << node->judul << endl;
        cout << "Penulis: " << node->penulis << endl;
        cout << "Jumlah halaman: " << node->halaman << endl;
        cout << "Harga: " << node->harga << endl;
        node = node->next;
    }
    cout << endl;

    return 0;
    
}
