package Shop;

import java.util.ArrayList;
import java.util.Scanner;

public class ShopAccount {
    static private ArrayList<String> accountName = new ArrayList<>();
    static private int KeyID = 0;// static讓數字可以保留
    final private int UID;// UID設定為final
    final private String account;// 帳號設定為final
    private String password;// 密碼

    // Constructor
    public ShopAccount() {
        this.account = setAccount();
        this.password = setPassword();
        this.UID = KeyID;
        KeyID++;
    }

    // 展示UID,帳號,密碼
    public void showProfile() {
        System.out.println("UID:" + getUID() + "\n帳號:" + getAccount() + "\n密碼:" + getPassword());
    }

    // getters&&setters

    // 輸入不重複的帳戶名
    static public String setAccount() {//設定為static在程式開始載入
        var s = new Scanner(System.in);
        String account;// 站存的帳戶名
        boolean repeat = false;// 判斷是否重新輸入
        System.out.print("請輸入帳號:");
        // 帳戶名已存在則重新輸入
        do {
            if (repeat == true) {// 第一次skip
                System.out.print("帳戶名已存在請重新輸入:");
            }
            account = s.next();// 輸入
            repeat = true;// 下次迴圈就會輸出提示
        } while (accountName.contains(account));// 當使用者名稱存在
        accountName.add(account);// 新增至陣列
        return account;
    }

    // 輸入不重複的密碼,設定兩個變數，輸入如果不同則重新輸入
    static public String setPassword() {//設定為static在程式開始載入
        var s = new Scanner(System.in);
        System.out.print("請輸入密碼:");
        String password1 = s.next();// 輸入第一次
        String password2;// 輸入第二次
        // 如果密碼不相同則輸入到一樣為止
        do {
            System.out.print("請再輸入一次密碼:");
            password2 = s.next();
        } while (!password1.equals(password2));
        return password1;
    }

    public static int getKeyID() {
        return KeyID;
    }

    public static void setKeyID(int keyID) {
        KeyID = keyID;
    }

    public int getUID() {
        return UID;
    }

    public String getAccount() {
        return account;
    }

    public String getPassword() {
        return password;
    }

}