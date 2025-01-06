import java.util.*;

class WorldGame {
    private ArrayList<String> words;

    public WorldGame() {
        words = new ArrayList<String>();
    }

    public void addWord(String word) {
        words.add(word);
    }

    public boolean isValid(String oldWorld, String newWorld) {
        if (Character.toLowerCase(newWorld.charAt(0)) == Character.toLowerCase(oldWorld.charAt(oldWorld.length() - 1)))// newWorld的第一個字元小寫,oldWord的最後一個字元小寫
            return true;
        return false;
    }

    // 判斷陣列最後兩字
    public boolean check() {
        if (isValid(words.get(words.size() - 1), words.get(words.size() - 2)))
            return true;
        return false;
    }

    public void menu() {
        var s = new Scanner(System.in);
        String input;
        String option;
        System.out.println("文字接龍遊戲，不可出現重複的單詞");
        System.out.print("請輸入第一個詞:");
        try {
            addWord(s.nextLine());// 將nextLine接到的字傳到addWord()
            do {
                System.out.print("(c) 繼續接龍 (q) 結束遊戲:");
                option = s.nextLine();
                if (Character.toLowerCase(option.charAt(0)) == 'q') {//
                    break;
                }
                System.out.print("請輸入下一個詞:");
                addWord(s.nextLine());
                if (!check()) {
                    System.out.print("失敗! 字首與前一個單字的字尾不同");
                    break;
                }
            } while (true);

        } catch (StringIndexOutOfBoundsException e) {
            System.out.println(e);
            System.out.println("非法輸入");
        }
        System.out.print("\n以下是輸入過的詞:\n" + words.toString());
    }
}