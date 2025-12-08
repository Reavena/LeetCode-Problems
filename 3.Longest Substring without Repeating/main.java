class Solution {
    public int lengthOfLongestSubstring(String s) {

    int n = s.length();
    int maxLength = 0;

        //List<String> substrings = new ArrayList<>();

        for(int i=0; i < n; i++)
        {
            // Early termination: remaining string can't be longer than maxLength
            if (n - i <= maxLength) break;
            for(int j=i; j<n; j++)
            {           
                String substr = s.substring(i, j+1);
                int len = substr.length();
                if ( maxLength< len  && (len == substr.chars().distinct().count()))
                    maxLength = len;
            }
    
        }


    return maxLength;

    }

}


//^^^ Brute force, doesnt pass time

class Solution { //window sliding method!
    public int lengthOfLongestSubstring(String s) {

        int maxLength = 0;
        int left = 0;
        HashSet<Character> window = new HashSet();

        for(int right = 0; right < s.length(); right++)
        {
            char c = s.charAt(right);
            while (window.contains(c)) //move window if it already has the right element
            {
                window.remove(s.charAt(left));
                left++;
            }
            window.add(c);
            maxLength = Math.max(maxLength, right-left+1);
        }
        return maxLength;    
    }
}