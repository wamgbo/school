public class Tea extends Drink {
    private String color;
    private int cc;

    // 空的constructor
    public Tea() {
        this(" ", 0, " ", " ", 0);
    }

    // constructor
    public Tea(String name, int calorie, String date, String color, int cc) {
        super(name, calorie, date);
        setColor(color);
        setCc(cc);
    }

    // 如果過期則輸出再回傳結果
    @Override
    public boolean showExpiry() {
        if (super.showExpiry()) {
            System.out.println("已過期");
            return true;
        } else {
            System.out.println("在保存期內");
            return false;
        }
    }

    // 顯示所有資訊
    @Override
    public void showProfile() {
        super.showProfile();
        System.out.println(getCc() + "ml的" + getColor() + "茶");
    }

    // setters&&getters
    public String getColor() {
        return color;
    }

    public void setColor(String color) {
        this.color = color;
    }

    public int getCc() {
        return cc;
    }

    public void setCc(int cc) {
        this.cc = cc;
    }

    public boolean equals(Tea ob) {
        if (this.getName() == ob.getName() &&
                this.getCalorie() == ob.getCalorie() &&
                this.getDate() == ob.getDate() &&
                this.getCc() == ob.getCc() &&
                this.getColor() == ob.getColor())
            return true;
        return false;
    }

}
