import java.util.*;

public class bubble{
public static void main(String ...s){
	int[] a = new int[]{3,1,7,8};
	// List<Integer> list= Arrays.asList(a);
    for(int i=0;i<a.length;i++){
    	for(int j=0;j<a.length - i -1;j++){
    		if(a[j]>a[j+1]){
    			int t=a[j];
    			a[j]=a[j+1];
    			a[j+1]=t;
    			// Collections.swap(list,j,j+1);
    		}
    	}
    }
	System.out.println(String.valueOf(a.length) + " , " +Arrays.toString(a));
}	
}
