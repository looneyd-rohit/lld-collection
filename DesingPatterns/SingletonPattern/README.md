# Instructions

### The static and private can cause problems while compiling, since static was not

### initialized while creation, so use a different `Singleton.cpp` and initilize it

### like shown below.

```
#include "Singleton.h"
Singleton *Singleton::instance = nullptr;
```

### Now compile them individually

```
g++ -c main.cpp -o main.o
g++ -c Singleton.cpp -o Singleton.o

```

### Link them all together

```
g++ main.o Singleton.o -o output
```

### Run them

```
./output
```
