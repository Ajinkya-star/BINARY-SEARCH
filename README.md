# SEARCHING
## AIM: To search the integer entered by user in a user defined array using binary search.
## ALGORITHM:
1) START
2) In main file, declare an array of blank size a[], variables n, f=0,r,key,m.
3) Take input of array size and array elements from user and store it in 'n' and 'a[n]' respectively(r=n-1).
4) Print the user defined array and then call the function 'binarysearch' from function file using parameters a[n],f,r,key.
5) In function file, declare function 'binarysearch'.
 (i) mid=(f+r)/2
 (ii) while f<=r :
             check if(key==A[mid])
                element found at mid+1
              else if(key<A{mid))
               binarysearch(A,F,mid-1,key)
               else
               binarysearch(A,mid+1,R,Key)
 6) Print A[].
 7) Stop.
 
 ## description:
 BINARY SEARCH: The array is divided in two halves and each half is compared with element to be searched and the half in which it is found is again considered as new array and process of dividing in half and comparing goes on until the element is at middle of the array. Thus the position printed on screen is middle+1.
