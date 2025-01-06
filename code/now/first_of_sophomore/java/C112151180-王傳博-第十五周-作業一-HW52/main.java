import com.bird.*;
import com.plane.*;
import com.flyer.*;

public class main {
    public static void main(String[] args) {
        Flyer fl[] = new Flyer[2];
        fl[0] = new Bird("鸚鵡", "紅色");
        fl[1] = new Plane("波音 747", 900);
        for(var ob:fl)
        {
            System.out.println(ob.toString());
            ob.fly();
            
        }
    }

}