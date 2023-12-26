package Hashing;

import java.util.Collections;
import java.util.TreeMap;
import java.util.Map;

public class CarFleet {

    public int solve(int target, int[] position, int[] speed){
        TreeMap<Integer, Double> mp = new TreeMap<>(Collections.reverseOrder());
        int n = position.length;
        for(int i =0 ;i< n;i++){
            mp.put(position[i], (double)(target - position[i]) / speed[i]);
        }
        int ans =0;
        double curr = 0;
        for(Map.Entry<Integer,Double> entry : mp.entrySet()){
            if(entry.getValue() > curr){
                curr = entry.getValue();
                ans++;
            }
        }
        return ans;
    }
    public static void main(String[] args){
        int[] position = {10,8,0,5,3};
        int[] speed = {2, 4, 1, 1, 3};
        int target = 12;
         
        CarFleet fleet = new CarFleet();
       System.out.println("CarFleet are " + fleet.solve(target, position, speed));

    }
}
