#include <iostream>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <algorithm>
#include <iterator>
#include <string>

#define RANGE(container) container.begin(), container.end()

int main() {
   std::map<std::string, unsigned> grades;

   grades["Denis"]=3u;


   std::pair<std::string,unsigned > ilya_grade("Ilya",9);
   grades.insert(ilya_grade);

   for(const auto& student_grade: grades){
       std::cout<< student_grade.first<<":"<<student_grade.second<<std::endl;
   }
}

/*
 * Ассоциативные контейнеры
 * map, set
 *
 * set -- множество
 * уникальный элемент, отсортированные, добваление/поиск О(logN)
 *
 *
 * multiset -- тоже самое, но без уникальности
 *
 * unordered_ -- без сортировки, добавление/поиск О(1)
 *
 * map(multimap, unordered_) -- набор пар ключ/значение, где для ключей выполняется свойство set
 * элементы std::pair
 */

