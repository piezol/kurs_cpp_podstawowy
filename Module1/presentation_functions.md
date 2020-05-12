<!-- .slide: data-background="#111111" -->

# Podstawy C++

## Funkcje

<a href="https://coders.school">
    <img width="500" data-src="../img/coders_school_logo.png" alt="Coders School" class="plain">
</a>

===

## Funkcje

**Funkcja** jest to fragment programu, któremu nadano nazwę i który możemy wykonać poprzez podanie jego nazwy oraz ewentualnych argumentów.

Funkcja == podprogram == procedura

Przykładowo, w trakcie jazdy na rowerze naszą główną funkcją jest przemieszczanie się z punktu a do b. Jednak wykonujemy także kilka podprogramów, jak zmiana biegów, hamowanie, rozpędzanie, skręcanie. Podobnie w programie możemy wydzielić konkretne zachowania i przenieść je do funkcji, które nazwiemy tak, by sugerowały co robią. Ważne, aby funkcja robiła tylko jedną rzecz. Jedna funkcja zmienia biegi, druga hamuje, trzecia skręca.

===

## Sygnatury funkcji (deklaracje)

* `void fun(int)` - funkcja ma nazwę fun, nic nie zwraca a przyjmuje jeden argument typu int.
* `void foo(double)` jest to funkcja o nazwie foo, która nic nie zwraca a przyjmuje jeden argument typu double.
* `double bar(float, const int)` jest to funkcja o nazwie bar, która zwraca typ double a przyjmuje 2 argumenty
pierwszy to float, a drugi to const int (const oznacza, że wartość ta nie może zostać zmodyfikowana).

===

## Wywołania funkcji

* `foo(5.0)` -> wywołujemy funkcję foo z argumentem double, który jest równy 5.0.
* `double result = bar(5.4, 10)` -> wywołujemy funkcję bar z argumentem float (5.4) oraz int (10) a jej wynik przypisujemy do zmiennej typu double o nazwie result.

===

## Zadanie

Dopisz brakującą funkcję `multiply`. Ma ona pomnożyć dwie liczby podane jako jej parametry. [Pobierz zadanie](task1.cpp)

```cpp
#include <iostream>

// Write missing function here

int main() {
    std::cout << "4 * 5: " << multiply(4, 5) << "\n";
    std::cout << "10 * 5: " << multiply(10, 5) << "\n";
    std::cout << "-5 * 5: " << multiply(-5, 5) << "\n";

    return 0;
}
```
