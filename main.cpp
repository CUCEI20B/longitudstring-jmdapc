#include <iostream>

using namespace std;

int main() {
    string cadena;
    //cin >> cadena; // lee hasta espacio o \n
    getline(cin, cadena); //lee hasta \n
    if(cadena == "int"){
        cout << sizeof(int) << endl;
    }
    if(cadena == "char")
    {
        cout << sizeof(char) << endl;
    }
    if(cadena == "short")
    {
        cout << sizeof(short) << endl;
    }
    if(cadena == "float")
    {
        cout << sizeof(float) << endl;
    }
    if(cadena == "double")
    {
        cout << sizeof(double) << endl;
    }
    if(cadena == "long")
    {
        cout << sizeof(long) << endl;
    }
    return 0;
}