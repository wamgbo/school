import java.io.*;

public class Q_2 {
	public static void main(String[] args) throws IOException {
		BufferedReader buf = new BufferedReader(new InputStreamReader(System.in));
		String c;
		do {
			System.out.print("您的姓名 : ");
			String name = buf.readLine();
			System.out.print("您的性別 : ");
			String gender = buf.readLine();
			Student student = new Student(name, gender);
			System.out.print("請問還有下一位嗎？(輸入y繼續) : ");
			c=buf.readLine();
		}while(c.equals("y"));
	}
}

class Student {
	static int m_num = 0, f_num = 0;
	private String name, gender;

	Student(String name, String gender) {
		this.gender = name;
		if (gender.equals("男")) {
			this.gender = "男";
			m_num++;
			System.out.println(name + "先生，您是本校第" + m_num + "位男生");
		} else if (gender.equals("女")) {
			this.gender = "女";
			f_num++;
			System.out.println(name + "小姐，您是本校第" + f_num + "位女生");
		} else
			System.out.println("本校並未招收性別為 " + gender + " 的學生");
	}
	//將m_num,f_num設為static，預先在程式讀取前要一塊記憶體位置設定m_num,f_num為0
}