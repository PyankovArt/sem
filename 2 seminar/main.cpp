#include <iostream>
#include<vector>
#include <array>
#include<deque>
#include <list>

class Fraction{
public:
    Fraction(int numerator, int denominator):
        numerator(numerator), denominator(denominator){}
private:
    int numerator;
    unsigned denominator;
};


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

    std::deque<Fraction> deq;
    deq.emplace_front(1,25u);
    std::cout<<deq.size()<<std::endl;

    std::list<int> numbersss={1,2,3,-4,540};
    std::list<int> other_numbers={25,10};

    numbersss.splice(numbersss.begin(),other_numbers, other_numbers.begin());

    numbersss.sort();
    std::cout<<std::endl;
    for(auto item:numbersss){
        std::cout<<item<<' ';
    }

    std::cout<<std::endl;
    for(auto item:other_numbers){
        std::cout<<item<<' ';
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
 *
 * Узловые контейнеры
 * std::list
 * std::forward_list
 *
 * Удалить/создать элемент в середине за О(1) при наличии указателя
 * Перемещение узлов между листами за О(1) при наличие указателей
 * Деление листа на части
 *
 * .splice() - перемещение эл.
 * .merge() - слияние двух сортированных листов в 1
 *
 * Merge сортировка делением массива за О(NlogN) всегда
 */