# OOP
Repository with OOP materials and projects by "Programming Base" (2nd term)

## OOP-Projects

### Project CTime

ПР2. В соответствии с файлом TC №3 GITHUB выложить свой первый код. 
Deadline: 5 марта в терминал-классе.

ДЗ1. Завершить разработку класса CTime (Время), создать pull request и получить ревью от двух одногруппников - запросить после этого ревью от меня. По аналогии создать и разработать класс CDate (Дата) в другой ветке разработки, в процессе работы качественно вести историю в коммитах, создать pull request и получить ревью от двух одногруппников - запросить после этого ревью от меня.
Deadline: 1 неделя (до 12 марта).

### Project CString

ПР3. Реализовать класс Строка, используя выложенный шаблон
https://github.com/UsovaMA/OOP/blob/main/OOP-Projects/CString/string.h
https://github.com/UsovaMA/OOP/blob/main/OOP-Projects/CString/string.cpp
https://github.com/UsovaMA/OOP/blob/main/OOP-Projects/CString/main.cpp

Как работать с задачей:
* раскомментировать очередную функцию из объявления класса в файле string.h,
* реализовать её в файле string.cpp,
* написать пару строк кода проверки её работы в файле main.cpp,
* оформить комментарий к реализованной функции.

Требования к реализации:
* осуществить корректное выставление спецификаторов const (функция не меняет объект this), noexcept (в функции нет исключений) для методов,
* в процессе реализации оформлять корректно "документацию кода",
* создавать историю коммитов для github (например, добавлена рализация всех конструкторов, реализованы все варианты функций вставки, ... функций поиска и т.д.),
* весь написанный функционал должен быть исчерпывающе проверен в функции main(),
* в конце терминал-класса сделать push всего реализованного за занятие в репозиторий. 

Deadline: 12 марта в терминал-классе начать работу,
завершить разработку за 1 неделю (до 19 марта).

### Project CArchive

ДЗ2. Реализовать переосмысление работы «Архив» из 1-го семестра.
В качестве стартового проекта использовать приложенный шаблон

Как работать с задачей:
* собрать проект с файлами шаблона,
* запустить и посмотреть как она работает (в текущем шаблоне реализована только вставка (1) на заданную позицию (3) одного элемента (1) в качестве примера как грамотно разделять обязанности между функциями и вызывать их в меню с отловом исключений),
* разобраться как работают те элементы, которые уже написаны в качестве примера.
Далее:
* раскомментировать очередную функцию из объявления класса в файле archive.h,
* реализовать её в этом же файле (обратите внимание, объявление и реализация шаблонных классов и функций должны быть в одном файле!),
* если это один из основных алгоритмов (вставка, поиск, удаление, замена) или другое действие существующее в меню (например, очистка архива) - найти её место в меню в файле main.cpp, реализовать для её работы отдельно в InputSystem и OutputSystem общение с пользователем для ввода значений для этих алгоритмов или вывода результатов,
* проверить работоспособность  после добавления очередного пункта меню.

Требования к реализации:
* код должен быть реализован на С++ с ненарушением концепций ООП,
* осуществлять качественное разделение кода на функции:
1. одна функция - одно действие,
2. функции интерфейса (ввода/вывода информации в нужном формате) должны быть реализованы отдельно аналогично примеру с insert в именном пространстве InputSystem/OutputSystem, **в функциях класса-архива НЕ может быть общения с пользователем и вывода сообщений на экран** - это обязанности интерфейса (исключение: функция print(), которая выводит содежимое хранилища на экран),
* осуществить корректное выставление спецификаторов const (функция не меняет объект this), noexcept (в функции нет исключений), static (функция становится явно статической - https://www.geeksforgeeks.org/what-are-static-functions-in-c/), inline (при компиляции код этой функции будет вставляться на месте вызовов),
* должно быть продемонстрировано использование перечислений, именных пространств и шаблонных функций в соответствии с примером,
* должно быть продемонстрировано корректное использование указателей и ссылок (старайтесь повсеместно переходить на использование ссылок, если это коненчно не массив, который передаётся традиционно по указателю),
* должна быть использована механика исключений (throw) и их обработки (try .. catch), исключения должны быть написаны как минимум везде, где возможны некорректные входные данные,
* оформить документацию кода,
* создать качественную историю коммитов для github,
* реализовать полноценное приложение в main(). 

Требования к выводу в меню
1. Меню должно быть понятным и качественно оформленным.
2. После выполнения любого поиска выводить информацию в понятном виде (функция должна быть реализована в именном пространстве OutputSystem):
Matches found: 3, 5, 6, 7, 13
42441, 112, 24, 335, 426, 42441, 112, 24, 335, 426, 42427,
                ^         ^      ^    ^
24, 335, 426, 42427
         ^
Даже если это поиск одного элемента, его также нужно выделить в потоке информации. Советую создать вспомогательную функцию, подсчитывающую количество цифр в числе, а также поиспользовать уже написанные, getCursor, setCursor.

Прочее
Допускается добавление нового (не продуманного в шаблоне) служебного функционала.

Deadline: 2 недели (до 26 марта).
