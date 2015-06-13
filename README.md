Seven Segment Display 
=============

Requirements 
-------
- Seven Segment Display 
- IC 4511

The Circuit (image- credits to [a link](https://www.robocore.net/)
-------
![](http://i.imgur.com/8Dz6Ydr.png)

How to use
-------
Include the library in your project
```cpp
#include "MiniBiblioteca.h"
```
After that, set the IC's pins that are connected to the Arduino
```cpp
DisplaySeven displayLed(3, 4, 5, 6); 
```

Commands
-------
##### You can display a number at a time:
```cpp
displayLed.numberZero(); //Standard delay is 1000
displayLed.numberZero(300); //You can modify the delay!
```
Other numbers:
- numberOne()
- numberTwo()
- numberThree()
- numberFour()
- numberFive()
- numberSix()
- numberSeven()
- numberEight()
- numberNine()

#####You can set a interval of numbers to display
```cpp
displayLed.chooseNumbers(2, 5); //The display will show the numbers 2 to 5, with a standard delay of 1000
displayLed.chooseNumbers(2, 5, 400); //You can modify the delay!

displayLed.chooseNumbers(8, 4); //The display will show the numbers 4 to 8 in descending order
```

#####You can show the numbers all at once! :D
```cpp
displayLed.allNumbers(); 
displayLed.allNumbers(400); //You can modify the delay!
```
