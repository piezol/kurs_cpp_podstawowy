# Jak skonfigurować sobie środowisko na windows 10

## Instalacja IDE

1. [Download-visual-code](https://code.visualstudio.com/download).
2. Uruchom visual code i przejdz do extension.
3. Zainstaluj C++, CMake, CMake Tools.
 
## instalacja git-bash

1. [Download-git-bash](https://git-for-windows.github.io/).
2. W trakcje instalacji w opcji `Select Components` zaznacz wszystko.
3. W nasepnym kroku wybierz wybrany przez siebie ulubiony edytor (polecam visiual studio code).
4. W kolejnych krokach wybierz:
  * `Git from the command line and also from 3rd-party software`.
  * `use the OpenSSL library`.
  * `Checkout Window-style, commit Unix-style line endings`.
  * `Use MinTTY`.
  * `Enable file system chaing`, `Enable git credentail menager`, Enable symbolic link`,
5. Kliknij `install`
6. Uruchom git-bash i skonfiguruj swoje dane w git-bash:
  * `git config --global user.name "Your Name"`
  * `git config --global user.email "your@email.com`
7. Sprawdz czy poprawnie ustawiles dane: 
  * `git config --global --list`

## Instalacja Cygwin

1. [Download-Cygwin](https://cygwin.com/install.html).
2. Zainstaluj.
3. Po instalacji pojawi sie okno `secelt packages`, tutaj możemy wybierac co cchemy zainstalować.
   W search wpisz kolejne frazy i wybierz najnowsze versje pakietów do instalacji:
   * search `cmake` -> Devel -> zainstaluj wszystkie 5 pakietów (najnowsze versje),
   * search `g++` -> Devel -> zainstaluj wszystkie 5 pakietów (najnowsze versje),
   * search `clang` -> Devel -> zainstaluj wszystkie 5 pakietów (najnowsze versje).
   * search `make` -> podobnie zainstaluj wszystkie 4 pakiety
4. Uruchom Cygwin.
5. Wpisz g++ --version, aby sprawdzić czy zostął poprawnie zainstalowany.
6. Wpisz clang --version.
7. Wpisz cmake --version.
8. Utwórz plik z prostym kodem:
```
  #include<iostream>
  #include<string>
  
  int main() {
    std::cout << "Podaj swoje imie: ";
    std::string name;
    std::cin >> name;
    std::cout << "\nHello wordl!: " << name << "\n";
    
    return 0;
  }
```
9. Nazwij go zadanie1.cc a następnie zbuduj uzywając komendy: `g++ -std=c++17 zadanie1.cc -o zadanie1`
10. Uruchom program `./zadanie1.exe`

## Obsługa cmake

1. Utwórz plik CmakeLists.txt i wpisz do niego:
```
  cmake_minimum_required(VERSION 3.10)

  set(CMAKE_C_COMPILER "/usr/bin/gcc")
  set(CMAKE_CXX_COMPILER "/usr/bin/g++")

  # set the project name
  project(Tutorial)

  # add the executable
  add_executable(Tutorial zadanie1.cc)
```
2. Utworz katalog build `mkdir build`
3. Przejdz do katalogu `cd build`
4. Uruchom cmake `cmake ..`
5. Zbuduj plik `make`
6. Uruchom program `./zadanie1.exe`


## Obsługa cmake z poziomu Visual studo code
[Pod tym linkiem](https://www.youtube.com/watch?v=V1YP7eJHDJE) znajduje sie swietny krótki tutorial jak napisac i skompilowac
helloworld.cc używając cmake i visual studio code.
