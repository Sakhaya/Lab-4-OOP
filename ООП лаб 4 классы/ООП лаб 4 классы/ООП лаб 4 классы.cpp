// oop_4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdio> // printf
using namespace std;

class Pokyp {
public:
    string name;
    int age;

    Pokyp() {
        name = "";
        age = 0;
    }

    Pokyp(string f,int i) {
        name = f;
        age = i;
    }

    ~Pokyp() {

    }
};

class Farm {
public:
    string name;
    int age;

    Farm() {
        name = "";
        age = 0;
    }

    Farm(string f, int i) {
        name = f;
        age = i;
    }

    ~Farm() {

    }
};

class Tovar {
public:
    string name;
    int price;

    Tovar() {
        name = "";
        price = 0;
    }

    Tovar(string f, int i) {
        name = f;
        price = i;
    }

    ~Tovar() {

    }

    void print() {
        cout << " " << name << " " << price;
    }
};

class Apteca {
private:
    
public:
    Pokyp kl;
    Farm Rab;
    vector<Tovar> Resept;
    
   //Обычный конструктор 
    Apteca(const Pokyp&p,const Farm&W, vector<Tovar> Res)
    {
        kl = p;
        Rab = W;
        Resept = Res;
        
    }
    //Конструктор копий 
    Apteca(const Apteca& o){
        kl = o.kl;
        Rab = o.Rab;
        Resept = o.Resept;
        
    }
    friend void Spisok(Apteca);
};

void Spisok(Apteca){


}
int main()
{

    Pokyp p1("Erik", 54);
    Farm f1("Vlad", 23);
    Pokyp p2("Arina", 60);
    Farm f2("Vlad", 53);
    vector<Tovar> Res;
    vector<Tovar> Spis;

    Tovar t[10];
    Tovar tg;
    t[1].name = "Remandin";
    t[1].price = 1;
    t[2].name = "Aspirin";
    t[2].price = 2;
    t[3].name = "Vitamin";
    t[3].price = 3;
    t[4].name = "Nazivin";
    t[4].price = 4;
    t[5].name = "Noshpa";
    t[5].price = 5;
    t[6].name = "Likosol";
    t[6].price = 6;
    t[7].name = "Lazolvan";
    t[7].price = 7;
    t[8].name = "Akvamaris";
    t[8].price = 8;
    t[9].name = "Troksovazin";
    t[9].price = 9;
       
       for (int k = 1; k < 10; k++) {
       Res.push_back(t[k]);
       Spis.push_back(t[k]);
       }
       
       random_shuffle(Res.begin(), Res.end());
       random_shuffle(Spis.begin(), Spis.end());



    Apteca ap1(p1,f1, Res);
    Apteca ap2(p2, f2, Spis);
    
    cout << "Begin ap1: " << ap1.kl.name << " " << ap1.kl.age << " " << ap1.Rab.name << " " << ap1.Rab.age << " ";
    for (vector<Tovar>::const_iterator it = ap1.Resept.begin(); it != ap1.Resept.end(); ++it) {
 
        cout << (*it).name << " " << (*it).price << " ";
    }
    cout << endl;
    cout << "Begin ap2: " << ap2.kl.name << " " << ap2.kl.age << " " << ap2.Rab.name << " " << ap2.Rab.age << " "; 
    for (vector<Tovar>::const_iterator it = ap2.Resept.begin(); it != ap2.Resept.end(); ++it) {

        cout << (*it).name << " " << (*it).price << " ";
    }
    cout << endl;


    ap1 = ap2;

    cout << endl;
    cout << "End ap1: " << ap1.kl.name << " " << ap1.kl.age << " " << ap1.Rab.name << " " << ap1.Rab.age << " ";
    for (vector<Tovar>::const_iterator it = ap1.Resept.begin(); it != ap1.Resept.end(); ++it) {

        cout << (*it).name << " " << (*it).price << " ";
    }
    cout << endl;
    cout << "End ap2: " << ap2.kl.name << " " << ap2.kl.age << " " << ap2.Rab.name << " " << ap2.Rab.age << " ";
    for (vector<Tovar>::const_iterator it = ap2.Resept.begin(); it != ap2.Resept.end(); ++it) {

        cout << (*it).name << " " << (*it).price << " ";
    }
    cout << endl;
}
