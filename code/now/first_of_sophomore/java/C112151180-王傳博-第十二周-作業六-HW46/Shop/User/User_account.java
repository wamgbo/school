package Shop.User;

import java.security.PublicKey;

import Shop.ShopAccount;

public class User_account extends ShopAccount {
    private String userName, userEmail, date;// 使用者名稱,使用者Email,註冊日期

    // Nullary constructor
    User_account() {
        this(" ", " ", " ", " ", " ");
    }

    // Constructor
    public User_account(String account, String password, String name, String Date, String email) {
        super(account, password);// 呼叫父類別constructor
        // 設定成員內容
        setUserName(name);
        setUserEmail(email);
        setDate(Date);
    }

    @Override // 告訴complier需要Override
    public void showProfile() {
        super.showProfile();// 呼叫父類別showProfile
        System.out.println("姓名:" + getUserName() + "\nEmail:" + getUserEmail() + "\n註冊時間:" + getDate());
        System.out.println("--------------------------");
    }

    // getters&&setters
    public String getUserName() {
        return userName;
    }

    public void setUserName(String userName) {
        this.userName = userName;
    }

    public String getUserEmail() {
        return userEmail;
    }

    // 當userEmail不包含題目規定域名設定空
    public void setUserEmail(String userEmail) {
        if (userEmail.contains("@kuas.edu.tw") || userEmail.contains("@gmail.com"))
            this.userEmail = userEmail;
        else
            this.userEmail = " ";
    }

    public String getDate() {
        return date;
    }

    public void setDate(String date) {
        this.date = date;
    }
}
