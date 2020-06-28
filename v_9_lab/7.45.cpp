// 7.45 Дано целое число K(>0) и строковый файл.
//Создать два новых файла: строковый, содержащий первые K символов каждой строки исходного файла, и символьный, 
//содержащий K-й символ каждой строки 
//(если длина строки меньше K, то в строковый файл записывается вся строка, а в символьный файл записывается пробел).


#include <iostream>
#include<fstream>
#include <Windows.h>
#include <string>
#include <stdio.h>
using namespace std;


int main()
{
    setlocale(LC_ALL, "ru");
    //FILE* *in, *out;
    //FILE * sfile = fopen("myFile.txt", "w");
    string path = "myFile.txt";
    //bool exit;
    int k;
    int strings_amount;
    cout << "Введите K\n";
    cin >> k;
    cout << "Введите кол-во строк\n";
    cin >> strings_amount;
    fstream fin;
    fstream stf;
    fstream sym;
    fin.open(path, fstream::in | fstream::out | fstream::app);
    stf.open("stf.txt", fstream::in | fstream::out | fstream::app);
    sym.open("sym.txt", fstream::in | fstream::out | fstream::app);
    if (!fin.is_open()) {
        cout << "Ошибка открытия фаила!" << endl;
    }
    else
    {
        m1:
        bool p;
        string msg; 
        streampos p1;
        int value;
        int count = 0;
        cout << "File is open" << endl;
        cout << "Введите 1 чтобы увидеть содержимое фаила" << endl;
        cout << "Введите 2 чтобы записать в фаил" << endl;
        cout << "Введите 3 чтобы создать строковый фаил" << endl;
        cout << "Введите 4 чтобы создать символьный фаил" << endl;
        cout << "Введите 5 чтобы увидеть содержимое строкового фаила" << endl;
        cout << "Введите 6 чтобы увидеть содержимое символьного фаила" << endl;
        cin >> value;
        if (value == 1) 
        {
            while (!fin.eof()) {
                msg = "";
                fin >> msg;
                cout << msg << endl;
            }


        }
        if (value == 2)
        {
            cout << "Введите сообщение\n";
             
                SetConsoleCP(1251);
                cin >> msg;
                fin << msg << "\n";
         
                SetConsoleCP(866);
                

            

        }
        if (value == 3)
        {
            
            
            char c;
            fstream::pos_type pos = fin.tellg();
            stf.open("stf.txt", fstream::in | fstream::out | fstream::app);
            char p[100];
            c = fin.peek();
            streamoff cgp = fin.tellg();
            pos = cgp + 10;
            fin.seekg(pos);
            fin << "\n";
            fin.getline(p, k);
            stf << p;
            fin.getline(p, k);
            stf << p;
            
            fin.getline(p, k);
            stf << p;
            




        }
        if (value == 4)
        {
            string s;
            k -=1;
            char p[40];
            fin.seekg(k);
            getline(fin, s);
            //fin.getline(p, 2);
            s = s + "\n";
            sym << s;
            
            fstream::pos_type pos = fin.tellg();
            
            //fin.seekg(pos);
            getline(fin, s);
            s = s + "\n";
            //fin.getline(p, 2);
            sym << s;
          
            //fin.seekg(pos);
            getline(fin, s);
            s = s + "\n";
            //fin.getline(p, 2);
            sym << s;
            


        }
        if (value == 5)
        {   
            while (!stf.eof()) {
                 
                msg = "";
                stf >> msg;
                cout << msg << endl;
            }


        }

        if (value == 6)
        {
            
            while (!sym.eof()) {
                msg = "";
                sym >> msg;
                cout << msg << endl;
            }

            
        }


        
    }
    fin.close();
    stf.close();
    sym.close();
    return 0;
}

