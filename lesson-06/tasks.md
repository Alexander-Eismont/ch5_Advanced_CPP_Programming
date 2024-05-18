# Задача 1. Уникальный вектор

### Описание
Нужно реализовать функцию, которая удаляет все дубликаты, а не только подряд идущие, из std::vector.

<details>
<summary><font size="+1">Пример правильной работы программы</font></summary>

```
[IN]: 1 1 2 5 6 1 2 4
[OUT]: 1 2 4 5 6
```
</details>
<br>

# Task 1. Unique vector

### Description
We need to implement a function that removes all duplicates, not just consecutive ones, from a std::vector.

<details>
<summary><font size="+1">Example of correct operation of the program</font></summary>

```
[IN]: 1 1 2 5 6 1 2 4
[OUT]: 1 2 4 5 6
```
</details>
<br>

# Задача 2. Печать контейнера

### Описание
Нужно реализовать шаблонную функцию, которая печатает содержимое контейнера.

Контейнер может быть любым: 
- std::set
- std::vector
- std::list

<details>
<summary><font size="+1"> Пример правильной работы программы</font></summary>

```C++
std::set<std::string> test_set = { "one", "two", "three", "four" };
print_container(...); // four one three two.

std::list<std::string> test_list = { "one", "two", "three", "four" };
print_container(...); // one, two, three, four

std::vector<std::string> test_vector = { "one", "two", "three", "four" };
print_container(...); // one, two, three, four
```
</details>
<br>

# Task 2. Printing the container

### Description
We need to implement a template function that prints the contents of the container.

The container can be anything:
- std::set
- std::vector
- std::list

<details>
<summary><font size="+1">An example of correct program operation</font></summary>

```C++
std::set<std::string> test_set = { "one", "two", "three", "four" };
print_container(...); // four one three two.

std::list<std::string> test_list = { "one", "two", "three", "four" };
print_container(...); // one, two, three, four

std::vector<std::string> test_vector = { "one", "two", "three", "four" };
print_container(...); // one, two, three, four
```
</details>
<br>
