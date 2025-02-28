**Q1)** Searching

Implement a binary search to find a value in a sorted integer array of 10k values 0 to 9999

The given code will print every iteration of your algorithm.  
How does the number of iterations compare with LOG<sub>2</sub>(10k)?

Find a value of 1420 to match the expected output:
<pre>
Enter the desired value to be searched for  
iteration start middle end  
       1     0  4999  9999  
       2     0  2499  4998  
       3     0  1249  2498  
       4  1250  1874  2498  
       5  1250  1561  1873  
       6  1250  1405  1560  
       7  1406  1483  1560  
       8  1406  1444  1482  
       9  1406  1424  1443  
      10  1406  1414  1423  
      11  1415  1419  1423  
      12  1420  1421  1423  
      13  1420  1420  1420  

</pre>