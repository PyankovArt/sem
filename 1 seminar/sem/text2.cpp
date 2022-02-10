//
// Created by pyank on 04.02.2022.
//

#include <iostream>
#include <chrono>
#include <cmath>

using namespace std::chrono;

class Timer{
public:
    Timer(): start(steady_clock::now){}
    ~Timer(){
        std::cout<<duration_cast<std::chrono::microseconds>(steady_clock::now- start).count();
    }


private:
    steady_clock::time_point start;
};

int main() {
    double result;
    {
        Timer t;
        for (auto i=0; i<10000000; i++){
            result = std::sin(i)+ std:: cos(i);
        };
    }

    std::cout<< "Result is "<< result;

    return 0;
}

/*
 * Цель написать измеритель времени работы программы
 * chrono - библиотека для работы со времени
 * timestamp - количество секунд с начало эпохи UNIX - int
 * duration - разность timestamp временной интервал
 * Часы: 1) system_clock системное время
 *       2) steady_clock гарантирется возрастание времени
 *       3) high_resolution_clock самые точные часы
 */
