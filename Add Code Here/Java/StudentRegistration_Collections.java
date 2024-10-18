import java.util.*;

class Student implements Comparable<Student> {
    private String name;
    private String bitsId;
    private int age;
    private int numberOfCourses;
    private String emailId;
    private List<Double> marks;

    public Student(String name, String bitsId, int age, int numberOfCourses, String emailId, List<Double> marks) {
        this.name = name;
        this.bitsId = bitsId;
        this.age = age;
        this.numberOfCourses = numberOfCourses;
        this.emailId = emailId;
        this.marks = marks;
    }

    public String getName() {
        return name;
    }
    public String getBitsId() {
        return bitsId;
    }
    public int getAge() {
        return age;
    }
    public int getNumberOfCourses() {
        return numberOfCourses;
    }
    public String getEmailId() {
        return emailId;
    }
    public List<Double> getMarks() {
        return marks;
    }

    public void getStudentData(Scanner scanner) {
        System.out.print("Enter name: ");
        name = scanner.nextLine();
        System.out.print("Enter BITS ID: ");
        bitsId = scanner.nextLine();
        System.out.print("Enter age: ");
        age = scanner.nextInt();
        System.out.print("Enter number of courses: ");
        numberOfCourses = scanner.nextInt();
        scanner.nextLine();

        System.out.print("Enter email ID: ");
        emailId = scanner.nextLine();
        marks = new ArrayList<>();

        for (int i = 0; i < numberOfCourses; i++) {
            System.out.print("Enter marks for course " + (i + 1) + ": ");
            marks.add(scanner.nextDouble());
        }
        scanner.nextLine();
    }

    public void displayStudentData() {
        System.out.println("Name: " + name);
        System.out.println("BITS ID: " + bitsId);
        System.out.println("Age: " + age);
        System.out.println("Number of Courses: " + numberOfCourses);
        System.out.println("Email ID: " + emailId);
        System.out.println("---Marksheet---");
        for (int i = 0; i < marks.size(); i++) {
            System.out.println("Marks for Course " + (i + 1) + ": " + marks.get(i));
        }
        System.out.println("------------------------");
    }

    @Override
    public int compareTo(Student other) {
        return this.name.compareTo(other.name);
    }
}

class SortById implements Comparator<Student> {
    @Override
    public int compare(Student s1, Student s2) {
        return s1.getBitsId().compareTo(s2.getBitsId());
    }
}

class SortByAge implements Comparator<Student> {
    @Override
    public int compare(Student s1, Student s2) {
        return Integer.compare(s1.getAge(), s2.getAge());
    }
}

class SortByCourses implements Comparator<Student> {
    @Override
    public int compare(Student s1, Student s2) {
        return Integer.compare(s1.getNumberOfCourses(), s2.getNumberOfCourses());
    }
}

class SortByEmail implements Comparator<Student> {
    @Override
    public int compare(Student s1, Student s2) {
        return s1.getEmailId().compareTo(s2.getEmailId());
    }
}

public class StudentRegistration_Collections {
    public static boolean checkUniqueIds(List<Student> students) {
        Set<String> ids = new HashSet<>();
        for (Student student : students) {
            if (!ids.add(student.getBitsId())) {
                System.out.println("Duplicate BITS ID found: " + student.getBitsId());
                return false;
            }
        }
        return true;
    }

    public static void displayMenuAndSort(List<Student> students) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Choose an attribute to sort by:");
        System.out.println("1. Name");
        System.out.println("2. BITS ID");
        System.out.println("3. Age");
        System.out.println("4. Number of Courses");
        System.out.println("5. Email ID");
        int choice = scanner.nextInt();

        System.out.println("Student details after sorting:");
        switch (choice) {
            case 1:
                Collections.sort(students);
                break;
            case 2:
                Collections.sort(students, new SortById());
                break;
            case 3:
                Collections.sort(students, new SortByAge());
                break;
            case 4:
                Collections.sort(students, new SortByCourses());
                break;
            case 5:
                Collections.sort(students, new SortByEmail());
                break;
            default:
                System.out.println("Invalid choice. Sorting by name by default.");
                Collections.sort(students);
                break;
        }

        for (Student student : students) {
            student.displayStudentData();
        }
        scanner.close();
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        List<Student> students = new ArrayList<>();

        for (int i = 0; i < 5; i++) {
            System.out.println("Enter details for Student " + (i + 1) + ":");
            Student student = new Student("", "", 0, 0, "", new ArrayList<>());
            student.getStudentData(scanner);
            students.add(student);
        }

        if (!checkUniqueIds(students)) {
            System.out.println("Please correct the duplicate BITS IDs.");
            return;
        }

        System.out.println("Student details before sorting:");
        for (Student student : students) {
            student.displayStudentData();
        }

        displayMenuAndSort(students);
        scanner.close();
    }
}