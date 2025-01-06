import com.audioBook.AudioBook;
import com.book.*;
import com.item.Item;
import com.magazine.Magazine;
import com.magazine.digitalMagazine.DigitalMagazine;

public class main {
    public static void main(String[] args) {
        Item[] Books = new Item[4];
        Books[0] = new AudioBook("有聲書", "0", 2, 30, "義佰紛");
        Books[1] = new Book("書", "1", 35, 7);
        Books[2] = new Magazine("雜誌", "2", 15, 3, "第五期");
        Books[3] = new DigitalMagazine("數位雜誌", "3", 15, 3, "第五期", "PDF", "www.BookWalker.com");

        for (Item s : Books) {
            System.out.print(s.toString());
            System.out.println(" 總共價錢: "+s.calculateFee());
        }
    }

}
