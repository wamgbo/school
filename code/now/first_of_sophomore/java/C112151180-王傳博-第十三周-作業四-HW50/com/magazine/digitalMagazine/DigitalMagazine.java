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

    @Override
    public String toString() {
        return String.format("Name: %s,ssn: %s, Price: %d, Day: %d, Issue: %s, Format: %s, DownloadLink: %s.", name,
                ssn, price, day, issue, format, downloadLink);
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
