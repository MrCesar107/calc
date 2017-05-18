#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

float a, b, resultado_s, resultado_r, resultado_m, resultado_d;
int opcion, i;
bool repetir = true;

void suma()
{
    system("clear");
    cout << "Escriba un numero" << endl;
    cin >> a;
    cout << "Escriba otro numero" << endl;
    cin >> b;

    resultado_s = a + b;

    printf("El resultado es: %f", resultado_s);

}

void resta()
{
    system("clear");
    cout << "Escriba un numero" << endl;
    cin >> a;
    cout << "Escriba otro numero" << endl;
    cin >> b;

    resultado_r = a - b;

    printf("El resultado es: %f", resultado_r);
}

void multiplicacion()
{
    system("clear");
    cout << "Escriba un numero" << endl;
    cin >> a;
    cout << "Escriba otro numero" << endl;
    cin >> b;

    resultado_m = a * b;

    printf("El resultado es: %f", resultado_m);
}

void division()
{
    system("clear");
    cout << "Escriba un numero" << endl;
    cin >> a;
    cout << "Escriba otro numero" << endl;
    cin >> b;

    resultado_d = a / b;

    printf("El resultado es: %f", resultado_d);
}

void menu()
{
    system("clear");
    cout << "Bienvenido a la Calculadora de C++" << endl;
    cout << "Por favor escriba el numero de la opcion que requiera" << endl;
    cout << "1.- SUMA" << endl;
    cout << "2.- RESTA" << endl;
    cout << "3.- MULTIPLICACION" << endl;
    cout << "4.- DIVISION" << endl;
    cout << "5.- SALIR" << endl;
    cin >> opcion;

    switch(opcion)
    {
    case 1:
        suma();
        break;
    case 2:
        resta();
        break;
    case 3:
        multiplicacion();
        break;
    case 4:
        division();
        break;
    case 5:
        break;
    }

}

int main()
{
    do
    {
       menu();


       printf("\n");
       cout << "DESEA SALIR DEL PROGRAMA? 1.- SI 2.- NO" << endl;
       cin >> i;

       if(i == 1) repetir = false;
       if(i == 2) repetir = true;

       system("clear");

    } while(repetir == true);

    return 0;
}
