﻿
// Class Work 25.09.2023 -------------------------------------------	

/// Нормальные формы. Связанные таблицы.


/* Проблемы БД

1) Избыточность
	1.1) Усложнения обслуживания
	1.2) Увеличивается объем хранения
	1.3) Разсинхронизация копий
2) Аномалии БД
	2.1) Вставки - невозможность вставить запись, без наличия других данных
	2.2) Обновления - обновление приводит к несогласованным/нелогичным значениям в других частях БД
	2.3) Удаления - удаление приводит к потери информации, важной для других данных

*/





// Типы нормальных форм [INF]
//набор правил для проектирования БД с целью минимизации избыточности данных
/*
1) 1NF
каждая ячейка - атомарное (неделимое) значение (нет множественных значений, массивов, структур)

2) 2NF
1NF + каждая не ключевая колонка полностью зависет от своего ключа (содержит уникальную информацию)

3) 3NF
2NF + неключевые поля не зависят друг от друга

--------- минимальные требования к дизайну БД --------------------------

4) Нормальная форма Бойса-Кодда 
Более строгая форма 3NF: 
	4.1) каждый ключ, который можно вынести - должен быть внешним ключом
	4.2) каждый неключевой атрибут - функционально

5) 4NF
Применяетеся для устранения многозначных зависимостей между данными и обычно связана с множественными зависимостями.
Связи многие ко многим.
Помогает выносить избыточные данные во внешние таблицы

6) 5NF
Для многоверсионных данных и управления - содержит данные об изменениях во времени (чаще всего)

7) 6NF
5NF + детализует изменения состояний объекта

8) 7NF
Самый высокий уровень нормализации - позволяет изолировать данные по источнику.
Для контроля информационной безопасности

9) Доменно-ключевая форма (DKNF)
Учитывает доменные (заданные бизнес-правилами) зависимости атрибутов

*/

// Разница между 3NF и BCNF
/*
1) Вынос функциональных зависимостей в отдельные таблицы. Также это о скорости роста кол-во записей в разных таблицах
	3NF:  желательно 
	BCNF: обязательно

2) Нетривиальные зависимости. Наличие таких зависимостей нарушает BCNF, их тоже выносим

3) Проверка ключей - выявление 

4) Анализ данных - наличие нетривиальных зависимостей, таких , что изменение некоторых полей приводит к аномалиям
	
*/



// Этапы дизайна БД
/*
1) Выявить функциональные зависимости. Если есть - приводим к 1NF
2) Избыточные данные. Если есть - приводим к 2NF/3NF/
3) Многозначные зависимости. Возможно потребуется приведение к 4NF 
4) Составные ключи.
5) Множественные атрибуты (проврерка на соответствие 1NF)
6) Ключи и связи. 
*/


// Типы связей атрибутов
/*
1) 1/1 (1 строчка в таблице соответствует только 1 одной строчки из связанной таблицы)
2) 1/N (1 запись в таблице соответствует N  записям из связанной таблицы)
3) N/N (вспомагательная таблица - для определения множественных связей).
*/


//Task 1
void Task_1()
{

}
//Task 2
void Task_2()
{
	
}
//Task 3
void Task_3()
{

}


// MAIN ------- MAIN ------- MAIN ------- MAIN ------- MAIN --------
int main()
{
srand(time(NULL));
		
	
Task_1();
Task_2();
Task_3();





std::cout << "\n\n";
//system("pause");	
_getch();
}


