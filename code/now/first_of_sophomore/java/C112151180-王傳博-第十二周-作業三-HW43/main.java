import shopaccount.*;
import java.util.*;

public class main {
    public static void main(String[] args) {
        var s = new Scanner(System.in);
        String account, password1, password2;
        System.out.print("請輸入帳號");
        account = s.next();
        System.out.print("請輸入密碼");
        password1 = s.next();
        // 如果密碼不相同則輸入到一樣為止
        do {
            System.out.print("請再輸入一次密碼");
            password2 = s.next();
        } while (!password1.equals(password2));
        // 帳號
        var account1 = new ShopAccount(account, password1);
        account1.showProfile();

    }

}
