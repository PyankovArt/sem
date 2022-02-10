#include <iostream>
#include <chrono>
#include <cmath>


/*
 * Контрольные вопросы:
 * 1. ООП, Процедурное программирование, забыл название но суть в том что мы пишем пишем программу которую будет собирать прграммы под каждый класс сама
 * 2. Удобный откат к предыдущим версиям в соло разработке; Не нужно думать над пересылкой версий программ при работе в команде + плавное добавление фич
 * 3. commit закрепить версию, push отправить коммит; pull обновить версию коммита
 */
using namespace std::chrono;

class Timer {
public:
    Timer() {}
    ~Timer() {
        std::cout <<duration_cast<std::chrono::microseconds>(steady_clock::now() - start-pause_time).count()<< std::endl;
    };

    void pause(Timer Clock) {
    Clock.pause_start = steady_clock::now();
    };

    void unpause (Timer Clock){
        Clock.pause_stop=steady_clock::now();
        Clock.pause_time=duration_cast<std::chrono::microseconds>((Clock.pause_stop - Clock.pause_start) + Clock.pause_time);
    };


    steady_clock::time_point pause_start = steady_clock::now();
    steady_clock::time_point pause_stop = steady_clock::now();
    std::chrono::microseconds pause_time= (std::chrono::microseconds)0;
private:
    steady_clock::time_point start = steady_clock::now();
};

int main() {
    double result = 0.;
    {
        Timer t;
        t.pause(t);
        for(auto i = 0u; i < 10000000u; i++) {
            result += std::sin(i) + std::cos(i);
        };
        t.unpause(t);
    }
    std::cout << "Result is " << result;
    return 0;
}