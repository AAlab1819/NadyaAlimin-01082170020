# 912A - Tricky Alchemy

The problem given is to create a progam  to estimate the minimum number of crystals that Grisha should acquire to make yellow, blue, and green balls. There are two types of crystals that Grisha needs, yellow and blue, which is can be combined to make 3 types of balls.  

First input is amount of yellow & blue crystals Grisha's disposal.  
The next input is the respective amounts of yellow, green and blue balls to be obtained.  

In order to count how many crystals does Grisha need, I use these calculations:   
1. `needYwCrys = (2*ywBall)+grBall-ywCrys;` to get the number of yellow crystal that needed.
2. `needBlCrys = (3*blBall)+grBall-blCrys;` to get the number of blue crystal that needed.  

If the result of the yellow/blue is negative ( < 0 ), then the number of crystal needed is equal to zero.  

We calculated the required crystal needed separatelly and sum to get the number of crystals that Grisha should acquire.  

[submission](http://codeforces.com/contest/912/submission/42490294)

# 854A - Fractions

In this problem, we need to restore the original fraction that Petya has made, the sum of the numerator and the denominator equal to the input integer instead of the expected decimal notation, which is the fraction must be irreducible and the numerator should be smaller than the denominator.  

First, we do input the integer sum of numerator and the denominator of the fraction.  

Then, we need to determine the highest possible denominator and numerator. In order to do so, we must first divide the sum into half as the value of the numerator.  

After that, using the loop `while` to check the value of the GCD numerator and denominator, which is to find the largest positive integer that divides the number without a remainder, the value has to be larger than 1, so that the number of the numerator will lessen until the value of the gcd is equal to 1.  

Finally, the output will be printed the number of the numerator and the denominator.

[submission](http://codeforces.com/contest/854/submission/42485461)

# 988A - Diverse Team

In this problemset, we have to form a team consisting of k students such that the ratings of all team members are distinct.
To solve this problem, I use vector to save the number of array.
First, I use loop `for` to input the rate of the students, to check how many distinct ratings are there and store the first rate into an array. It is stated that if `scores.size()<studentSize` , then the output is `NO`. Then, the code will check whether the size of the score is less then the amount of the member in the team or not. If it is greater or equal to studentSize, then the answer is `YES`. 


[submission](http://codeforces.com/contest/988/submission/42500220)
