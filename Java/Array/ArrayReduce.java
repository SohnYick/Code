import java.util.Scanner;
public class ArrayReduce{

	public static void main(String args[]){
	
		Scanner sc = new Scanner(System.in);
		int[] arr = {1,2,3,4,5,6,7,8};

		System.out.println("输入y进行缩进，否则退出");
		String iv = null;
		while(true){

			if(arr.length<=0){
				System.out.println("数据已清空，再见！");
				break;
			}

			System.out.print("数组的当前内容：");
			show(arr);
			
			System.out.print("是否缩缩减数组：");
			iv = sc.next();
			// 用户输入的不是y，则退出程序
			if( !"y".equals(iv) ) break;

			arr = reduce(arr);

		}

	}

	public static int[] reduce(int[] arr){
		int[] newArr = new int[arr.length-1];
		for(int i = 0; i < newArr.length; i++){
			newArr[i] = arr[i];
		}	
		return newArr;
	}

	public static void show(int[] arr){
		for(int i = 0; i < arr.length; i++){
			System.out.print(arr[i]);
			if(i != arr.length-1){
				System.out.print(",");
			}
		}
		System.out.println("");
	}

}
