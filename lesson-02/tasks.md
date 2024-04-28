<details>
<summary><font size="+2">Задача 1. Умный массив</font></summary>

### Описание
Вам нужно реализовать умный массив для данных типа int в духе идиомы RAII, который сам управляет своей памятью: самостоятельно выделяет её при создании и
очищает, когда объект данного класса не используется.

Должны быть реализованы следующие функции:
* Конструктор, принмающий количество элементов, которое будет хранить массив.
* Функция добавления нового элемента в массив. Не забудьте обработать случай, когда количество элементов больше количества элементов, на которую выделена память.
* Функция получения элемента по индексу. Не забудьте проверку на корректность индекса.
* Деструктор.

### Пример правильной работы программы
Работа с вашим классом должна происходить так:

``` C++
try {
	smart_array arr(5);
	arr.add_element(1);
	arr.add_element(4);
	arr.add_element(155);
	arr.add_element(14);
	arr.add_element(15);
	std::cout << arr.get_element(1) << std::endl;
}
catch (const std::exception& ex) {
	std::cout << ex.what() << std::endl;
}
```
</details>
<br>

<details>
<summary><font size="+2">Task 1. Smart array</font></summary>

### Description
You need to implement a smart array for data of type int in the spirit of the RAII idiom, which manages its own memory: independently allocates it when creating and
clears when an object of this class is not in use.

The following functions must be implemented:
* Constructor that accepts the number of elements that the array will store.
* Function for adding a new element to an array. Don't forget to handle the case where the number of elements is greater than the number of elements for which memory is allocated.
* Function for getting an element by index. Don't forget to check that the index is correct.
* Destructor.

### Example of correct program operation
Your class should work like this:

``` C++
try {
	smart_array arr(5);
	arr.add_element(1);
	arr.add_element(4);
	arr.add_element(155);
	arr.add_element(14);
	arr.add_element(15);
	std::cout << arr.get_element(1) << std::endl;
}
catch (const std::exception& ex) {
	std::cout << ex.what() << std::endl;
}
```
</details>
<br>

<details>
<summary><font size="+2">Задача 2. Копирование умных массивов</font></summary>

### Описание
В этом задании вам нужно поработать с классом умных массивов, который вы реализовали в предыдущем задании.
Сначала попробуйте создать два экземпляра вашего класса с различными элементами и присвоить один другому.

``` C++
smart_array arr(5);
arr.add_element(1);
arr.add_element(4);
arr.add_element(155);

smart_array new_array(2);
new_array.add_element(44); 
new_array.add_element(34);

arr = new_array
```
Попытайтесь самостоятельно разобраться, что произошло, и правильно реализовать копирование умных массивов.
</details>
<br>


<details>
<summary><font size="+2">Task 2. Copying smart arrays</font></summary>

### Description
In this assignment, you need to work with the smart array class that you implemented in the previous assignment.
First try creating two instances of your class with different elements and assigning one to the other.

``` C++
smart_array arr(5);
arr.add_element(1);
arr.add_element(4);
arr.add_element(155);

smart_array new_array(2);
new_array.add_element(44); 
new_array.add_element(34);

arr = new_array
```

Try to figure out what happened on your own and correctly implement copying of smart arrays.
</details>
<br>