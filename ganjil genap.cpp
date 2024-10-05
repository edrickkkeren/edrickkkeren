#include <iostream> 
using namespace std;
int main(){ 
    cout<<"Penentu bilangan ganjil dan genap"<<endl;
    
    int angka; 
    cout<<"masukkan angkamu:"<<endl;
    cin>> angka;

    if ( angka % 2 == 0)
    cout <<angka<< " adalah genap";
    else
    cout <<angka<< " adalah ganjil";
 return 0;
}