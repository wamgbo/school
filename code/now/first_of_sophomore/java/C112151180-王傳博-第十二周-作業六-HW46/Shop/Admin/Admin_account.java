package Shop.Admin;

import java.time.*;
import Shop.ShopAccount;

public class Admin_account extends ShopAccount {
    private String admin_name, admin_email, date;// 管理員名稱,管理員Email,註冊時間
    private int admin_ID;// 管理員ID
    
    // Nullary constructor
    public Admin_account() {
        this(" ", " ", " ", " ", " ", 0);
    }

    // Constructor
    public Admin_account(String account, String password, String admin_name, String Date, String admin_email, int admin_ID) {
        super(account, password);//呼叫父類別constructor
        //設定成員內容
        setAdmin_name(admin_name);
        setAdmin_email(admin_email);
        setAdmin_ID(admin_ID);
        setDate(Date);
    }

    @Override // 告訴complier需要Override
    public void showProfile() {
        super.showProfile();// 呼叫父類別showProfile
        System.out.println("管理員名稱:" + getAdmin_name() + "\n管理員Email" + getAdmin_email() + "\n管理員ID" + getAdmin_ID()// 輸出成員
                + "\n註冊時間:" + getDate());
    }

    // getters&&setters
    public String getAdmin_name() {
        return admin_name;
    }

    public void setAdmin_name(String admin_name) {
        this.admin_name = admin_name;
    }

    public String getAdmin_email() {
        return admin_email;
    }

    // 當userEmail不包含題目規定域名設定空
    public void setAdmin_email(String admin_email) {
        if (admin_email.contains("@kuas.edu.tw") || admin_email.contains("@gmail.com"))
            this.admin_email = admin_email;
        else
            this.admin_email = " ";

    }

    public int getAdmin_ID() {
        return admin_ID;
    }

    public void setAdmin_ID(int admin_ID) {
        this.admin_ID = admin_ID;
    }

    public String getDate() {
        return date;
    }

    public void setDate(String date) {
        this.date = date;
    }

}