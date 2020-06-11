# turingmachine-bubblesort
Bubble sort coded with just the elements of the turing machine.

As you know, a turing machine consists of a tape and a header. Being the tape infinite, we consider the tape's working area's limits with two variables: *lbound* and *rbound*, aditionally to the actual *header* variable which tells us where it is located.

On the tape are written symbols. In this case, we consider the following ones:
- from 0 to 9
- X as an indicator 
- A *blank* symbol that works as an auxiliar (we will se why we use it)

Its basic movents are:
- Left: moves the header to the left *n* number of times
- Right: moves the header to the right *n* number of times
- Left to: moves the header to the left until it reaches *K*
- Right to: moves the header to the right untill in reaches *K*
- Sigma: it takes a given symbol and writes or overwrites it on the actual position of the header

Aditionally we consider two more modules:
- Print: it prints the whole tape
- Read: it reads the symbol positioned 

This is how the *turing machine* was coded. If we want it to sort any given list of numbers, we should implement the *bubble sort* algorithm, at least for this case.

Therefore, this functions were implemented in the *bubble* files:
- 

![GitHub Logo](/home/miguel/Downloads/bubble.png)
Format: ![Alt Text](url)


### Sumarize

The class *bubble* inherits all the attributes and functions of its parent class *turing*. Both explaned previously.
