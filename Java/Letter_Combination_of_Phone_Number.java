class PhoneNumber {
       public List<String> letterCombinations(String digits) {
        String[] arr={"","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
                if(digits.length()==0) 
                {
                    return List.of();
                }
                else return helper(digits,0,arr,"");
    }

    public List<String> helper(String digits,int i,String[] arr,String result)
    {
        List<String> res=new ArrayList<>();
        if(i==digits.length()) return List.of(result);
        int k=digits.charAt(i)-49;
        for(int j=0;j<arr[k].length();j++)
        {
            res.addAll(helper(digits,i+1,arr,result+arr[k].charAt(j)));
        }
        return res;
    }
}
