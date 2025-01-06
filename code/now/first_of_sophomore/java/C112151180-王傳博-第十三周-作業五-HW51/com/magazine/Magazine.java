package com.magazine;

import com.item.*;

public class Magazine extends Item {
    protected int price;// 價格(天)
    protected int day;// 租借數天
    protected String issue; // (期數/出版期)
    protected int temp=1;// 用來記錄當前ID

    // 建構子
    public Magazine() {
        this(" ", " ", 0, 0, " ");
    }

    // 名稱,ssn,價格(天),租借天數,出版期
    public Magazine(String name, String ssn, int price, int day, String issue) {
        super(name, ssn);
        this.price = price;// 價格(天)
        this.day = day;// 租借天數,
        this.issue = issue;// (期數/出版期)
        temp+= ID;
        ID++;
    }

    // 計算費用
    @Override
    public double calculateFee() {
        double result = this.day * this.price * 0.9;// 9折
        return result;
    }

    // 輸出內容
    @Override
    public String toString() {
        return String.format("書籍名稱: %s\nssn: %s\n價格(天): %d元\n租借天數:%d\n出版期:%s\n書籍類型: %s\n總價格: %.2f\n", name, ssn, price, day,
                issue, show(),
                calculateFee());
    }

    // 回傳序號2:雜誌
    @Override
    public String show() {
        String result = Integer.toString(temp);
        return String.format("Magazine " + result);
    }

    // getters&&setters
    public int getPrice() {
        return price;
    }

    public void setPrice(int price) {
        this.price = price;
    }

    public int getDay() {
        return day;
    }

    public void setDay(int day) {
        this.day = day;
    }

    public String getIssue() {
        return issue;
    }

    public void setIssue(String issue) {
        this.issue = issue;
    }
}
