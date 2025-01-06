package com.audioBook;
import com.item.*;
public class AudioBook extends Item {
    private int price;// 價格(分鐘)
    private int duration;// (時長，以分鐘計算)
    private String narrator;// (旁白/朗讀者姓名)

    // 建構子
    public AudioBook() {
        this(" ", " ", 0, 0, " ");
    }

    public AudioBook(String name, String ssn, int price, int duration, String narrator) {
        super(name, ssn);
        this.price = price;
        this.duration = duration;
        this.narrator = narrator;
    }

    @Override
    public double calculateFee() {
        return this.price * this.duration;
    }

    @Override
    public String toString() {
        return String.format("Name: %s,ssn: %s, Price: %d, Duration: %d, Narrator: %s.", name, ssn, price, duration,
                narrator);
    }

    // getters&&setters
    public int getPrice() {
        return price;
    }

    public void setPrice(int price) {
        this.price = price;
    }

    public int getDuration() {
        return duration;
    }

    public void setDuration(int duration) {
        this.duration = duration;
    }

    public String getNarrator() {
        return narrator;
    }

    public void setNarrator(String narrator) {
        this.narrator = narrator;
    }
}
