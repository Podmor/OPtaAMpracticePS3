#include <iostream>
using namespace std;
 
int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "Введите текст: ";
    const int t = 1000;
    char text[t];
    cin.getline(text, t);
    cout << "Введенная вами строка:\n" << text << endl << endl;
    int digits=0,i=0;
    for (; text[i]; i++)
    {
        if(text[i]>='0' && text[i]<='9')
             digits++;
    }
    cout << "Кол-во цифр: " << digits << "\nОбщая сумма символов: " << i << endl << endl;
    system("pause");
    return 0;
}
