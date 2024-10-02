import java.util.Scanner;

public class VigenereCipher{
    
    //Encryption Method
    public static String encryption(String text , String keyword){
        keyword = keyword.toUpperCase();
        int keyWordIndex = 0;
        StringBuilder result = new StringBuilder();

        for(int i = 0 ; i < text.length() ; i++){
            char ch = text.charAt(i);
            if(Character.isLetter(ch)){
                char baseValue = 'a';
                if(Character.isUpperCase(text.charAt(i))){
                    baseValue = 'A';
                }
                //Algo
                int shiftValue = keyword.charAt(keyWordIndex % keyword.length()) - 'A';  
                ch = (char) ((text.charAt(i) - baseValue + shiftValue) % 26 + baseValue);
                keyWordIndex++;
            }
            result.append(ch);
        }
        return result.toString();
    }


    //Decryption Method
    public static String decryption(String text , String keyword){
        keyword = keyword.toUpperCase();
        int keyWordIndex = 0;
        StringBuilder result = new StringBuilder();

        for(int i = 0 ; i < text.length() ; i++){
            char ch = text.charAt(i);
            if(Character.isLetter(ch)){
                char baseValue = 'a';
                if(Character.isUpperCase(text.charAt(i))){
                    baseValue = 'A';
                }
                //Algo
                int shiftValue = keyword.charAt(keyWordIndex % keyword.length()) - 'A';  
                ch = (char) ((text.charAt(i) - baseValue - shiftValue + 26) % 26 + baseValue); 
                keyWordIndex++;
            }
            result.append(ch);
        }
        return result.toString();
    }


    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter text : ");
        String textToEncrypt = scanner.nextLine();
        System.out.print("Enter key [No spaces Allowed] : ");
        String encryptionKey = scanner.nextLine();
        encryptionKey = encryptionKey.replaceAll("\\s+" , ""); //Replace spaces if any are given 
        scanner.close();

        String encryptedText = VigenereCipher.encryption(textToEncrypt , encryptionKey);
        String decryptedText = VigenereCipher.decryption(encryptedText , encryptionKey);
        String wrongKeyText = VigenereCipher.decryption(encryptedText , "xyz");

        System.out.println("Encrypted Text : " + encryptedText);
        System.out.println("Decrypted Text : " + decryptedText);
        System.out.println("Decrypted Text with the wrong Encryption Key : " + wrongKeyText);
    }

}