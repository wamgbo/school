package shopaccount;

public class ShopAccount {
    static private int KeyID = 0;//static讓數字可以保留
    private int UID;//UID
    private String account, password;//帳號密碼

    // Nullary constructor
    public ShopAccount() {
        this(" ", " ");
    }

    // Constructor
    public ShopAccount(String account, String password) {
        setAccount(account);
        setPassword(password);
        setUID(KeyID);
        KeyID++;
    }

    // 展示UID,帳號,密碼
    public void showProfile() {
        System.out.println("UID:" + getUID() + "\n帳號:" + getAccount() + "\n密碼:" + getPassword());
    }

    // getters&&setters
    public static int getKeyID() {
        return KeyID;
    }

    public static void setKeyID(int keyID) {
        KeyID = keyID;
    }

    public int getUID() {
        return UID;
    }

    public void setUID(int uID) {
        UID = uID;
    }

    public String getAccount() {
        return account;
    }

    public void setAccount(String account) {
        this.account = account;
    }

    public String getPassword() {
        return password;
    }

    public void setPassword(String password) {
        this.password = password;
    }

}