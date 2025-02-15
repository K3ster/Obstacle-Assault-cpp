Aby dodać plik README oraz opis "About" do Twojego repozytorium na GitHubie, wykonaj następujące kroki:

**1. Dodanie opisu "About":**

Opis "About" jest krótkim wprowadzeniem do Twojego projektu, które pojawia się na stronie głównej repozytorium.

- Przejdź do swojego repozytorium na GitHubie.
- Kliknij przycisk "Settings" (Ustawienia) znajdujący się w prawym górnym rogu.
- W sekcji "Repository name" (Nazwa repozytorium) znajdziesz pole "Description" (Opis).
- Wprowadź tam krótki opis projektu, np.: "Prosta gra platformowa z przeszkodami stworzona w Unreal Engine 5 z wykorzystaniem C++."
- Zapisz zmiany, klikając poza polem opisu lub naciskając Enter.

**2. Dodanie pliku README:**

Plik README dostarcza szczegółowych informacji o projekcie, takich jak cel, instrukcje instalacji czy sposób użycia.

- W Twoim repozytorium na GitHubie kliknij przycisk "Add file" (Dodaj plik) i wybierz "Create new file" (Utwórz nowy plik).
- W polu nazwy pliku wpisz `README.md`.
- W edytorze poniżej wprowadź treść pliku README. Możesz skorzystać z poniższego szablonu:

  ```markdown
  # Obstacle Assault

  Obstacle Assault to prosta gra platformowa z przeszkodami stworzona w Unreal Engine 5 przy użyciu języka C++. Projekt ten został zrealizowany w celach edukacyjnych, aby zgłębić mechaniki platformowe oraz programowanie w C++ w środowisku Unreal Engine.

  ## Rozpoczęcie pracy

  Aby uruchomić projekt lokalnie, wykonaj poniższe kroki:

  1. **Wymagania wstępne**: Upewnij się, że masz zainstalowane:
     - Unreal Engine 5
     - Podstawową znajomość Unreal Engine, Blueprintów oraz C++

  2. **Pobierz kod źródłowy**: Sklonuj repozytorium na swój lokalny komputer:
     ```bash
     git clone https://github.com/K3ster/Obstacle-Assault-cpp.git
     ```

  3. **Otwórz projekt**: Uruchom plik `UnrealLearningKit.uproject` w Unreal Engine 5.

  ## Sterowanie w grze

  - **Ruch**: Klawisze `WASD` lub strzałki
  - **Skok**: Spacja

  ## Zmodyfikowane pliki

  Główne pliki, które zostały zmienione w ramach tego projektu, to:
  - `Source/UnrealLearningKit/MovingPlatform.cpp`
  - `Source/UnrealLearningKit/MovingPlatform.h`

  ## Zasoby

  - **Silnik gry**: [Unreal Engine 5](https://www.unrealengine.com/)
  - **Postać gracza**: Pakiet "Stylized Character Kit: Casual 01" autorstwa ROCKETARTS
  - **Materiały edukacyjne**: Kurs "Unreal Engine 5 C++ Developer: Learn C++ & Make Video Games" dostępny na Udemy
