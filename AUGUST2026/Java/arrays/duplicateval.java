public class duplicateval {
    public static void main(String[] args){
        int arr[] = {10, 20, 30, 40, 20,30, 50};
        // length = 6 

        for(int i=0;i<arr.length-1;i++){
            for(int j= i+1;j<arr.length;j++){
                if(arr[i] == arr[j]){
                    System.out.println("Duplicate element is: " + arr[i]);

                }
            }
        }

    }
}
