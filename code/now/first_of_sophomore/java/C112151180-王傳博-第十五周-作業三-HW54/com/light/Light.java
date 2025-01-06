package com.light;

import com.appliances.*;

public class Light extends Appliances {
    // 建構子
    public Light() {
        this(" ", " ", " ", 0);
    }

    public Light(String type, String name, String location, int consumption) {
        super(type, name, location, consumption);
    }
    //顯示家電的資訊
    @Override
    public void showProfile() {
        System.out.printf("家電類型:%s, 家電名稱:%s, 安裝位置:%s, 功耗:%s\n",getType(),getName(),getLocation(),getConsumption());
    }
}
