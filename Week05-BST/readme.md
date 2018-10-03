# 115A - Party  

The problem given is to find the minimum number of groups that must be formed, which is there will not exist an employee who is the superior of his/her own immediate manager. Every employee must belong to exactly one group. Furthermore, within any single group, there must not be two employees A and B such that A is the superior of B.  
The input here will be the number of employees, and continued by who is the manager of the i-th employee. If the employee did not have a manager then it will be "-1".  
The solution here is to check how depth or how long is the connection to the last superior by create a tree/trees from the heirarchy of the employees, then check the "depth" of the heirarchy.

Worse time complexity: O(nlogn)

[submission](http://codeforces.com/contest/115/submission/43731059)  

# 4C - Registration System  

The problem is the same as we are saving our Ms. Word file without an exact name, the first file will be `Doc` then next will be `Doc1` amnd so on. There are several names of users who want to register.  
The system responses to the requests: OK in case of successful registration, or a prompt with a new name, if the requested name is already taken.  
To solve this problem, I use `map`, which is an implementation of BST in C++. First, input the number of the requests, then use `for` loop to input the names, then I use `if else` tp check whether the name is already registered ot haven't.  

Worse time complexity: O(nlogn)

[submission](http://codeforces.com/contest/4/submission/43732378)  

# 913B - Christmas Spruce  

This problem is to find out whether a given rooted tree is a spruce or not. If a vertex has children, make sure it has at least 3 children that are leaves (have no children). If the condition is not fulfilled, then the tree is not a spruce.  
My way to solve this solution is by using `struct` and use `memset` function.  
Go to each index from 1 to `n`, and then check if the index has children or not. If yes, then count all the children, and if they have, count for each child. If the leaves have a total of less than 3, then the tree is not a spruce.  

Worse time complexity: O(nlogn)

[submission](http://codeforces.com/contest/913/submission/43736088)
