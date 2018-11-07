# 10130 SuperSale  

The problem here tells there is a sale which is each person can only take one item for the "special price", and given a whole family consisting `x` members and each can takes at most `MW`, find the worth or the sum of the low-price that the whole family can buy with given price and weight.  

The solution is using Dynamic Programming. Suppose you can stand with maximum 30kg weight and an objact has a weight of 10kg, but you can take the object only once, so you still have 20kg space.
Calculate all the values up to 30 and save in array. If the weight of the oject is less than the weight of the next object, find the maximum weight, else `maxWeightLimit = i`, then `dp[i]=maxValue` you can get.  

Complexity: O(n^2) assuming the total test case and number of items are the same.

