# 492B - Vanya and Lanterns

The problem given is to find the minimum possible radius to cover all of the street. In order to do this, we take the distance between to lanterns and divide it by 2 to get the radius.

I used `fixed` as float notation, also use `set.precision` to format floating-point values.

Complexity:  
Worst Case: O(nlogn)  
Average Case: θ(nlogn)  
Best Case: Ω(nlogn)  
The complexity is O(nlogn) because it use STL sort, which no matter what the input will get here.   

[submission](http://codeforces.com/contest/492/submission/43087123)  

# 148A - Insomnia cure  

The problem is asking us to find out eh number of the damaged dragon that the princess fought with. There are 4 kinds of case. First is got punched in the face, second is got his tail shut in the balcony door, and the next got his paws trampled, and finally she threatened the dragon to call her mom and he withdrew in panic. 

First we input the n dragons that will be damage, which is 4 inputs, `k`, `l`, `m`, `n`, and `d` which is the total dragons.   
If there is 1 in any of the first four input, then all dragons will be damaged. Because, any number can be divided by 1 with no remainder. 
Else, do check with loop all the dragons. If the number of the dragon is divisible by one of the four number given, then add the damaged dragon. Then we got the result of the damage dragons.  

Complexity:  
Worst Case: O(n)  
Average Case: θ(n)  
Best Case: Ω(1) because it is possible if one of the four input is 1.  

[submission](http://codeforces.com/contest/148/submission/43065486)  

# 469A - I Wanna Be the Guy   

The problem given is to find out whether Little X and Little Y can pass the game that they are playing, or not, if they cooperate each other.  
The solution to this problem is first declaring the array of their lavels and set it to 1, as if they are not yet passed. 
Then, I use bool to check the condition, and do loop to check if there are any unsolved level. If they passed the level, then the output is `I become the guy.` else `Oh, my keyboard!`  

Complexity:  
Worst Case: O(n)  
Average Case: θ(n)  
Best Case: Ω(n)  
The complexity is O(n) because it will enter the for loop for input and when it check the unsolved level.   

[submission](http://codeforces.com/contest/469/submission/43077201)
