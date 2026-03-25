/*
1.14 Armstrong Number
Concept

153 → 1³ + 5³ + 3³ = 153

Algorithm
Start
Input n
temp = n
sum = 0
While n > 0:
digit = n % 10
sum += digit³
n = n / 10
If sum == temp → Armstrong
Else → Not Armstrong
Display result
Stop
*/
