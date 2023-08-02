//BRUTE FORCE APPROACH
Just keep traversing the array and find numbers either divible by 3, 5, 7 and then adding the sum of all those factors
for(i=1;i<=n;i++)if(i%3||i%5||i%7==0)sum+=i;
return sum;
TIME-O(N)
SPACE-O(1)
//BETTER APPROACH
SUM OF ALL THE FACTORS OF A GIVEN NUMBER UPTO N IS GIVEN BY
N=10, NUMBER=3
FACTORS POSSIBLE-3,6,9 TILL 10
SO SUM OF ALL factors of 3 =18(3+6+9)
USING FORMULA: number(k)*(countof numbers in AP*countof numbers in AP+1)/2
=3+6+9=3(1+2+3)=3*(3*4)/2=18
Hence results match
Hence use the same concept of finding sum of all factors on k upto n,
sum of all factors of k upto n=(sum of all factors of 3)+(sum of all factors of 5)+(sum of all factors of 7)-(sum of all factors of 3*5)-(sum of all factors of 5*7)-(sum of all factors of 7*3)
TIME-O(1)
SPACE-O(1)