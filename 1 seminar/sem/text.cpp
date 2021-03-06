#include <iostream>
#include <chrono>
#include <cmath>

using namespace std::chrono;

int main() {
    auto start = steady_clock::now();
    double result;
    for (auto i=0; i<10000000; i++){
        result = std::sin(i)+ std:: cos(i);
    };
    auto duration = steady_clock::now()-start;
    auto duration_in_milliseconds = duration_cast<std::chrono::milliseconds>(duration).count();
    std::cout<<"Duration in milliseconds="<< duration_in_milliseconds << std::endl;
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
