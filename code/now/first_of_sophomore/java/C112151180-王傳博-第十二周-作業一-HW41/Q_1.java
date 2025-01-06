import java.io.*;

public class Q_1 {
	public static void main(String arg[])throws IOException {
		BufferedReader buf = new BufferedReader(new InputStreamReader(System.in));
		System.out.print("請輸入半徑：");
		double r = Double.parseDouble(buf.readLine());
		Circle.pi=5;
		Circle c = new Circle(r);
	}
}
class Circle {
	static double pi=3.14;
	Circle(double r){
		System.out.println("圓的面積為:" + r*r*pi);
	}
	//將pi加上static讓pi在程式載入記憶體時先佔有一塊記憶體位置,讓pi可以預先設定值
}
