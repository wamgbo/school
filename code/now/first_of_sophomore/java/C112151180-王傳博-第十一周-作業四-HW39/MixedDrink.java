public class MixedDrink extends Alcohol {
    //Nullary constructor
    MixedDrink() {
        super();
    }
    //Constructor
    MixedDrink(Alcohol alcohol1, Alcohol alcohol2) {
        //(a1容量*a1酒精濃度+a2容量*a2酒精濃度)/(a1容量+a2容量)
        super((alcohol1.getVolume()+alcohol2.getVolume()),((alcohol1.getVolume()*alcohol1.getAlcoholPrecentage()+alcohol2.getVolume()*alcohol2.getAlcoholPrecentage())/(alcohol1.getVolume()+alcohol2.getVolume())));        
    }
}
