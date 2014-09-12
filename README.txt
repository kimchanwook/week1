Compling and running bassel.c 

1. Compile
gcc bassel.c -o bassel -lm

2. Run
./bassel 2 2
the bassel file read x as the first argument and n value as the second argument.
./bassel 2 2 
will compute values for bassel for x=2 and n=2.

3. Output

It will return outcomes like the following:

n:1 
When plugged into fn:  f1before:0.208073  fn:-0.454483  f1after:-0.208797 
Downward Recursion:    f1before:-0.245686  fn:-0.454483  f1after:-0.208797 
Upward Recursion:      f1before:0.208073  fn:-0.454483  f1after:-1.571522 

When n=1,

The values of the first line indicates the function values computed explicitly by plugging
in the values for x and n

The values of the second line are computed by using the recursion relation of spheircal
bessel functions (downward).

The values of the second line are computed by using the recursion relation of spheircal
bessel functions (downward).
