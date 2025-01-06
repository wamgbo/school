public class Alcohol {
    private double volume;//(容量)
    private double alcoholPrecentage;//(酒精濃度)
    private double alcoholAmount;//(克)

    // Nullary constructor
    public Alcohol() {
        this(0, 0);
    }

    // constructor
    public Alcohol(double volume, double alcoholPrecentage) {
        setVolume(volume);
        setAlcoholPrecentage(alcoholPrecentage);
        setAlcoholAmount(volume * alcoholPrecentage);
    }

    // showInformation
    public void showProfile() {
        System.out.println("容量:" + (long)getVolume() + "\n酒精濃度:" + (long)(getAlcoholPrecentage()*100) + "%\n酒精量(克):" + getAlcoholAmount());
    }

    // setters&&getters
    public double getVolume() {
        return volume;
    }

    public void setVolume(double volume) {
        this.volume = volume;
    }

    public double getAlcoholPrecentage() {
        return alcoholPrecentage;
    }

    public void setAlcoholPrecentage(double alcoholPrecentage) {
        this.alcoholPrecentage = alcoholPrecentage;
    }

    public double getAlcoholAmount() {
        return alcoholAmount;
    }

    public void setAlcoholAmount(double alcoholAmount) {
        this.alcoholAmount = alcoholAmount;
    }

}