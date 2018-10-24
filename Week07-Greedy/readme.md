# 946A - Partition  

Given a sequence of `n` integers and we need to divide it into sequence `b` ang `c`. A sequence can be empty and we need to find the maximum possible value of `b-c`. Let all the positive elements are in sequence `b` and negative elements are in sequence `c`. For example, given `3, -2, 9, 0`, b has `3, 9, 0` and c has `-2`. the result `b-c` would be `12-(-2) = 14`, which is the maximum possible value.  
Worst case: O(n).

[submission](http://codeforces.com/contest/946/submission/44719374)  

# 978B - File Name  

The problem given is to find out the minimum number of characters to remove from the file name that contain `xxx` as a substring. To find the solution, check the 'x' in the file name, and count it, if the 'x' counted is more than 3, than the `minumum removed number` will increased. On the other hand, if the 'x' less then 3, then the output is `0`.  
Worst Case: O(n).  

[submission](http://codeforces.com/contest/978/submission/44721659)  

# 731B - Coupons and Discounts  

There is a sequence of how many teams that will be present on the `i`-th day. The problem is saying that Sereja wants to order pizza for each team of ICPC by using `Coupons` and `Discounts`. the Discount works if one buys two pizza at one day, while the Coupon allows to buy one pizza during two consecutive days. To solve this problem, go through the array and check whether the number of the element is even or odd. If it is even, then Sereja can use `Discounts` to buy the pizza. Meanwhile, if the elements is odd, Sereja will use the Coupon to order the pizza and he needs to order again for the day after (decrement the next element by 1).  
If Sereja use a coupon and no teams are attending the session the day after, then it is impossible. For the last element, check if it is odd or even, Sereja can use the Discount because no additional session, while if it is odd, Sereja cannot use the coupon nor the discount.  
Worst Case: O(n).

[submission](http://codeforces.com/contest/731/submission/44756013)
