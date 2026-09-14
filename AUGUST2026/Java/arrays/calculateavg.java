public class calculateavg {
    public static void main(String[] args){
        int sum = 0;
        int count = 0;
        int arr[] = new int[]{10,20,30,40,50};
        for(int i=0;i<arr.length;i++){
            sum = sum + arr[i];
            count++;
        }
        System.out.println("Avg: " + (sum/count));
    }
}
