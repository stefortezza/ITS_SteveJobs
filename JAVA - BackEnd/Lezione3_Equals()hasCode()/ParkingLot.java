import java.util.ArrayList;

public class ParkingLot {
    private int places = 10;
    private int priceForMillis = 1;
    private ArrayList<StopOver> stopOvers = new ArrayList();

    public ParkingLot() {

    }

    public ParkingLot(int places) {
        this.places = places;
    }

    public boolean addCar(Car car, int position) {
        for (StopOver stopOver : this.stopOvers) {
            if (stopOver.isCarIntoTheParking() && stopOver.getPosition() == position) {
                return false;
            }
        }
        this.stopOvers.add(new StopOver(car, position, this.priceForMillis));
        return true;
    }

    public void exitCarFromParking(String plate) {
        for (StopOver stopOver : this.stopOvers) {
            if (stopOver.getCar().getPlate() == plate) {
                stopOver.exit();
            }
        }
    }

    public int getAvailablePlaces() {
        int busyPlaces = 0;
        for (StopOver stopOver : this.stopOvers) {
            if (stopOver.isCarIntoTheParking()) {
                busyPlaces++;
            }
        }
        return this.places - busyPlaces;
    }

    public boolean isCompleted() {
        return this.getAvailablePlaces() == 0;
    }

    public double getAmount() {
        double amount = 0;
        for (StopOver stopOver : this.stopOvers) {
            amount += stopOver.getPrice();
        }
        return amount;
    }

}