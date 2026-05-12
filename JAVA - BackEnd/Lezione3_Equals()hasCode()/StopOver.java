import java.util.Date;

public class StopOver {
    private long start; // = 0;
    private long end; // = 0;
    private Car car;
    private int position;

    private int priceForMillis = 0;

    public StopOver(Car car, int position, int priceForMillis) {
        Date d = new Date();
        this.start = d.getTime(); // numero di millis da 1/1/1970
        this.car = car;
        this.position = position;
        this.priceForMillis = priceForMillis;
    }

    public void exit() {
        Date d = new Date();
        this.end = d.getTime();
    }

    public boolean isOver() { // la sosta è terminata
        return this.end != 0;
    }

    public boolean isCarIntoTheParking() { // la sosta è in corso
        return !this.isOver();
    }

    public double getPrice() {
        if (this.isOver()) {
            return (this.end - this.start) * this.priceForMillis;
        } else {
            return 0;
        }
    }

    public Car getCar() {
        return car;
    }

    public int getPosition() {
        return position;
    }

}