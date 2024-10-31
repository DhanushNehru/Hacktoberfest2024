class Solution(object):
    def toLowerCase(self, s):
        result=""
        for char in s:
            value=ord(char)
            if value>=65 and value<=90:
                char=chr(value+32)
            result=result+char
        return result
        """
        :type s: str
        :rtype: str
        """