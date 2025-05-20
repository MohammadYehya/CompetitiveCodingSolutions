# Bruteforce Solution
Time Complexity     = O(n<sup>2</sup>)\
Space Complexity    = O(1)

Make a double for loop through the array to check each element to find a pair of elements (x,y) such that `x+y=value`.

# Dictionary Solution
Time Complexity     = O(n)\
Space Complexity    = O(n)

Loop through the arrat once, and check each element whether `value-x` exists in the hashmap. If it does return the pair of indices.