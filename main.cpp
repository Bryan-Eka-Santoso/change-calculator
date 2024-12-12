#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int totalbayar, dibayar, kembalian, pecahan;

    cout << setfill('=') << setw(40) << "" << endl;
    cout << "|" << setfill(' ') << setw(28) << "CHANGE CALCULATOR" << setfill(' ') << setw(11)  << "|" << endl;
    cout << "|" << setfill('=') << setw(39) << "|" << endl;

    cout << "| Jumlah yang harus dibayar: Rp";
    cin >> totalbayar;
    cout << "| Jumlah yang dibayar: Rp";
    cin >> dibayar;

    cout << "|" << setfill('=') << setw(39) << "|" << endl;

    cout << "| Uang yang anda bayar: " << setfill(' ') << setw(16) << "|" << endl;

    kembalian = dibayar - totalbayar;
    int jumlah_100000 = dibayar / 100000;
    dibayar %= 100000;
    int jumlah_50000 = dibayar / 50000;
    dibayar %= 50000;
    int jumlah_20000 = dibayar / 20000;
    dibayar %= 20000;
    int jumlah_10000 = dibayar / 10000;
    dibayar %= 10000;
    int jumlah_5000 = dibayar / 5000;
    dibayar %= 5000;
    int jumlah_2000 = dibayar / 2000;
    dibayar %= 2000;
    int jumlah_1000 = dibayar / 1000;
    dibayar %= 1000;
    int jumlah_500 = dibayar / 500;
    dibayar %= 500;
    int jumlah_200 = dibayar / 200;
    dibayar %= 200;
    int jumlah_100 = dibayar / 100;
    dibayar %= 100;

    cout << "| Rp100.000    : " << setfill(' ') << setw(14) << jumlah_100000 << " lembar |" << endl;
    cout << "| Rp50.000     : " << setfill(' ') << setw(14) << jumlah_50000  << " lembar |" << endl;
    cout << "| Rp20.000     : " << setfill(' ') << setw(14) << jumlah_20000  << " lembar |" << endl;
    cout << "| Rp10.000     : " << setfill(' ') << setw(14) << jumlah_10000  << " lembar |" << endl;
    cout << "| Rp5.000      : " << setfill(' ') << setw(14) << jumlah_5000   << " lembar |" << endl;
    cout << "| Rp2.000      : " << setfill(' ') << setw(14) << jumlah_2000   << " lembar |" << endl;
    cout << "| Rp1.000      : " << setfill(' ') << setw(14) << jumlah_1000   << " lembar |" << endl;
    cout << "| Rp500        : " << setfill(' ') << setw(16) << jumlah_500    << " koin |" << endl;
    cout << "| Rp200        : " << setfill(' ') << setw(16) << jumlah_200    << " koin |" << endl;
    cout << "| Rp100        : " << setfill(' ') << setw(16) << jumlah_100    << " koin |" << endl;

    cout << "|" << setfill('=') << setw(39) << "|" << endl;

    cout << "| Kembalian    : Rp" << setfill(' ') << setw(19) << kembalian << " |" << endl;

    int jumlah_kembalian_100000 = kembalian / 100000;
    kembalian %= 100000;
    int jumlah_kembalian_50000 = kembalian / 50000;
    kembalian %= 50000;
    int jumlah_kembalian_20000 = kembalian / 20000;
    kembalian %= 20000;
    int jumlah_kembalian_10000 = kembalian / 10000;
    kembalian %= 10000;
    int jumlah_kembalian_5000 = kembalian / 5000;
    kembalian %= 5000;
    int jumlah_kembalian_2000 = kembalian / 2000;
    kembalian %= 2000;
    int jumlah_kembalian_1000 = kembalian / 1000;
    kembalian %= 1000;
    int jumlah_kembalian_500 = kembalian / 500;
    kembalian %= 500;
    int jumlah_kembalian_200 = kembalian / 200;
    kembalian %= 200;
    int jumlah_kembalian_100 = kembalian / 100;
    kembalian %= 100;

    cout << "| Rp100.000    : " << setfill(' ') << setw(14) << jumlah_kembalian_100000 << " lembar |" << endl;
    cout << "| Rp50.000     : " << setfill(' ') << setw(14) << jumlah_kembalian_50000  << " lembar |" << endl;
    cout << "| Rp20.000     : " << setfill(' ') << setw(14) << jumlah_kembalian_20000  << " lembar |" << endl;
    cout << "| Rp10.000     : " << setfill(' ') << setw(14) << jumlah_kembalian_10000  << " lembar |" << endl;
    cout << "| Rp5.000      : " << setfill(' ') << setw(14) << jumlah_kembalian_5000   << " lembar |" << endl;
    cout << "| Rp2.000      : " << setfill(' ') << setw(14) << jumlah_kembalian_2000   << " lembar |" << endl;
    cout << "| Rp1.000      : " << setfill(' ') << setw(14) << jumlah_kembalian_1000   << " lembar |" << endl;
    cout << "| Rp500        : " << setfill(' ') << setw(16) << jumlah_kembalian_500    << " koin |" << endl;
    cout << "| Rp200        : " << setfill(' ') << setw(16) << jumlah_kembalian_200    << " koin |" << endl;
    cout << "| Rp100        : " << setfill(' ') << setw(16) << jumlah_kembalian_100    << " koin |" << endl;

    cout << setfill('=') << setw(40) << "";

    return 0;
}
