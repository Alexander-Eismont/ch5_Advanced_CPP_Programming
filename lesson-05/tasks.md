# Задача 1. Частота символов

### Описание
Нужно посчитать, сколько раз каждый символ встречается в заданном тексте, и отсортировать по убыванию частоты.

<details>
<summary><font size="+1"> Пример правильной работы программы</font></summary>

```
[IN]: Hello world!!
[OUT]: 
l: 3
o: 2
!: 2
 : 1
H: 1
e: 1
d: 1
w: 1
r: 1
```
</details>
<br>

# Task 1. Symbol frequency

### Description
You need to count how many times each character appears in a given text and sort it in descending order of frequency.

<details>
<summary><font size="+1">An example of correct program operation</font></summary>

```
[IN]: Hello world!!
[OUT]:
l: 3
o: 2
!: 2
 : 1
H: 1
e: 1
d: 1
w: 1
r: 1
```
</details>
<br>

# Задача 2. Удаление дубликатов

### Описание
Вам поступают числа из стандартного потока ввода. Первым числом вводится количество элементов, далее сами значения.

Нужно вывести все эти числа без дубликатов в порядке убывания.

<details>
<summary><font size="+1"> Пример правильной работы программы</font></summary>

```
[IN]:
6
1
5
1
3
4
4
[OUT]: 
5
4
3
1
```
</details>
<br>

# Task 2. Removing duplicates

### Description
You receive numbers from standard input. The first number is the number of elements, then the values themselves.

You need to print all these numbers without duplicates in descending order.

<details>
<summary><font size="+1">An example of correct program operation</font></summary>

```
[IN]:
6
1
5
1
3
4
4
[OUT]:
5
4
3
1
```
</details>
<br>

# Задача 3*. Аналог std::vector

### Описание
Для лучшего понимания работы std::vector в этом задании вам нужно написать собственную шаблонную упрощённую реализацию std::vector. 

У вашего контейнера должны работать функции:

* at(int index) — доступ к элементу контейнера по индексу;
* push_back(T value) — размер контейнера неизвестен заранее, вам нужно правильно увеличивать выделенную память;
* size () — количество элементов в контейнере;
* capacity() — количество элементов, которое может вместить контейнер до нового выделения памяти.

# Task 3*. Analogue std::vector

### Description
To better understand how std::vector works in this assignment, you will need to write your own boilerplate simplified implementation of std::vector.

Your container should have the following functions:

* at(int index) - access to the container element by index;
* push_back(T value) - the size of the container is unknown in advance, you need to increase the allocated memory correctly;
* size () - number of elements in the container;
* capacity() - the number of elements that the container can hold before a new memory allocation.