# 433B - Kuriyama Mirai's Stones  

Given a list of stones, each with their own price. The questions possible is type one and two: type one will be sum of stone's cost from l to r and type two will be sum of stone's cost from l to r in an non-decreasing order.  
The solution given is to use cumulative array because if we count the sum in each question over and over the time limit will exceed. So, as what have been stated before, we store the cost in two cumulative array: for the normal one and sorted array. Then to get the sum from l to r, it will be array[r-1] - array[l-2]. Except if l=1, Then we just need to take array[r] cause it is the sum from 1 to r.  

Complexity Worst Case: O(nlogn)  

[submission](http://codeforces.com/contest/433/submission/45120368)  

# 931C - Party Lemonade  


