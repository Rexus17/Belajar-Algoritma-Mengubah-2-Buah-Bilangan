#include <iostream>
using namespace std;

// main method
int main()
{
	// deklarasi variabel X, Y dan temp
   	int a, b, temp;
   	
   	// tampilkan kata yang ada didalam kurung dua
   	cout << "=== Program mengubah 2 nilai variabel ===" << endl;
   	
   	// user memasukan nilai variabel A dan B
   	cout << "Masukan nilai variabel A: "; 
   	cin >> a;
   	cout << "Masukan nilai variabel B: ";
   	cin >> b;
   	
   	// tampilankan nilai variabel X dan Y yang belum ditukar
   	cout << "Sebelum berubah A: " << a << ", dan B: " << b << endl;
   	
   	// logika mengubah nilai variabel A dan B
   	temp = a;
   	a = b;
   	b = temp;
   	
   	// tampilankan nilai variabel A dan B yang sudah ditukar
   	cout << "Sesudah berubah A: " << a << ", dan B: " << b << endl;
   	
   	// akhiri program
   	return 0; 
}

