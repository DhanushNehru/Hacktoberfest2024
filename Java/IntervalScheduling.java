import java.util.*;

class Interval 
{
    int start;
    int end;
    Interval(int start, int end) 
    {
        this.start=start;
        this.end=end;
    }
}

public class IntervalScheduling {
	
    public static List<Interval> scheduleIntervals(List<Interval> intervals) {      
        intervals.sort(Comparator.comparingInt(interval -> interval.end));
        List<Interval> selectedIntervals=new ArrayList<>();
        int lastEndTime=Integer.MIN_VALUE;
        for (Interval it : intervals) 
        {
            if (it.start>=lastEndTime) 
            {                
                selectedIntervals.add(it);
                lastEndTime=it.end;
            }
        }
        return selectedIntervals;
    }

    public static void main(String[] args) {
    	// TODO Auto-generated method stub
        List<Interval> li = Arrays.asList(
            new Interval(0, 2),
            new Interval(1, 3),
            new Interval(0, 4),
            new Interval(3, 4),
            new Interval(4, 5),
            new Interval(3, 6),
            new Interval(6, 10)
        );
        List<Interval> si=scheduleIntervals(li);
        System.out.println("Selected Intervals:");
        for (Interval it : si) 
        {
            System.out.println("["+it.start+", "+it.end+"]");
        }
    }
}

