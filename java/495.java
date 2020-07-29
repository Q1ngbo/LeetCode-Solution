class Solution {
    public int findPoisonedDuration(int[] timeSeries, int duration) {
        int length = timeSeries.length;
        if(length == 0)
            return 0;
        int timeSum = 0;
        int former = timeSeries[0];

        for(int i=1; i< length; i++){
            if(timeSeries[i] - former >= duration)
                timeSum += duration;
            else {
                timeSum += (timeSeries[i] - former);
            }
            former = timeSeries[i];
        }

        return timeSum+duration;
    }
}