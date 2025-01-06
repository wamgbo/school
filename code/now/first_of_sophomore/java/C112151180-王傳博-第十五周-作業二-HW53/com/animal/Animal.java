package com.animal;

public class Animal {
    private String name;//動物名稱
    private String color;//動物顏色

    //建構子
    public Animal()
    {
        this(" ", " ");
    }
    public Animal(String name, String color)
    {
        this.name=name;
        this.color=color;
    }

    //返回物件的完整資訊
    @Override
    public String toString()
    {
        return String.format("名稱:%s ,顏色:%s",this.name,this.color);
    }
    //getters&&getters
        public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
    public String getColor() {
        return color;
    }
    public void setColor(String color) {
        this.color = color;
    }

}
