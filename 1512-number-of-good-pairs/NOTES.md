// DRY RUN BEFORE THE INTERVIEWER
ARRAY-  [1,2,3,1,1,3]
Here we will start traversing each element of the array and pick one elment and start traversing the array again to find the next element which is exactly similiar to the first element and as soon as we find two such numbers starting from the start till end we just need to increase the count of such pairs and in th end we just return the count. This will take approximately o(n^2) for reaching the solution.
//APPROACH 2- O(N)
//Here using 2nd approach Using Hashmaps here maintaining Key Value Pairs concept
consider store the number and its count of occurence in the Hashmap and then retrieve it using the same concept of maps
Keep traversing the map and adding the value of element of map and simulataneously incrementing the count of numbers.
1->3
2->1
3->2