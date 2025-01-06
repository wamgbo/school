import com.bird.*;
import com.plane.*;
import com.balloon.*;
import com.flyer.*;

public class main {
    public static void main(String[] args) {
        Flyer fl[] = new Flyer[5];
        fl[0] = new Bird("鸚鵡", "紅色");
        fl[1] = new Bird("老鷹", "棕色");
        fl[2] = new Plane("噴射機", 1200);
        fl[3] = new Plane("滑翔機", 600);
        fl[4] = new Balloon("藍色");
        for(var ob:fl)
        {
            System.out.println(ob.toString());
            ob.fly();
            
        }
    }

}