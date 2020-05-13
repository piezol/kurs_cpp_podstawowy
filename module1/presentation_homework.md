<!-- .slide: data-background="#111111" -->

# Podstawy C++

## Podsumowanie

<a href="https://coders.school">
    <img width="500px" data-src="../img/coders_school_logo.png" alt="Coders School" class="plain">
</a>

___

## Co pamiętasz z dzisiaj?

### Napisz na czacie jak najwięcej haseł
<!-- .element: class="fragment fade-in" -->

1. <!-- .element: class="fragment fade-in" --> Typy danych
    * `void`, `bool`, `char`, `int`, `double` + ich odmiany
1. <!-- .element: class="fragment fade-in" --> Funkcje
    * sygnatura (deklaracja) = typ zwracany, nazwa, argumenty
1. <!-- .element: class="fragment fade-in" --> Instrukcje warunkowe
    * `if`, `switch/case`
1. <!-- .element: class="fragment fade-in" --> Pętle
    * `for`, `while`, `do/while`
1. <!-- .element: class="fragment fade-in" --> Tablice
    * `Type t[N]`, `operator[]`

___

## Praca domowa

### Post-work

* `operator%`
* zad 1, 2, 3
* zad 5 - Fibonacci - rekurencja i klasycznie
* zad 6 LCM i GCD

### Pre-work

* c
* d

___
<!-- .slide: style="font-size: 0.7em" -->

## Zadanie 1

Zaimplementuj funkcję, której zadaniem ma być wykonywanie działań arytmetycznych na dwóch liczbach.

Sygnatura - `std::string calculate(const std::string& command, int first, int second)`.

### Parametry

* `const std::string& command` - rodzaj działania. Jedno z `add`, `subtract`, `multiply`, `divide`
* `int first` - pierwsza liczba
* `int second` - druga liczba

### Wartość zwracana

* `std::string` - wynik działania jako tekst

W przypadku podania błędnego parametru `command` funkcja powinna zwrócić napis "Invalid data".

### Przykłady użycia

```cpp
auto result = calculate("add", 2, 3);  // result = "5"
result = calculate("multiply", 2, 3);  // result = "6"
result = calculate("hello", 2, 3);     // result = "Invalid data"
```

___
<!-- .slide: style="font-size: 0.55em" -->

## Dostarczenie zadań

1. Zrób fork repo [kurs_cpp_podstawowy](https://github.com/coders-school/kurs_cpp_podstawowy)
2. Ściągnij swój fork - `git clone https://github.com/YOURNICK/kurs_cpp_podstawowy.git`
3. Przejdź do katalogu kurs_cpp_podstawowy - `cd kurs_cpp_podstawowy`
4. Utwórz gałąź o nazwie `calculate` na rozwiązanie zadania calculate - `git checkout -b calculate`
5. Przejdź do katalogu homework/calculate - `cd homework/calculate`
6. Tutaj znajduje się szkielet programu, który musisz wypełnić. Szkielet programu zawiera już testy, które sprawdzą, czy Twoja implementacja jest poprawna. Zanim rozpoczniesz implementację wpisz następujące zaklęcia:

```bash
mkdir build   # tworzy katalog build
cd build      # przechodzi do katalogu build
cmake ..      # generuje system budowania wg przepisu z pliku ../CMakeLists.txt
make          # kompiluje
ctest         # odpala testy
```

7. Zaimplementuj funkcjonalność (najlepiej po kawałku, np. zacznij od samego dodawania)
8. Sprawdź, czy implementacja przechodzi testy - `make` (kompilacja) oraz `ctest` (uruchomienie testów)
9. Zrób commit z opisem działającej funkcjonalności - `git commit -am"adding works"`
10. Wróć do punktu 7 i zaimplementuj kolejny kawałek. Jeśli rozwiązanie przechodzi wszystkie testy przejdź do kolejnego punktu
11. Wypchnij zmiany do swojego forka - `git push origin calculate`
12. Wyklikaj Pull Request na GitHubie.
13. Poczekaj chwilę na raport Continuous Integration (CI), aby sprawdzić, czy rozwiązanie kompiluje się i przechodzi testy także na GitHubie.
14. Jeśli jest ✅ - brawo, rozwiązanie jest poprawne. Jeśli jest ❌ kliknij na niego i sprawdź opis błędu. Popraw go (punkty 7-11) i poczekaj na kolejny raport CI.

___

## Dostarczenie kolejnych zadań

Najpierw wróć na gałąź główną - `git checkout master` i postępuj od kroku 4 dla kolejnego zadania (stworzenie nowej gałęzi o innej nazwie)

Możesz zaobserwować, że przełączenie się na inną gałąź spowodowało, że nie masz rozwiązania pierwszego zadania. Spokojnie, jest ono po prostu na innej gałęzi. Możesz do niego wrócić przechodząc na gałąź tego zadania - `git checkout nazwa`.
