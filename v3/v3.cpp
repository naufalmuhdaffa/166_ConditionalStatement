#include <iostream>
using namespace std;

int main()
{
    int nBilanganA;
    int nBilanganB;
    string status;

    srand(time(0));

    nBilanganA = rand() % 10;
    nBilanganB = rand() % 10;

    if (nBilanganA == nBilanganB) {
        status = "sama besar";
    }
    else if (nBilanganA > nBilanganB) {
        status = "Bilangan A lebih besar";
    }
    else {
        status = "Bilangan A lebih kecil";
    }

    cout << "bilangan A adalah " << nBilanganA << endl;
    cout << "bilangan B adalah " << nBilanganB << endl;
    cout << "statusnya adalah " << status << endl;
}