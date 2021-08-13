/*
The first idea that comes to mind is to convert the number into string, and check if the string is a palindrome, but this would require extra non-constant space for creating the string which is not allowed by the problem description.

Second idea would be reverting the number itself, and then compare the number with original number, if they are the same, then the number is a palindrome. However, if the reversed number is larger than \text{int.MAX}int.MAX, we will hit integer overflow problem.

Following the thoughts based on the second idea, to avoid the overflow issue of the reverted number, what if we only revert half of the \text{int}int number? After all, the reverse of the last half of the palindrome should be the same as the first half of the number, if the number is a palindrome.

For example, if the input is 1221, if we can revert the last part of the number "1221" from "21" to "12", and compare it with the first half of the number "12", since 12 is the same as 12, we know that the number is a palindrome.

First of all we should take care of some edge cases. All negative numbers are not palindrome, for example: -123 is not a palindrome since the '-' does not equal to '3'. So we can return false for all negative numbers.

Now let's think about how to revert the last half of the number. For number 1221, if we do 1221 % 10, we get the last digit 1, to get the second to the last digit, we need to remove the last digit from 1221, we could do so by dividing it by 10, 1221 / 10 = 122. Then we can get the last digit again by doing a modulus by 10, 122 % 10 = 2, and if we multiply the last digit by 10 and add the second last digit, 1 * 10 + 2 = 12, it gives us the reverted number we want. Continuing this process would give us the reverted number with more digits.

Now the question is, how do we know that we've reached the half of the number?

Since we divided the number by 10, and multiplied the reversed number by 10, when the original number is less than the reversed number, it means we've processed half of the number digits.




*/


class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || (x%10 == 0 && x != 0))
            return false;
        
        int rev = 0;
        while(x > rev)
        {
            rev = rev * 10 + x%10;
            x = x/10;
        }
        // When the length is an odd number, we can get rid of the middle digit by revertedNumber/10
        // For example when the input is 12321, at the end of the while loop we get x = 12, revertedNumber = 123,
        // since the middle digit doesn't matter in palidrome(it will always equal to itself), we can simply get rid of it.
        if(x == rev || x == rev/10)
            return true;
        
        return 0;
        
    }
};

class Solution {
public:
    bool isPalindrome(int x) {
       
        string s = to_string(x);
        int n = s.size();
        for(int i=0; i<n; i++)
        {
            if(s[i] != s[n-1-i])
                return false;
        }
        return true;
        
        
        vector<int> v;
        vector<int> v1;
        
        int n = v.size();
        if(x<0)
            return false;
        while(x>0)
        {
            v.push_back(x%10);
            x = x/10;
        }
        
        v1 = v;
        reverse(v.begin(), v.end());
        if(v == v1)
            return true;
        return false;
    
        
    }
};