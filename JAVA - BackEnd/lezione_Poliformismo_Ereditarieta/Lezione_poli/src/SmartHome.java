import java.util.ArrayList;

public class SmartHome {

    private ArrayList<RemoteControl> remoteControlList = new ArrayList<>();

    public ArrayList<RemoteControl> getRemoteControl() {
        return remoteControlList;
    }

    public void setRemoteControl(ArrayList<RemoteControl> remoteControl) {
        this.remoteControlList = remoteControl;
    }

    public void add(RemoteControl rc){
        this.remoteControlList.add(rc);
    }

    public void turnOnAll(){
        for (RemoteControl rc: this.remoteControlList){
            rc.turnOn();
        }
    }

    public void turnOffAll(){
        for (RemoteControl rc: this.remoteControlList){
            rc.turnOff();
        }
    }
}
