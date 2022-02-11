#include <iostream>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <algorithm>
#include <iterator>

#define RANGE(container) container.begin(), container.end()

int main() {
    std::vector<int> nums{42,-5,-80,8080};
    std::sort(RANGE(nums), [](auto lhs, auto rhs){
        return std::abs(lhs)<std::abs(rhs);
    });

    std::copy(RANGE(nums),std::ostream_iterator<int>(std::cout, " "));

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

