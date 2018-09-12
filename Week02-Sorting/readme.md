# 291A - Spyke Talks  

Sorting method : Shell Sort

The problem is to help Polycarpus to find out which of his secretaries who are talking via the Spyke and which are not by analyze the datas and find out the number of pairs of secretaries that are talking. If there are more than two secretaries using a single ID, the output will be `-1` and `0` to said secretary that are not using Spyke. 

To solve this problem, I am using Shell Sort. First, sort the array, then check if the next secretary is using the same ID or not. In this case, you have to check the next-next secretary to check the situation. If the array has 2 same number, means there are a pair of secretary who are using Spyke to talk.

[submission](http://codeforces.com/contest/291/submission/42802799)

# 230A - Dragons  

Sorting method : Gnome Sort

The problem is to help Kirito whether he can move on to the next level or no by defeat the dragons in the game. To solve this problem, sort the dragons based on their strength, then kill all dragons starting from the lowest strength in order to keep gaining bonus strength. 
In this code, I use Gnome Sort to sort their strength, we check it one by one and add the bonus point if the character can defeat the dragon. Then use loop `for` to check whether Kirito's strength is greater than the dragon's or not, if Kirito's strength is greater, then the output is `YES` and he move on the next level and gets a bonus strength. Otherwise, the output will be `NO` and he loses the duel and dies.  

[submission](http://codeforces.com/contest/768/submission/42802346)

# 768A - Oath of The Night's Watch

Sorting method : Heap Sort

The problem here is to find how many stewards that Jon Snow need to feed. He will feed a steward if there is exactly someone WEAKER AND STRONGER than the steward strength itself. 
The first line input the number of stewards with Jon Snow. Then, input the second line with the values assigned to the stewards. After that, we sort the value assigned. The solution here is to check the number of stewards which Jon will feed based on their strength, which is as mentioned. If it is not the smallest not the biggest strength, then the steward strength must be in between. The number of counter will be increased one by one if the previous index number is smaller than the current index number and if the next is greater than the current index number.   

[submission](http://codeforces.com/contest/768/submission/42802346)

