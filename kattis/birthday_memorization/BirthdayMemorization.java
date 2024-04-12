import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Scanner;

/**
 * Krarkl wants to learn the birthdays of all his friends,
 * so he knows whom to congratulate each day. Unfortunately collisions sometimes
 * arise,
 * meaning several friends may have the same birthday. This may confuse Krarkl,
 * so he decided to only remember the birthday of the friend he likes
 * the most in case of a collision.
 * Given a list of birthdays for each of his friends and how much Krarkl likes
 * each friend,
 * print what friends Krarkl will remember the birthday for.
 */
public class BirthdayMemorization {
  static class Student {
    public String name;
    public int score;

    public Student(String name, int score) {
      this.name = name;
      this.score = score;
    }
  }

  /**
   * Main Program.
   */
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    int friends = scanner.nextInt();

    Map dates = new HashMap<String, Student>();

    for (int i = 0; i < friends; i++) {
      String student = scanner.next();
      int score = scanner.nextInt();
      String date = scanner.next();
      if (!dates.containsKey(date)) {
        // date doesn't exist, just add the user
        dates.put(date, new Student(student, score));
      }

      // Assume we found an entry on the map, check the score before overwriting
      Student st = (Student) dates.get(date);
      if (score > st.score) {
        dates.put(date, new Student(student, score));
      }
    }

    List<String> students = new ArrayList<String>();
    dates.forEach((k, v) -> students.add(((Student) v).name));
    students.sort(String::compareTo);

    System.out.println(students.size());
    for (String name : students) {
      System.out.println(name);
    }

    scanner.close();
  }
}
