#include <iostream>
using namespace std;

int main()
{
    int nBilangan;
    string status;

    srand(time(0));

    nBilangan = rand() % 10;

    if (nBilangan % 2 == 0) {
        status = "Genap";
    }
    else {
        status = "Ganjil";
    }

    cout << "bilangan adalah " << nBilangan << endl;
    cout << "statusnya adalah " << status << endl;
}