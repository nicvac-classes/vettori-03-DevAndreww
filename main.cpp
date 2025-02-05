#include <iostream>
using namespace std;

int main() 
{
     int n, i;

    do {
        cout << "Quanti alunni ci sono in una classe?" << endl;
        cin >> n;
    } while (n < 0);
   
    string nomi[n];
    float voti[n];

    i = 0;
    while (i < n) 
    {
        cout << "Scrivi il nome e il voto del " << i + 1 << "° studente." << endl;
        cin >> nomi[i];
        cin >> voti[i];
        i = i + 1;
    }
    while (i < n)
     {
        cout << "Scrivi il nome e il voto del " << i + 1 << "° studente." << endl;
        cin >> nomi[i];
        cin >> voti[i];
        cout << "nome:" << nomi[i] << ", voto:" << voti[i] << "." << endl;
        i = i + 1;
    }
    int votomax;
    string nomemax;

    votomax = voti[0];
    nomemax = nomi[0];
    i = 1;
    while (i < n) 
    {
        if (voti[i] > votomax) 
        {
            votomax = voti[i];
            nomemax = nomi[i];
        }
        i = i + 1;
    }
    cout << "Lo studente col massimo voto si chiama " << nomemax << ", che ha come voto " << votomax << "." << endl;
 
}

