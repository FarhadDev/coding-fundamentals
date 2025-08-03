### C++ stl is divided into four parts

- Algorithms
- Containers
    - vector, queues, set, map etc.
- Functions
- Iterators
    - during learning containers


### Before moving onto containers we need to learn about pairs.

- Pairs is a part of utility libaray.

```c++
//let's say we want to store couple of integers
pair <int, int>p = {1, 3};//p={1,3}

//now, how do we access? since p is a pair
cout<<p.first << " " <<p.second;
```

### As of now, if we want to declare an integer data type or a srting data type or a character data type, we can always store a single variable.

### We also know if we want to store two variable we can us pair.

### But what if the question comes up and they say that, we want to store 3 variables, 4 variables. Can we do it?

- Yes we can.
- We can use the nested property of pair.

```c++
pair<int, pair<int, int>> p = {1, {1, 3}};
cout<<p.first <<" "<< p.second.second<< " "<< p.second.first
//the second guy of first pair can be of a pair data type
```

### As of now we declared string array, integer array, char array, but can we declare a pair array?

- Yes, we can.
- Pair can also be a data type.

```c++
pair<int, int>arr[] = {{1, 2}, {2, 5}, {5, 1}};
cout<<arr[1].seconds;
```