import java.util.Scanner;

import com.appliances.*;
import com.light.*;
import com.securityCamera.*;
import com.robotVacuum.*;

public class main {

    // 操作
    public static void operating(Appliances ob[]) {
        int option;//選項
        System.out.print("請輸入要操作的家電編號( 1-3 ) :");
        option = Fool_proof();//輸入1-3
        System.out.println("家電資訊:");
        //選擇家電
        switch (option) {
            case 1://Light
                if (ob[0] instanceof Light) {//判斷是否為Light類別
                    Light instace = (Light) ob[0];//轉型
                    instace.showProfile();//輸出
                }
                break;
            case 2://RobotVacuum
                if (ob[1] instanceof RobotVacuum) {
                    RobotVacuum instace = (RobotVacuum) ob[1];
                    instace.showProfile();
                    //顯示目前狀態
                    if (instace.isStatus() == true)
                        System.out.println("目前狀態:啟動");
                    else
                        System.out.println("目前狀態:未啟動");
                    //判斷是否啟動
                    System.out.print("是否執行操作?(1. 是 2. 否):");
                    option = Fool_proof();
                    //顯示操作後的狀態
                    if (option == 1)
                        instace.setStatus(true);
                    else if (option == 2)
                        instace.setStatus(false);
                    instace.operate();
                }
                break;
            case 3://SecurityCamera
                if (ob[2] instanceof SecurityCamera) {
                    SecurityCamera instace = (SecurityCamera) ob[2];
                    instace.showProfile();
                    //顯示目前狀態
                    if (instace.isStatus() == true)
                        System.out.println("目前狀態:啟動");
                    else
                        System.out.println("目前狀態:未啟動");
                    //判斷是否啟動
                    System.out.print("是否執行操作?(1. 是 2. 否):");
                    option = Fool_proof();
                    //顯示操作後的狀態
                    if (option == 1)
                        instace.setStatus(true);
                    else if (option == 2)
                        instace.setStatus(false);
                    instace.operate();
                }
                break;
            default:
                break;
        }

    }

    // 防呆
    public static int Fool_proof() {
        var s = new Scanner(System.in);
        int result;
        //諾非數字重新輸入
        while (!s.hasNextInt()) {
            System.out.print("請重新輸入:");
            s.next();
        }
        result = s.nextInt();
        return result;
    }

    // 菜單
    public static void manu(Appliances ob[]) {
        System.out.println("歡迎來到智慧居家系統，請選擇操作:");
        System.out.println("1. 查看所有家電資訊");
        System.out.println("2. 選擇家電進行操作");
        System.out.println("3. 離開程式");
        System.out.print("請輸入選項: ");
        int option = Fool_proof();
        do {
            switch (option) {
                case 1://顯示全部資訊
                    showList(ob);
                    System.out.print("請輸入選項: ");
                    option = Fool_proof();
                    break;
                case 2:
                    operating(ob);//操作家電
                    System.out.print("請輸入選項: ");
                    option = Fool_proof();
                    break;
            }
        } while (option!=3);
        System.out.print("程式結束。");
    }

    // 輸出清單
    public static void showList(Appliances ob[]) {
        int count = 1;
        System.out.println("家電清單:");
        //依序輸出陣列家電
        for (var p : ob) {
            System.out.print(count + ". ");
            p.showProfile();
            count++;
        }
    }

    public static void main(String[] args) {
        Appliances ob[] = new Appliances[3];
        ob[0] = new Light("燈具", "LED 燈", "客廳", 60);
        ob[1] = new RobotVacuum("掃地機器人", "Roomba", "臥室", 120);
        ob[2] = new SecurityCamera("安全攝影機", "360 監控", "陽台", 80);
        manu(ob);
    }
}
