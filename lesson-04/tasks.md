<details>
<summary><font size="+2">Задача 1. Возведение в квадрат</font></summary><br>

### Описание
Нужно реализовать шаблонную функцию возведения в квадрат, которая работает не только с простыми числами, но и с векторами.
Для этого создайте две реализации шаблонной функции.

### Пример правильной работы программы

```
[IN]: 4
[OUT]: 16
[IN]: -1, 4, 8
[OUT]: 1, 16, 64
```
</details>
<br>

<details>
<summary><font size="+2">Task 1. Squaring</font></summary><br>

### Description
We need to implement a template squaring function that works not only with prime numbers, but also with vectors.
To do this, create two implementations of the template function.

### Example of correct program operation

```
[IN]: 4
[OUT]: 16
[IN]: -1, 4, 8
[OUT]: 1, 16, 64
```
</details>
<br>

<details>
<summary><font size="+2">Задача 2. Таблица</font></summary><br>

### Описание
Нужно написать шаблонный класс для двумерного массива (таблицы). Все ячейки таблицы имеют один и тот же тип данных T.

Требования к классу:

1. Должен быть конструктор, получающий на входе два целых числа — количество строк и столбцов соответственно.
2. Должны быть константная и неконстантная версии оператора [], возвращающего массив, к которому снова можно применить оператор [].  
  
    Нужно, чтобы работали конструкции вида:  
    * `cout << table[i][j];` 
    * `table[i][j] = value;`.

3. Должна быть константная функция Size, возвращающая размер таблицы.

### Пример правильной работы программы
```C++
auto test = table<int>(2, 3);
test[0][0] = 4;
std::cout << test[0][0]; // выводит 4
```
</details>
<br>

<details>
<summary><font size="+2">Task 2. Table</font></summary><br>

### Description
We need to write a template class for a two-dimensional array (table). All table cells have the same data type T.

Class requirements:

1. There must be a constructor that receives two integers as input - the number of rows and columns, respectively.
2. There must be a constant and a non-const version of the [] operator, which returns an array on which the [] operator can again be applied.
  
     It is necessary for constructions of the form to work:
     * `cout << table[i][j];`
     * `table[i][j] = value;`.

3. There must be a constant function Size that returns the size of the table.

### Example of correct program operation
```C++
auto test = table<int>(2, 3);
test[0][0] = 4;
std::cout << test[0][0]; // prints 4
```
</details>
<br>

<details>
<summary><font size="+2">Задача 3. Счётчик чисел</font></summary><br>

### Описание
В этом задании вам нужно реализовать функтор, который подсчитывает сумму и количество чисел, делящихся на 3. 

Должны быть реализованы 2 функции:
* get_sum()
* get_count()

### Пример правильной работы программы
```
[IN]: 4 1 3 6 25 54
[OUT]: get_sum() = 63
[OUT]: get_count() = 3
```
</details>
<br>

<details>
<summary><font size="+2">Task 3. Number counter</font></summary><br>

### Description
In this assignment you need to implement a functor that calculates the sum and number of numbers divisible by 3.

2 functions must be implemented:
* get_sum()
* get_count()

### Example of correct program operation
```
[IN]: 4 1 3 6 25 54
[OUT]: get_sum() = 63
[OUT]: get_count() = 3
```
</details>
<br>