package com.magazine;
import com.item.*;
public class Magazine extends Item {
    protected int price;// 價格(天)
    protected int day;// 租借數天
    protected String issue; // (期數/出版期)

    // 建構子
    public Magazine() {
        this(" ", " ", 0, 0, " ");
    }

    public Magazine(String name, String ssn, int price, int day, String issue) {
        super(name, ssn);
        this.price = price;
        this.day = day;
        this.issue = issue;
    }

    @Override
    public double calculateFee() {
        double result = this.day * this.price * 0.9;
        return result;
    }

    @Override
    public String toString() {
        return String.format("Name: %s,ssn: %s, Price: %d, Day: %d, Issue: %s.", name, ssn, price, day, issue);
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
