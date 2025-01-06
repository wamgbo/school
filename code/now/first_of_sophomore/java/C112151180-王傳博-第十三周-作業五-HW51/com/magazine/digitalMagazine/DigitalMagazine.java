package com.magazine.digitalMagazine;

import com.magazine.Magazine;

public class DigitalMagazine extends Magazine {
    private String format;// (電子書格式，如 PDF、EPUB)
    private String downloadLink;// (下載連結)

    // 建構子
    public DigitalMagazine() {
        this(" ", " ", 0, 0, " ", " ", " ");
    }

    public DigitalMagazine(String name, String ssn, int price, int day, String issue, String format,
            String downloadLink) {
        super(name, ssn, price, day, issue);
        this.format = format;
        this.downloadLink = downloadLink;
    }

    @Override
    public double calculateFee() {
        double result = this.day * this.price * 0.8;
        return result;
    }

    // 輸出內容
    @Override
    public String toString() {
        return String.format("書籍名稱: %s\nssn: %s\n價格(天): %d元\n租借天數:%d\n出版期:%s\n電子書格式:%s\n下載連結:%s\n書籍類型: %s\n總價格: %.2f\n",
                name, ssn, price, day,
                issue, format, downloadLink, show(),
                calculateFee());
    }

    // 回傳序號3:數位雜誌
    @Override
    public String show() {
        String result = Integer.toString(temp);
        return String.format("DigitalMagazine " + result);
    }

    // getters&&setters
    public String getFormat() {
        return format;
    }

    public void setFormat(String format) {
        this.format = format;
    }

    public String getDownloadLink() {
        return downloadLink;
    }

    public void setDownloadLink(String downloadLink) {
        this.downloadLink = downloadLink;
    }
}
