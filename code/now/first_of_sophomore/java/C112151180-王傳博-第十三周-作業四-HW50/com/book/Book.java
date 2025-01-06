package com.book;
import com.item.*;
public class Book extends Item {
   private int price;
   private int day;

   public Book() {
      this(" ", " ", 0, 0);
   }

   public Book(String name, String ssn, int price, int day) {
      super(name,ssn );
      this.price = price;
      this.day = day;
   }
   @Override
   public double calculateFee() {
      return this.price * this.day;
   }
   @Override
   public String toString()
   {
      return String.format("Name: %s,ssn: %s, Price: %s, Day: %d.", name, ssn, price,day);
   }
}