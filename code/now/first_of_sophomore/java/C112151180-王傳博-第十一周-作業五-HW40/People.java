public class People {
    private double weight;// 體重
    private String gender;// 性別
    private double alcoholAmount;// 飲用的酒精量 (克)
    private double hours;// 飲酒後經過的時間 (小時)
    private double BAC;// 儲存 BAC 值

    // Nullary constructor
    public People() {
        this(0, " ");
    }

    // Constructor
    public People(double weight, String gender) {
        setWeight(weight / 100);//毫升換算公克
        setGender(gender);
    }

    // 計算BAC，依照男性或女性，乘與0.68,0.55
    private double calculateBAC() {
        if (this.gender.equals("man"))
            return ((this.alcoholAmount) / (this.weight * 100 * 0.68));//酒精濃度/
        else
            return ((this.alcoholAmount) / (this.weight * 100 * 0.55));
    }

    // 輸入酒品種類，喝酒後已過多少小時
    public void drink(Alcohol A, double hour) {
        setAlcoholAmount(A.getAlcoholAmount());//存取A酒品的酒精濃度
        setHours(hour);
        BAC = calculateBAC();
    }

    // fallTimeNow是目前BAC值,fallTimeNeed是剩餘需要等待的時間,判斷fallTimeNow是否達到預期
    public void calculateRestTime() {
        double fallTimeNeed, hour, minute;
        if (calculateBAC()-0.015*getHours() <= 0.05)//BAC值-每小時代謝量小於5%
            System.out.println("BAC值在安全範圍內");
        else {
            //BAC值-每小時代謝/每分鐘代謝量
            fallTimeNeed = ((getBAC() - getHours() * 0.015) - 0.05) / (0.015 / 60);
            hour = fallTimeNeed / 60;//此時fallTimeNeed是需要休息的分鐘，除60取小時
            minute = fallTimeNeed % 60;//取分鐘
            System.out.println("需要休息" + (long) hour + "小時" + (long) minute + "分鐘");
        }
    }

    // setters&&getters
    public double getWeight() {
        return weight;
    }

    public void setWeight(double weight) {
        this.weight = weight;
    }

    public String getGender() {
        return gender;
    }

    public void setGender(String gender) {
        this.gender = gender;
    }

    public double getAlcoholAmount() {
        return alcoholAmount;
    }

    public void setAlcoholAmount(double alcoholAmount) {
        this.alcoholAmount = alcoholAmount;
    }

    public double getHours() {
        return hours;
    }

    public void setHours(double hours) {
        this.hours = hours;
    }

    public double getBAC() {
        return BAC;
    }

    public void setBAC(double bAC) {
        BAC = bAC;
    }
}