<!-- .slide: data-background="#111111" -->
# Podstawy C++

## Pętle

<!-- ![Coders School](../img/coders_school_logo.png "Coders School") <!-- .element: class="plain" width="500" -->

<a href="https://coders.school">
    <img width="500" data-src="../img/coders_school_logo.png" alt="Coders School" class="plain">
</a>

---

## Pętle

Pętla służy do powtarzania instrukcji, które chcemy by się wykonały więcej niż raz bez konieczności ich wielokrotnego pisania w kodzie.

Podstawowe pętle: `while`, `for`

===

## Pętla `while`

`while` używamy, gdy chcemy coś wykonać dopóki nie zostanie spełniony jakiś warunek. Przeważnie nie mamy pojęcia, kiedy to następy (nie znamy liczby kroków) np:

* Przeglądamy koszule w Internecie dopóki nie znajdziemy pasującej do nas
* Powtarzamy walkę z tym samym bossem aż go nie pokonamy
* Jemy zupę, aż talerz nie będzie pusty
* Przeszukujemy kontakty w telefonie aż nie znajdziemy interesującej nas osoby

===

### Konstrukcja pętli `while`

```cpp
while (condition) {
  // Do sth
}
```

### Przykład

```cpp
while (a == b) {
  std::cin >> a;
  std::cin >> b;
}
```

===

## Pętla `for`

`for` używamy, gdy chcemy coś wykonać określoną liczbę razy. Przeważnie znamy liczbę kroków np:

* Wypełniamy ankietę składającą się z 10 pytań -> liczba kroków 10
* Przemieszczamy się z punktu A do B -> liczba kroków = dystans / długość kroku
* Piszemy egzamin składający się z 4 zadań -> liczba kroków (jak umiemy to 4, jak nie to jeszcze wykonujemy podprogram `ściągaj`)
* Zapinamy koszule (o ile nie wyrwiemy żadnego guzika)

===

### Konstrukcja pętli `for`

```cpp
for (variable = initial_value; condition; variable_change) {
  // Do sth
}
```

### Przykład

```cpp
for (size_t i = 0 ; i < 10 ; i+=2) {
  std::cout << "i: " << i << '\n';
}
```

---

Każdą pętlę `for` można zamienić na `while` i odwrotnie. Wybieramy wygodniejszy dla nas zapis, zazwyczaj w zależności od znajomości liczby kroków.

Istnieje jeszcze jeden rodzaj pętli. Jaki?

---

## Pętla `do/while`

```cpp
do {
  // Do sth
} while(condition)
```

Kod w pętlach `while` lub `for` może się nie wykonać ani razu, gdy warunek nie będzie nigdy spełniony.

Kod w pętli `do/while` wykona się co najmniej raz.
