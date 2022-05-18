# Matrix Flatten
Flat 3D matrix to a 1D victor.


## What is that?
We have a 3D array of size (n x m x p) which indexed by [i, j, k], and we need to convert it to a 1D array of size (q) and indexed by [y].
![image](https://user-images.githubusercontent.com/47665908/169068019-b235e941-7278-4a7f-9da8-ca6f275b3ed8.png)


## The Algorithm behind that.
If we get a relation to convert an index with 3 numbers to an index with 1 number. Then, we succeed.

**Example:**

Assume our array is `arr[3][2][3]`, so:
```
i  j  k  -->  y
---------------
0  0  0  -->  0
0  0  1  -->  1
0  0  2  -->  2
0  1  0  -->  3
0  1  1  -->  4
0  1  2  -->  5
1  0  0  -->  6
...
```
> **Note**
The sum of the `i,j,k` give us the `y` value. 

First, let's name our indexed variables as what they refer to in our matrix.
``` 
n -> height
m -> width
p -> depth
```
So our equation will be:
```
y = (i * width * depth) + (j * depth) + k
```
