package Comparable;

import java.util.ArrayList;
import java.util.Collections;

class student implements Comparable<student> {
    private String name;
    private int age;

    public student(String name, int age) {
        this.name = name;
        this.age = age;
    }

    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }

    @Override
    public int compareTo(student other) {
        return Integer.compare(this.age, other.age);
    }

    @Override
    public String toString() {
        return "Name: " + name + ", Age: " + age;
    }
}

public class Main {
    public static void main(String[] args) {
        ArrayList<student> students = new ArrayList<>();
        students.add(new student("John", 20));
        students.add(new student("Alice", 21));
        students.add(new student("Bob", 19));
        students.add(new student("Charlie", 20));

        System.out.println("Before sorting:");
        for (student s : students) {
            System.out.println(s);
        }

        Collections.sort(students);

        System.out.println("After sorting:");
        for (student s : students) {
            System.out.println(s);
        }
    }
}