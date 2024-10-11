public class StringUtils {

    /**
     * Checks if a string is null or empty.
     * 
     * @param str The string to check.
     * @return true if the string is null or empty, false otherwise.
     */
    public static boolean isNullOrEmpty(String str) {
        return str == null || str.trim().isEmpty();
    }

    /**
     * Reverses a given string.
     * 
     * @param str The string to reverse.
     * @return The reversed string.
     */
    public static String reverse(String str) {
        if (str == null) {
            return null;
        }
        return new StringBuilder(str).reverse().toString();
    }

    /**
     * Converts a string to title case (first letter of each word capitalized).
     * 
     * @param str The string to convert.
     * @return The string in title case.
     */
    public static String toTitleCase(String str) {
        if (isNullOrEmpty(str)) {
            return str;
        }
        
        String[] words = str.split("\\s+");
        StringBuilder titleCase = new StringBuilder();
        
        for (String word : words) {
            if (word.length() > 1) {
                titleCase.append(Character.toUpperCase(word.charAt(0)))
                         .append(word.substring(1).toLowerCase());
            } else {
                titleCase.append(word.toUpperCase());
            }
            titleCase.append(" ");
        }
        
        return titleCase.toString().trim();
    }
}
