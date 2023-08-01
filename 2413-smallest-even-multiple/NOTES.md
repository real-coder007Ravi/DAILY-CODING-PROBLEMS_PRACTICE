// Brute Force Approach
DRY RUN BEFORE WRITING CODE
CONSIDER N=3
SO ANS=6    ??
IF N=8 SO ANS=8 ??
BECOZ IN CASE OF EVEN NO WE KNOW IT WILL BE DIVISIBLE BY 2 AND CAN BE DIVISIBLE BY NUMBER N ALSO AS EACH NO IS MULTIPLE OF ITSELF AND in CASE OF ODD NUMBER THAT NO CAN'T BE DIVISIBLE BY 2, but it will be divisible by itself, but we know it should satisfy both conditions which can only be satisfied in case of even numbers hence ans is that even number and in case of odd ans will be 2*number
//APPROACH-2  n*(n%2+1);
//APPROACH-3 if n is even, return n << 0
if n is odd, return n << 1 and  & OPERATION OF EVEN NUMBER WITH 1(N&1) GIVES 0 AND
ODD NUMBER WITH 1 WILL GIVE 1.
So return (n<<(n&1));
​
​
​