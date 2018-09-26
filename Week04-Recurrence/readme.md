# 598D - Igor in The Museum  

The problem is to find out the maximum number of pictures that Igor can see in the museum. To solve this problem, we shall use algorithm to search where Igor can walk to and then add the picture that he can view. Then we store for that certain group the answer will always be the same. After we store it, we can directly access the answer depending on its x and y starting place.  

The complexity for this problm is O(nm)  

[submission](http://codeforces.com/contest/598/submission/43460218)  

# 268B - Buttons  

The problem given is to count how many times Manato has to push a button until the lock is unlocked in the worst-case scenario.  
The only input will be the number of buttons to open. Meanwhile, the output will be the number he needs to push a button. 
The solution here is to loop it and at last add with the correct key. The function inside the for loop will be `sum = sum + 1 + ((numberOfButtons-i) * i).` I do plus 1 in the pattern because the array, which is the `int i`, starts from 0.  

The complexity for this problem is O(n)  

[submission](http://codeforces.com/contest/268/submission/43455592)
