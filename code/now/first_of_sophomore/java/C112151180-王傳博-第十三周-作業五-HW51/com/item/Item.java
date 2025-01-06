package com.item;

abstract public class Item {
    // 成員
    protected String name;// 名稱
    protected String ssn;// 流水號
    static protected int ID=0;//第三位號碼代表書的種類，4:有聲書,3:數位雜誌,2:雜誌,1:書本
    // 建構子
    public Item() {
        this(" ", " ");//
    }

    public Item(String name, String ssn) {
        this.name = name;
        this.ssn = ssn;
    }

    // 計算借閱費用
    public abstract double calculateFee();
    //顯示ID
    public abstract String show();
    // 顯示各個屬性資訊
    @Override
    public String toString() {
        return String.format("Name: %s,ssn: %s.", name, ssn);// 4:有聲書
    }

    // getters&&setters
    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getSsn() {
        return ssn;
    }

    public void setSsn(String ssn) {
        this.ssn = ssn;
    }

}
