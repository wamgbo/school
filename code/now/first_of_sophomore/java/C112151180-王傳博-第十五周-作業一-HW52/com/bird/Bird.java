package com.bird;

import com.animal.*;
import com.flyer.*;;

public class Bird extends Animal implements Flyer {
    //建構子
    public Bird() {
        super();
    }

    public Bird(String name, String color) {
        super(name, color);
    }
    //飛行
    public void fly()
    {
        System.out.printf("%s 在天上飛\n",getName());
    }
}
