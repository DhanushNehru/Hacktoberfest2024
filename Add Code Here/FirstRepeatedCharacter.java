/*Given a String, find the first repeated character in it using Stream functions?

Input :
String input = "Java Articles are Awesome";
Output = a*/



import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Optional;
import java.util.function.Function;
import java.util.stream.Collectors;

public class FirstRepeatedCharacter {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String input = "Java Articles are Awesome";
		//String input = "abc";

		Optional<Character> firstRepeatingChar = input.chars()  // IntStream of characters
                .mapToObj(c -> (char) c)  // Convert each int to Character
                .collect(Collectors.groupingBy(Function.identity(), LinkedHashMap::new, Collectors.counting()))  // Group by character and count occurrences, preserving order
                .entrySet()
                .stream()
                .filter(e -> e.getValue() > 1)  // Filter out non-repeating characters
                .map(Map.Entry::getKey)  // Get the character (key)
                .findFirst();  // Get the first repeating character

        firstRepeatingChar.ifPresentOrElse(
                ch -> System.out.println("First repeating character: " + ch),
                () -> System.out.println("No repeating characters found.")
        );

	}

}
