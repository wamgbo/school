package com.robotVacuum;
import com.appliances.*;
import com.operate.*;
public class RobotVacuum extends Appliances implements Operate {
    private boolean status=false;
    //建構子
    public RobotVacuum()
    {
        this(" "," "," ",0);
    }
    public RobotVacuum(String type,String name,String location,int consumption)
    {
        super(type,name,location,consumption);
    }
    //顯示家電的資訊
    @Override
    public void showProfile() {
        System.out.printf("家電類型:%s, 家電名稱:%s, 安裝位置:%s, 功耗:%s\n",getType(),getName(),getLocation(),getConsumption());
    }
    public void operate()
    {
        if(isStatus()==true)
            System.out.println("掃地機器人(打掃完畢)");
        else
            System.out.println("掃地機器人(開始打掃)");
    }
    //setters&&getters   
    public boolean isStatus() {
        return status;
    }
    public void setStatus(boolean status) {
        this.status = status;
    }

}
