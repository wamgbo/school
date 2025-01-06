import java.time.LocalDate;
import java.time.format.*;;

public class Drink {
    private String name; // 名稱
    private int calorie; // 熱量
    private String date; // 有效日期

    // 分別將設定，名稱、熱量、有效日期
    Drink() {
        this(" ", 0, " ");
    }

    // constructor
    Drink(String name, int calorie, String date) {
        setName(name);
        setCalorie(calorie);
        setDate(date);
    }

    // 顯示所有資訊
    public void showProfile() {
        System.out.println("名稱:" + getName() + "\n熱量:" + getCalorie() + "\n日期:" + getDate());
    }

    // 是否過期
    public boolean showExpiry() {
        var today = LocalDate.now();
        // 時間格式設定為"yyyy/MM/dd"
        var formatter = DateTimeFormatter.ofPattern("yyyy-MM-dd");
        // LocalDate，設定為this.date，並套用格式
        var date = LocalDate.parse(this.date, formatter);
        // 如果保存期限是在今天之前就回傳"true"
        if (date.isBefore(today)) {
            return true;
        }
        return false;
    }

    // setters&&getters
    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getCalorie() {
        return calorie;
    }

    public void setCalorie(int calorie) {
        this.calorie = calorie;
    }

    public String getDate() {
        return date;
    }

    public void setDate(String date) {
        this.date = date;
    }

}
