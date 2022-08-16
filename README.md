# HELP KRISH
(Time limit : 1s per test)  
Krish likes candies a lot. His friends Tokas and Paras give him a challenge wherein he can earn candies. All Krish has to do is carry out a few instructions given to him.   
As a part of his task, Krish has to walk on stepping stones. Each stepping stone has an energy cost(Ai) associated with it, which is the energy Krish spends if he steps on it. In a particular instruction, Krish has to go from stone a to stone b, where a and b will be given. Krish will start at a given stone.If Krish is already on a stone (the starting stone for an instruction), he doesn't  have to spend energy corresponding to that stone. For eg, if Krish wants to go from stone 0 to stone 2, he has to spend energy corresponding to stones 1 and 2.  
Krish can step on a stone only if he has enough energy left  
However, there are some magical stones involved. Such are the stones with prime numbers as there cost, and their magic results in Krish not spending any energy when he steps on them.  
For each instruction that Krish completes, Tokas and Paras give him one candy.Your objective is to find the maximum number of candies Krish will get.
## Input  
 
The first line contains 3 integers -  n, the number of stones(n<=10^5) , the total number of instructions t(<=10^5)  ,and Krish's initial energy k(k <= 10^6)  
The next line of each test case contains n integers(the costs of the stones).(0<= Ai <= 10^5)  
Next line contains (t + 1) integers. The first integer gives the starting point of Krish, and each subsequent integer contains the next stone he has to go to  

## Output  
You have to output a single integer denoting the maximum number of candies Krish can get.  
Note : the indexing of stones starts from 0

## Sample Input and Output   
# Input 
8 4 10  
5 9 1 2 1 4 1 2  
2 4 6 1 5 
# Output
2   

#Explanation  

From stone 2, Krish goes to stone 4 by spending 1 energy(2 is a prime, so no energy spent). Next , he spends 5 energy and goes to stone 6. Now, to come to stone 1, he needs 4 + 1 + 1 + 9 = 15 energy, which he doesn't have left. Hence, he can get only 2 candies.Here, no primes were there in the indices of our interest  

## EDITORIAL  
For this problem, it is clear that for each instruction, we need to sum up the numbers in the array from within the given indices. However, we can't use brute force, as the number of instructions is very large(O(n2) is not acceptable). Hence, we will use the data structure Segment tree, whose vertices will store the sum for certain indices range. Then, sum(i,j) = sum(i,k) + sum (k,j) where k lies between i and j. We will go through the vertices of the tree, and if the indices of the given vertex matches required indices, the value of that vertex will be the answer. Otherwise, we use the above fact if the required indices are part of two vertices.Each instruction can be carried out in O(logn) time, making the overall time complexity as O(nlogn) ( n for the number of instructions).











