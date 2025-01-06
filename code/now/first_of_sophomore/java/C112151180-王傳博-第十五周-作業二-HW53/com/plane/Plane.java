package com.plane;

import com.vehicle.*;
import com.flyer.*;

public class Plane extends Vehicle implements Flyer{
    //建構子
    public Plane() {
        super();
    }
    public Plane(String name, double speed)
    {
        super(name,speed);
    }
    //飛行
    public void fly()
    {
        System.out.printf("%s在天上飛\n",getName()); 
    }
}
