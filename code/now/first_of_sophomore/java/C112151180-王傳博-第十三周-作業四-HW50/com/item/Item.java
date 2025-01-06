package com.item;

abstract public class Item {
    // 成員
    protected String name;
    protected String ssn;

    // 建構子
    public Item() {
        this(" ", " ");
    }

    public Item(String name, String ssn) {
        this.name = name;
        this.ssn = ssn;
    }

    // 計算借閱費用
    public abstract double calculateFee();

    // 顯示各個屬性資訊
    @Override
    public String toString() {
        return String.format("Name: %s,ssn: %s.", name, ssn);
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
