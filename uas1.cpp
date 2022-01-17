#include <iostream>
using namespace std;

int main()
{
	int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	cout << endl;

	cout << "Jonathan Aditya Puryanto 20210801001" <<endl;
	cout << "Menampilkan Indeks Genap" << endl;

	for(int i = 0; i < 10; i++){
 
       if(arr[i] % 2 == 0){
 		// Bilangan genap jika di modulo dengan 2 akan menghasilkan 0
           cout << arr[i] << ", ";
		}
   	}
 	cout << endl;


	return 0;
}
