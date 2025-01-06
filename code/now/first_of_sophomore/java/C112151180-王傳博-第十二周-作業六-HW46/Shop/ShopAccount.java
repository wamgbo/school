package Shop;

import java.util.ArrayList;

public class ShopAccount {
    static private ArrayList<String> accountName = new ArrayList<>();
    static private int KeyID = 0;// static讓數字可以保留
    final private int UID;// UID設定為final
    final private String account;// 帳號設定為final
    private String password;// 密碼

    // Nullary constructor
    public ShopAccount() {
        this(" ", " ");
    }

    // Constructor
    public ShopAccount(String account, String password) {
        this.account = setAccount(account);
        this.password = setPassword(password);
        this.UID = KeyID;
        KeyID++;
    }

    // 展示UID,帳號,密碼
    public void showProfile() {
        System.out.println("UID:" + getUID() + "\n帳號:" + getAccount() + "\n密碼:" + getPassword());
    }

    // getters&&setters

    // 輸入不重複的帳戶名
    static public String setAccount(String account) {// 設定為static在程式開始載入
        while (accountName.contains(account))// 當使用者名稱存在
            System.out.print("帳戶名已存在請重新輸入:");
        accountName.add(account);// 新增至陣列
        return account;
    }

    static public String setPassword(String password) {// 設定為static在程式開始載入
        return password;
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