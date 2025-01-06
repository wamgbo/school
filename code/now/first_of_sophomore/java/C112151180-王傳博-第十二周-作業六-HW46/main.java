import java.util.*;
import java.time.*;
import Shop.User.*;
import Shop.Admin.*;

public class main {
    public static void main(String[] args) {
        // 帳號
        var time = LocalDate.now();// 取得目前時間
        var user1 = new User_account("user1", "password1", "jason", time.toString(), "user1@gmainl");
        var user2 = new User_account("user2", "password2", "tim", time.toString(), "user2@kuas.edu.tw");
        var admin1 = new Admin_account("admin", "adminpassword", "mary", time.toString(), "admin@gmail.com",1);
        // 輸出
        user1.showProfile();
        user2.showProfile();
        admin1.showProfile();
    }
}
