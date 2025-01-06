package com.balloon;

import com.flyer.*;

public class Balloon implements Flyer {
    private String color;// 氣球顏色

    // 建構子
    public Balloon() {
        this(" ");
    }

    public Balloon(String color) {
        this.color = color;
    }
    //返回物件的完整資訊
    @Override
    public String toString() {
        return String.format("顏色:%s", getColor());
    } 
    //飛行
    public void fly() {
        System.out.printf("%s顏色氣球在天上飛\n", getColor());
    }

    // setters&&getters
    public String getColor() {
        return color;
    }

    public void setColor(String color) {
        this.color = color;
    }

}
