# MiniGIMP

MiniGIMP to aplikacja desktopowa do przetwarzania i analizy obrazów, inspirowana prostym edytorem graficznym. Projekt powstał w **Qt Creator** z interfejsem projektowanym w **Qt Designer**.

## Cel projektu

Aplikacja umożliwia m.in.:

- stosowanie **filtrów** na obrazie,
- **analizę obrazu** (np. histogramy kanałów),
- operacje oparte na **jawnych obliczeniach matematycznych** na danych pikseli.

Matematyka jest tu kluczowa: każda operacja ma czytelne podstawy (konwolucje, transformacje punktowe, statystyka kolorów itd.), a nie tylko „gotowe efekty wizualne”.

## Technologie

| Element | Wersja / narzędzie |
|---------|-------------------|
| Język | C++17 |
| Framework UI | Qt Widgets (Qt 5 lub Qt 6) |
| Build | CMake 3.5+ |
| IDE | Qt Creator |
| UI | Qt Designer (pliki `.ui`) |

## Wymagania

- Qt 5 lub Qt 6 z modułem **Widgets**
- Kompilator C++17 (np. MSVC, MinGW, GCC, Clang)
- CMake 3.5 lub nowszy

## Budowanie

### Qt Creator

1. Otwórz `CMakeLists.txt` jako projekt.
2. Skonfiguruj kit (Qt + kompilator).
3. Zbuduj i uruchom target **MiniGimp**.

### Wiersz poleceń

```bash
cmake -B build -S .
cmake --build build
```

Plik wykonywalny powstanie w katalogu build (np. `build/MiniGimp.exe` na Windows).

## Edycja interfejsu

Interfejs głównego okna znajduje się w `mainwindow.ui`. Można go otworzyć w **Qt Designer** (z Qt Creator lub osobno), wprowadzić zmiany i zapisać — projekt korzysta z automatycznego generowania nagłówków UI (`CMAKE_AUTOUIC`).

Proporcje kolumn layoutu ustawiane są w kodzie (`MainWindow` po `setupUi`), aby uniknąć problemów kompilacji z `layoutStretch` w Qt 6.7.

## Struktura (skrót)

```
MiniGIMP/
├── main.cpp              # Punkt wejścia
├── mainwindow.ui         # UI z Qt Designer
├── mainwindow.cpp/.h     # Główne okno aplikacji
├── appstyle.cpp/.h       # Styl aplikacji
└── CMakeLists.txt        # Konfiguracja CMake
```

## Licencja

Projekt edukacyjny — ustal licencję według potrzeb repozytorium.
