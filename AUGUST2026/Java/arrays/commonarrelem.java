public class commonarrelem {
    public static void main(String[] args){
        int arr1[] = {10,20,30};
        int arr2[] = {40,50,20};

        for(int i = 0; i<arr1.length;i++){
            for(int j=0; j<arr2.length; j++){
                if(arr1[i] == arr2[j]){
                    System.out.println("Common elements are: " + arr1[i]);
                }
            }
        }
    }
}
