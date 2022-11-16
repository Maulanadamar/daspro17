#include <iostream>

using namespace std;

int main()
{
    int x;
        cout<<"daftar menu"<<endl;
        cout << endl;
        cout << endl;
        cout<<"1.Nasi Kerikil"<<endl;
        cout<<"2.Rica Brotowali"<<endl;
        cout<<"3.pepes bekicot"<<endl;
        cout<<"4.kepiting presto"<<endl;
        cout << endl ;
    cout << "Masukkan kode makanan anda=" << endl;
       cin >> x;
    switch (x){
    case 1 :
        cout << "masukkan nasi kerikil" << endl;
        break;
    case 2 :
        cout<<"masukkan nnasi brotowali"<<endl;
        break;
    case 3 :
        cout<<"masukkan nasi bekicot"<<endl;
        break;
    case 4 :
        cout<<"masukkan kepiting presto"<<endl;
        break;
    }
    return 0;
}
