import com.audioBook.AudioBook;
import com.book.*;
import com.item.Item;
import com.magazine.Magazine;
import com.magazine.digitalMagazine.DigitalMagazine;

public class main {
    public static void main(String[] args) {
        Item[] Books = new Item[8];//物件array
        Books[0] = new AudioBook("有聲書1", "0", 2, 30, "義佰紛");
        Books[1] = new AudioBook("有聲書2", "1", 2, 40, "儀萣过");
        Books[2] = new Book("我用死薪水輕鬆理財賺千萬（五萬本紀念版）：16歲就能懂、26歲就置產的投資祕訣", "2", 40, 8);
        Books[3] = new Book("Refactoring", "3", 23, 7);
        Books[4] = new Magazine("雜誌1", "4", 10, 3, "第五期");
        Books[5] = new Magazine("雜誌2", "5", 15, 14, "第六期");
        Books[6] = new DigitalMagazine("數位雜誌1", "6", 15, 3, "第七期", "PDF", "www.BookWalker.com");
        Books[7] = new DigitalMagazine("數位雜誌1", "7", 13, 7, "第八期", "pptx", "www.BookWalker.com");
        //輸出物件內容
        for (Item s : Books) {
            System.out.print(s.toString());
            System.out.println("----------------");
        
        }
    }

}
