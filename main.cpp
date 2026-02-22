#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; // el van írva a constexpr neve
    std::cout << '1-100 ertekek duplazasa' // sor végén nincs pontosvessző, ' helyett "-t kell használni
    for (int i = 0;) //a for cilusnak meg kell adni azt is, hogy mikor legyen vége, és hogy mit csináljon az i-vel egy ciklus után
    {
        b[i] = i * 2; 
    }
    for (int i = 0; i; i++) // a for ciklus második része csak 'i'
    {
        std::cout << "Ertek:" //nincs sorvégi pontosvessző
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; 
    for (int i = 0; i < N_ELEMENTS, i++) //a for ciklusban a kezdő dolgok közé ; kell, nem pedig ,
    {
        atlag += b[i] //Nincs pontosvessző, és mivel nincs feljebb érték adva az atlagnak, nem tudjuk semmihez adni a b[i] értékét
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0; //nem töröljük a *b mutatót
}
