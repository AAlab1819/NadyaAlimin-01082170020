# Find the Running Median  

In this problem we need to find the median of the inputed list. Before find the median we need to make the list sorted using heapsort. Example:

inputed list {7,2,9,5}

First input is {7}, the output will be 7 because there is no other number in the list.  
Second input is {2,9}, the output will be 5.5 because (9+2)/2= 5.5.  
Third input is  {9,2,7} --> {2,7,9}, the output will be 7.  
Fourth input is {7,2,9,5} --> {2,5,7,9}, the output will be 3.5 because (2+5)/2=3.5.  
Complexity : O(nlogn)  

# Roy and Trending Topics  

In this problem Roy is trying to develop a widget with some topics ID in it, each id has z-score, z score can increase accroding to this following rules:  

1. When a topic is mentioned in a 'Post', its z-score is increased by 50.  
2. A 'Like' on such a Post, increases the z-score by 5.  
3. A 'Comment' increases z-score by 10.  
4. A 'Share' causes an increment of 20.  

In this problem we need to input `the topic id`, `z` for `score`, `p` for `post`, `l` for `likes`, `c` for `comments`, and `s` for `shares` . We need to output the `top 5` topics each in a new line, and each line should contain two space separated integeers, Topic ID and new z score of the topic.

Complexity: O(nlogn)
