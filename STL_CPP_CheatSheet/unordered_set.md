unordered_set<T> us;

us.insert(x) -> void
Inserts the value of x into the set

us.find(x) -> unordered_set<T>::iterator
Returns and iterator of the value to find. If doesn't exist, then returns us.end()

us.contains(x) -> boolean
Checks whether a value exists in the set or not