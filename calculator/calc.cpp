#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cmath>
#include <stack>

using namespace std;

int main(int argc, char **argv) {
    
    int getopt(int argc, char * const argv[], const char *optstring);
    int opt;
    
    if(argc == 1) { 
        cout << "Тригонометрический калькулятор, который вычисляет sin и cos в радианах и градусах" << endl;
        cout << "Для опции -o есть четыре знач sinr(sin в радианах), cosr(cos в радианах), sind(sin в градусах) и cosd(cos в градусах)" << endl;
        cout << "Пример ./имя файла -o sinr 1" << endl;
        return 0;
    }
    vector<double> a;
    double x;
    double p = 3.14;
    //int opt; 
    while((opt = getopt(argc, argv, "o:")) != -1) { 
        switch(opt) {
             case 'o':
                string type = string(optarg);
                if (type == "sinr"){
                    x = atof(argv[3]);
                    double y = ((sin(x) * 10000000) / 10000000);
                    cout << "Sin in radians " << y << endl;
                break;
                }
                if (type == "cosr"){
                    x = atof(argv[3]);
                    double y = ((cos(x) * 10000000) / 10000000);
                    cout << "Cos in radians " << y << endl;
                break;
                }
                if (type == "sind"){
                    x = atof(argv[3]);
                    double y = ((sin(x) * 10000000) / 10000000 * 180 / p);
                    cout << "Sin in degrees " << y << endl;
                break;
                }
                if (type == "cosd"){
                    x = atof(argv[3]);
                    double y = ((cos(x) * 10000000) / 10000000 * 180 / p);
                    cout << "Cos in degrees " << y << endl;
                break;
                }
        }
    }
    return 0;
}