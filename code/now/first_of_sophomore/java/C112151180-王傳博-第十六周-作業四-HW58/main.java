import java.util.Scanner;

class Student {
    private String name;
    private String gender;
    private int age;
    private String department;
    private int height;
    private int weight;

    public Student() {
        this(" ", " ", 0, " ", 0, 0);
    }

    public Student(String name, String gender, int age, String department, int height, int weight) {
        this.name = name;
        this.gender = gender;
        this.age = age;
        this.department = department;
        this.height = height;
        this.weight = weight;
    }

    public void showProfile() {
        System.out.printf("姓名:%s 性別:%s 年齡:%d 科系:%s 身高:%d 體重:%d\n", name, gender, age, department, height, weight);
    }

    // Getters Setters
    public void setName(String name) {
        this.name = name;
    }

    public void setGender(String gender) {
        this.gender = gender;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public void setDepartment(String department) {
        this.department = department;
    }

    public void setHeight(int height) {
        this.height = height;
    }

    public void setWeight(int weight) {
        this.weight = weight;
    }
}

public class main {
    // Use scanner.next() to capture user input
    // Convert the input string to lowercase and extract the first word
    // If a NumberFormatException occurs, keep looping and prompt for input again
    // Return the processed result
    public static Student inputData() {
        Scanner s = new Scanner(System.in);
        String studentData[] = null;
        boolean inputCorrectCheck = false;
        Student student = null;
        do {
            try {
                String input = s.nextLine();
                studentData = input.split(" ");
                student = new Student(studentData[0], studentData[1], Integer.parseInt(studentData[2]),
                        studentData[3], Integer.parseInt(studentData[4]), Integer.parseInt(studentData[5]));
                inputCorrectCheck = true;
            } catch (ArrayIndexOutOfBoundsException e) {
                System.err.println(e);
                System.out.print("請重新輸入:");
                inputCorrectCheck = false;
            } catch (NumberFormatException e) {
                System.err.println(e);
                System.out.print("請重新輸入:");
                inputCorrectCheck = false;
            }
        } while (inputCorrectCheck != true);
        return student;
    }

    /*
     * Set dataAmount to a default value of -1.
     * Continue looping as long as the number is less than zero.
     * Use text to capture the input content, then convert it to an integer and save
     * it in dataAmount.
     * If the input is not a valid number, throw a NumberFormatException.
     */
    public static int inputAmount() {
        Scanner s = new Scanner(System.in);
        String text;
        int dataAmount = -1;
        do {
            try {
                text = s.nextLine();
                dataAmount = Integer.parseInt(text);
            } catch (NumberFormatException e) {
                System.out.print("請重新輸入:");
            }
        } while (dataAmount < 0);
        return dataAmount;
    }

    /*
     * Use scanner.next() to capture user input
     * Convert the input string to lowercase and extract the first word
     * If a NumberFormatException occurs, continue to the next loop iteration
     * Return the processed result
     */
    public static Character inputOption() {
        Scanner s = new Scanner(System.in);
        Character result = null;
        do {
            try {
                result = s.next().toLowerCase().charAt(0);
            } catch (NumberFormatException e) {
                System.out.print("請重新輸入:");
            }
        } while (result == null);
        return result;
    }

    public static void main(String[] args) {
        int studentAmount = 0;
        Character option = null;

        System.out.print("請輸入成員數量:");
        // input Amount of student
        try {
            studentAmount = inputAmount();
        } catch (NumberFormatException e) {
            studentAmount = inputAmount();
        }
        System.out.println("格式為(姓名、性別、年齡、科系、身高、體重)");
        // input data of student
        Student student[] = new Student[studentAmount];
        for (int i = 0; i < studentAmount; i++) {
            System.out.printf("第%d位學生資料:", (i + 1));
            student[i] = inputData();
        }
        System.out.println("(A)依序顯示所有資料");
        System.out.println("(B)查詢單一筆資料");
        System.out.println("(C)離開程式");
        System.out.print("請輸入選項:");
        do {
            option = inputOption();
            switch (option) {
                case 'a':
                    for (var p : student) {
                        p.showProfile();
                        System.out.print("請輸入選項:");
                    }
                    break;
                case 'b':
                    try {
                        System.out.print("請輸入目標資料:");
                        student[inputAmount() - 1].showProfile();// show student["input"];
                        System.out.print("請輸入選項:");
                    } catch (ArrayIndexOutOfBoundsException e) {
                        System.out.println(e);
                        System.out.println("輸入超出目前儲存的資料筆數");
                        System.out.print("請輸入目標資料:");
                        student[inputAmount() - 1].showProfile();
                        System.out.print("請輸入選項:");
                    }
                    break;
                case 'c':
            }
        } while (option != 'c');

    }
}