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
    std::multimap<int, std::string> groups;


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

