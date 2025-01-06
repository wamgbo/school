package com.appliances;

abstract public class Appliances {
    private String type;//家電類型
    private String name;//家電名稱
    private String location;//安裝位置
    private int consumption;//功耗（瓦特數）

    // 建構子
    public Appliances() {
        this(" ", " ", " ", 0);
    }

    public Appliances(String type, String name, String location, int consumption) {
        setType(type);
        setName(name);
        setLocation(location);
        setConsumption(consumption);
    }
    //顯示家電的資訊
    abstract public void showProfile();
    // setters&&getters
    public String getType() {
        return type;
    }

    public void setType(String type) {
        this.type = type;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getLocation() {
        return location;
    }

    public void setLocation(String location) {
        this.location = location;
    }

    public int getConsumption() {
        return consumption;
    }

    public void setConsumption(int consumption) {
        this.consumption = consumption;
    }


}
