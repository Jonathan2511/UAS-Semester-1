#include <iostream>
#include <ctime>

using namespace std;

int main() {
  cout << "Jonathan Aditya Puryanto 20210801001" <<endl;
  cout << "Menampilkan Waktu Saat Ini\n" << endl;

   // Waktu sekarang berdasarkan sistem
   time_t now = time(0);
   
   // Konversi now ke bentuk string
   char* dt = ctime(&now);

   cout << "Waktu saat ini dalam WIB atau UTC (+7) adalah: " << dt << endl;

}