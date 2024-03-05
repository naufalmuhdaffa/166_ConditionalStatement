#include <iostream>
using namespace std;

int main()
{
    int Nilai_Matematika, Nilai_Fisika, Rerata;
    string status;

    cout << "Masukan Nilai Matematika ";
    cin >> Nilai_Matematika;

    cout << "Masukan Nilai Fisika ";
    cin >> Nilai_Fisika;

    Rerata = (Nilai_Matematika + Nilai_Fisika) / 2;

    if (Rerata > 60) {
        status = "Lulus";
    }
    else if (Nilai_Matematika > 70) {
        status = "Lulus";
    }
    else {
        status = "Tidak Lulus";
    }

    cout << "Nilai Matematika " << Nilai_Matematika << endl;
    cout << "NIlai Fisika " << Nilai_Fisika << endl;
    cout << "Rerata " << Rerata << endl;
    cout << "Anda dinyatakan " << status << endl;
}