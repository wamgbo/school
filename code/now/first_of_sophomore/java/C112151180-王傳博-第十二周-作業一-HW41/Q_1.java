import java.io.*;

public class Q_1 {
	public static void main(String arg[])throws IOException {
		BufferedReader buf = new BufferedReader(new InputStreamReader(System.in));
		System.out.print("�п�J�b�|�G");
		double r = Double.parseDouble(buf.readLine());
		Circle.pi=5;
		Circle c = new Circle(r);
	}
}
class Circle {
	static double pi=3.14;
	Circle(double r){
		System.out.println("�ꪺ���n��:" + r*r*pi);
	}
	//�Npi�[�Wstatic��pi�b�{�����J�O����ɥ������@���O�����m,��pi�i�H�w���]�w��
}
