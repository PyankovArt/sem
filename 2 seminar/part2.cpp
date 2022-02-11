#include <iostream>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <algorithm>
#include <iterator>


bool compare_abs(int lhs,int rhs){
    return std::abs(lhs)<std::abs(rhs);
}
int main() {
    std::vector<int> nums{42,-5,-80,8080};
    std::sort(nums.begin(),nums.end(), compare_abs);

    std::copy(nums.begin(), nums.end(),std::ostream_iterator<int>(std::cout, " "));

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

