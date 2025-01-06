package com.audioBook;

import com.item.*;

public class AudioBook extends Item {
    private int price;// 價格(分鐘)
    private int duration;// (時長，以分鐘計算)
    private String narrator;// (旁白/朗讀者姓名)
    private int temp = 1;// 用來記錄當前ID
    // 建構子

    public AudioBook() {
        this(" ", " ", 0, 0, " ");
    }

    // 名稱,ssn,價格(天),時常(以分鐘計算),朗讀者
    public AudioBook(String name, String ssn, int price, int duration, String narrator) {
        super(name, ssn);
        this.price = price;// 價格(分鐘)
        this.duration = duration;// (時長，以分鐘計算)
        this.narrator = narrator;// (旁白/朗讀者姓名)
        this.temp += ID;//紀錄當前流水號
        ID++;//讓流水號繼續加下去
    }

    // 計算費用
    @Override
    public double calculateFee() {
        return this.price * this.duration;
    }

    // 輸出內容
    @Override
    public String toString() {
        return String.format("書籍名稱: %s\nssn: %s\n價格: %d\n元時常(以分鐘計算): %d\n朗讀者: %s\n書籍類型: %s\n總價格: %.2f\n", name, ssn, price, duration,
                narrator, show(), calculateFee());
    }

    // 回傳序號
    @Override
    public String show() {
        String result = Integer.toString(temp);
        return String.format("AudioBook " + result);// 4:有聲書
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
