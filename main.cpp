#include <iostream>

using namespace std;

int main()
{
    string palabra;
    char alfabeto[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',
                    'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    cout << "CIFRADO DE CESAR" << endl;////////////////////CIFRADO DE CESAR CON UNA VARIACION DE QUE LA DIFERENCIA ES DE 5 LETRAS//////
    cout<<"------------------------------"<<endl;
    cout<<"Ingrese la palabra que deseaa codificar: ";
    getline(cin,palabra);

    int j;
    for (int i=0; i<palabra.length();i++){
            j=0;
        while(j<52){
            if(palabra[i]==alfabeto[j]&&j<49){
                palabra[i]=alfabeto[j+5];
                j=52;
            }
            if(palabra[i]==alfabeto[j]&&(j>=23&&j<26)){
                if(palabra[i]=='v'){
                    palabra[i]=='a';
                }
            if(palabra[i]=='w'){
                    palabra[i]=='b';
                }
             if(palabra[i]=='x'){
                    palabra[i]=='c';
                }
            if(palabra[i]=='y'){
                   palabra[i]=='d';
                }
             if(palabra[i]=='z'){
                   palabra[i]=='e';
                }
            j=52;
            }
            if(palabra[i]==alfabeto[j]&&(j>=49&&j<52)){
            if(palabra[i]=='V'){
                    palabra[i]=='A';
                }
            if(palabra[i]=='W'){
                    palabra[i]=='B';
                }
            if(palabra[i]=='X'){
                    palabra[i]=='C';
                }
            if(palabra[i]=='Y'){
                    palabra[i]=='D';
                }
            if(palabra[i]=='Z'){
                    palabra[i]=='E';
                }
            j=52;
        }
    j++;
    }
    }
    cout<<endl<<"La palabra cifrada es:"<<palabra<<endl<<endl;

    return 0;
}
