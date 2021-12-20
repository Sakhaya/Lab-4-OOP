// oop_4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

class Apteca {
public:
    string Pokyp;
    string Farm;
    string Resept;
    string Lekarstvo;

   //Обычный конструктор
    Apteca(string P, string F, string R, string L) {
        Pokyp = P;
        Farm = F;
        Resept = R;
        Lekarstvo = L;
    }
    //Конструктор копий 
    Apteca(const Apteca& o) {
        Pokyp = o.Pokyp;
        Farm = o.Farm;
        Resept = o.Resept;
        Lekarstvo = o.Lekarstvo;
    }
    
};

int main()
{
    Apteca ap1("Erik","Vlad", "#456","Aspirin");
    Apteca ap2("Alik", "Vlad", "#999", "Fruttella");
    
    cout <<"Begin ap1: "<< ap1.Pokyp << " " << ap1.Farm << " " << ap1.Resept << " " << ap1.Lekarstvo << endl;
    cout << "Begin ap2: " << ap2.Pokyp << " " << ap2.Farm << " " << ap2.Resept << " " << ap2.Lekarstvo << endl;
    ap1 = ap2;
    cout << "End ap1: " << ap1.Pokyp << " " << ap1.Farm << " " << ap1.Resept << " " << ap1.Lekarstvo << endl;
    cout << "End ap2: " << ap2.Pokyp << " " << ap2.Farm << " " << ap2.Resept << " " << ap2.Lekarstvo << endl;
    
}
