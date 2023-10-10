### general
смотреть код в lexer_src!!

### requirments
    graphviz, lolcat, lcov

### Usage
##### Init
```
mkdir build bin
make mode=lexer | lolcat
```

##### Launching tests (should be 1 on each)
```
./bin/main      | lolcat
```

##### Getting code coverage
```
./bin/main      | lolcat
lcov -t "fizzbuzz" -o fizzbuzz.info -c -d .  | lolcat
genhtml -o report fizzbuzz.info | lolcat

# потом открыть в браузере report/index.html (в lexer_src/Structs) может быть мало процентов,
# но так как, они не относятся напрямую к коду, можно не обращать внимания
```
