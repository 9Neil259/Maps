# Maps
Die `std::map`-Klasse in C++ bietet eine Vielzahl von Methoden und Funktionen, um auf die gespeicherten key-value-Paare zuzugreifen und diese zu verwalten. Hier sind einige der häufig verwendeten Methoden und Funktionen der `std::map`:

1. **insert()**: Fügt ein neues key-value-Paar in die Map ein.
   
   ```cpp
   map.insert(std::make_pair(key, value));
   ```

2. **emplace()**: Fügt ein neues key-value-Paar effizient in die Map ein.

   ```cpp
   map.emplace(key, value);
   ```

3. **erase()**: Löscht ein Element aus der Map anhand des Schlüssels.

   ```cpp
   map.erase(key);
   ```

4. **find()**: Sucht nach einem Element anhand des Schlüssels und gibt einen Iterator auf das gefundene Element zurück. Wenn das Element nicht gefunden wird, wird `map.end()` zurückgegeben.

   ```cpp
   auto it = map.find(key);
   if (it != map.end()) {
       // Element gefunden
   }
   ```

5. **count()**: Gibt die Anzahl der Elemente mit einem bestimmten Schlüssel in der Map zurück (entweder 0 oder 1, da Schlüssel eindeutig sind).

   ```cpp
   int num = map.count(key);
   ```

6. **size()**: Gibt die Anzahl der Elemente in der Map zurück.

   ```cpp
   int num = map.size();
   ```

7. **empty()**: Überprüft, ob die Map leer ist.

   ```cpp
   bool isEmpty = map.empty();
   ```

8. **clear()**: Löscht alle Elemente aus der Map und setzt sie auf eine leere Map zurück.

   ```cpp
   map.clear();
   ```

9. **begin() und end()**: Diese Methoden geben Iteratoren zurück, die auf das erste bzw. hinter das letzte Element der Map zeigen. Sie können verwendet werden, um durch die Map zu iterieren.

   ```cpp
   auto it = map.begin();
   auto end = map.end();
   while (it != end) {
       // Zugriff auf Elemente über 'it'
       ++it;
   }
   ```

10. **operator[]**: Überladener Operator, um auf Elemente der Map zuzugreifen oder neue Elemente einzufügen.

    ```cpp
    map[key] = value; // Element hinzufügen oder aktualisieren
    value = map[key]; // Wert abrufen
    ```

Diese Methoden decken die grundlegenden Operationen ab, die Sie mit einer `std::map` durchführen können. Beachten Sie, dass `std::map`-Iteratoren in aufsteigender Reihenfolge sortiert sind, da die Map nach den Schlüsseln sortiert ist. Sie können Iteratoren verwenden, um effizient durch die Elemente der Map zu navigieren.
