"""
Inputs:
The First Input would be the N length of the box.
The Second Input would be the M Width of the Box.

Output:
Output the Box using the "X" character, while following the length and width specified.
"""
import time
n = int(input("Length: "))
m = int(input("Width: "))

for x in range(n):
    print('X' * m)

time.sleep(5)
