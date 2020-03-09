1. Zainstaluj visual code:
  * `sudo apt update`
  * `sudo apt install software-properties-common apt-transport-https wget`
  * `wget -q https://packages.microsoft.com/keys/microsoft.asc -O- | sudo apt-key add -`
  * `sudo add-apt-repository "deb [arch=amd64] https://packages.microsoft.com/repos/vscode stable main"`
  * `sudo apt update`
  * `sudo apt install code`

2. Zruchom visual i zainstaluj extesions:
  * C/C++
  * Cmake
  * Cmake Tools
  
3. Zainstaluj g++ i cmake
  * `sudo apt update`
  * `sudo apt install build-essential`
  * `sudo apt-get install manpages-dev`

4. Sprawdź, czy g++ sie zainstalował: `g++ --version`
5. zainstaluj cmake: 
  * `sudo apt-get install cmake`
  *lub:*
  * `wget https://github.com/Kitware/CMake/releases/download/v3.15.2/cmake-3.15.2.tar.gz`
  * `tar -zxvf cmake-3.15.2.tar.gz`
  * `cd cmake-3.15.2`
  * `./bootstrap`
  * `make`
  * `sudo make install`
6. sprawdź, czy cmake się zainstalował: `cmake --version`
7. Budowanie kodu:
  * utwórz plik zadanie1.cc
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
  * wpisz `g++ -std=c++17 zadanie1.cc -o zadanie1`
  * uruchom `./zadanie1

8. Budowanie kodu za pomocą cmake
  * Utwórz plik CmakeLists.txt i wpisz do niego:
  ```
    cmake_minimum_required(VERSION 3.10)

    # Possible, that you don't need this 2 lines.
    set(CMAKE_C_COMPILER "/usr/bin/gcc")
    set(CMAKE_CXX_COMPILER "/usr/bin/g++")

    # set the project name
    project(Tutorial)

    # add the executable
    add_executable(Tutorial zadanie1.cc)
  ```
  * Utworz katalog build mkdir build
  * Przejdz do katalogu cd build
  * Uruchom cmake cmake ..
  * Zbuduj plik make
  * Uruchom program ./zadanie1.exe
