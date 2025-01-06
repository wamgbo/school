package com.vehicle;

public class Vehicle {
    private String name;// 載具名稱
    private double speed;// 載具速度

    // 建構子
    public Vehicle() {
        this(" ", 0);
    }

    public Vehicle(String name, double speed) {
        this.name = name;
        this.speed = speed;
    }

    // 返回物件的完整資訊
    @Override
    public String toString() {
        return String.format("名稱:%s ,時速:%s", this.name, this.speed);
    }

    // getters&&setters
    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public double getSpeed() {
        return speed;
    }

    public void setSpeed(double speed) {
        this.speed = speed;
    }
}
