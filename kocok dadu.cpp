#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));

    std::cout <<"Welcome to Dice Rolling Kelompok 2!\n1.Akhmad Husein Rasyid\n2.Afni Izzah Afkarinah\n3.Nur Zaman Fajri\n4.Sherlyna Fitri\n5.Yova Rezky Apriliano"<< std::endl;

    while (true) {
        std::cout << "Gulirkan dadu (y/n)? ";
        char jawaban;
        std::cin >> jawaban;

        if (jawaban == 'n')
            break;

        if (jawaban == 'y') {
            int angka = rand() % 6 ;
            std::cout << "Angka dadu: " << angka << std::endl;
        } else {
            std::cout << "Masukkan jawaban yang valid (y/n)!" << std::endl;
        }
    }

    return 0;
}
