#include <iostream>

using namespace std;

int i = 1;
int pilih;

int main()
{
  // Sederhana
  do
  {
    cout << i << " ";
    i++;
  } while (i <= 20);
  cout << "\nSelesai";

  // Kompleks
  do
  {
    cout << "\nMenu:\n";
    cout << "1. Mulai\n";
    cout << "2. Setelan\n";
    cout << "0. Keluar\n";
    cout << "Pilih: ";
    cin >> pilih;

    switch (pilih)
    {
    case 1:
      cout << "Mulai...\n";
      break;
    case 2:
      cout << "Setelan...\n";
      break;
    case 0:
      cout << "Keluar...\n";
      break;
    default:
      cout << "Pilihan salah.\n";
    }
  } while (pilih != 0);
}