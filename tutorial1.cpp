#include "tutorial1.hpp"

int abs (int x){
    //mengembalikkan nilai absolut
    if (x >= 0){
        return x;
    }
    else {
        return -x;
    }
}

int kuadrat (int x){
    //mengembalikan nilai kuadrat
    return x*x;
}

int fibo(int x){
    //mengembalikan suku ke n dari deret fibbonaci
    if (x == 1 || x == 2){
        return 1;
    }
    else {
        return (fibo(x-1) - fibo(x-2));
    }
}

int max(int x, int y){
    //mengembalikan bilangan terbesar dari dua bilangan
    if (x >= y){
        return x;
    }
    else {
        return y;
    }
}