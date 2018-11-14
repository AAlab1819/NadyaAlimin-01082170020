# 20C - Dijkstra?

The problem is to find the shortest path (the best way) from vertices 1 to N. To solve this problem is by using Dijkstra Algorithm as the problem name itself. The shortest path is determined by the least amount of price from vertex 1 to N. <br>

Here is the example: <br>
```java
5 6
1 2 2
2 5 5
2 3 4
1 4 1
4 3 3
3 5 1

Source  Destination   Price
  1  ->      2         (2)
  2  ->      5         (5) 
  2  ->      3         (4)
  1  ->      4         (1)
  4  ->      3         (3)
  3  ->      5         (1)
```

We could assume that the shortest path is 1 -> 2 -> 5 which will cost 2+5=7. It is correct that we want to find the shortest path, but the problem asks for the least amount of price. So, the answer should be 1 -> 4 -> 3 -> 5 that cost 5 <- 1+3+1.

Complexity: O(nlogn)  

[submission](http://codeforces.com/contest/20/submission/45711351)  

# 601A - The Two Routes

Complexity: O(n^2)

[submission](https://codeforces.com/contest/601/submission/45630831)
