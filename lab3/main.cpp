#include <iostream>
#include <string>
#include <fstream>
#include <math.h>


using namespace std;
class Prog
{
    public:
    double x; //объявляется тип данных с плавающей запятой
    double y;
    void N() { //вписываем условие для y, исходя из заданного класса для x
        if(x<-5) y=-3;
        else if(x<-3) y=x+3;
        else if(x<3) y=sqrt(9-pow(x,2));
        else if(x<8) y=0.6*(x-3);
        else y=3;
    }
    void M() {
        ofstream F("my_file.txt"); 
        for (int i=0; i<10; i++) {
            x=i;
            N();
            F << y<< endl;
    }
     F.close();
    }
    void L() {
        string s;
        ifstream F2("my_file.txt"); //открывается файл со значениями
        while (!F2.eof()){ //пока файл не закончится
            getline(F2,s); //считывание целой строки
            if (s!="") { //проверка не пустая ли строка
                y=stof(s); //замена формата
                cout<<y<<endl; //вывод данных
        }
        }
         F2.close();
    }
};   
int main() {
    Prog A; //объявление
    A.x = 5;
    A.L(); //запрос подсчёта. Обращение к функции
    cout<<A.y;
    cin.get();cin.get();//ожидание нажатия клавиши
   return 0;

}
