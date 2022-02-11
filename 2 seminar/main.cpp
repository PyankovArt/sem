#include <iostream>
#include<vector>
#include <array>

int main() {
    std::vector<int> numbers;
    for (auto i=0; i<30;i++){
        numbers.push_back(i);
        std::cout<<"Size is "<<numbers.size()<<" Capacity is "<< numbers.capacity()<<std::endl;
    }

    std::array<int,5> static_array ={};      //Инициализация по умолчанию
    std::array<int,5> another_static_array{};//Инициализация по умолчанию

    static_array[3]=42;
    for(auto number:static_array){
        std::cout<< number<< ' ';
    }
    return 0;

}

/*
 * std::vector -- динамически меняет размер; добавление в конец О(1); удаление, добавление в середину и начало О(n); по умолчанию
 * std::string -- не совсем контейнер
 * std::array -- как вектор, но статический (фиксированный размер); лежит на стеке; используется редко
 * std::deque -- как вектор, но добавляем и в начало за О(1)
 *
 * std::vector
 * Объект -- сущность, обладающая поведением и состоянием
 * Поля вектора(состояние): data -- данные; size -- размер занятого; capacity -- ёмкость
 * Поведение: push_back() -- добавление в конец, resize() -- изменить size
 *
 * std::deque == vector + push_front();
 */