package com.book;

import com.item.*;

public class Book extends Item {
   private int price;// 價格
   private int day;// 租借天數
   private int temp=1;// 站存目前書本的ID
   // 建構子

   public Book() {
      this(" ", " ", 0, 0);
   }

   // 名稱,ssn,價格,租借天數
   public Book(String name, String ssn, int price, int day) {
      super(name, ssn);
      this.price = price;
      this.day = day;
      this.temp += ID;// 取的目前ID流水號後再ID往下一位
      ID++;
   }

   // 計算
   @Override
   public double calculateFee() {
      return this.price * this.day;
   }

   // 輸出內容
   @Override
   public String toString() {
      return String.format("書籍名稱: %s\nssn: %s\n價格(天): %d元\n租借天數:%d\n書籍類型: %s\n總價格: %.2f\n", name, ssn, price, day,
            show(),
            calculateFee());
   }

   // 回傳序號1:書本
   @Override
   public String show() {
      String result = Integer.toString(temp);
      return String.format("Book " + result);
   }
}