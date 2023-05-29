import java.util.Scanner;
public class ArrayAdd{

	public static void main(String args[]){
		int[] arr = {21,33,98,12,71};
		Scanner sc = new Scanner(System.in);
		System.out.println("输入整数增加数组，非整数将退出程序。");

		while(true){
			show(arr);
			
			// 非整数，退出程序
			System.out.print("请输入:");
			if(!sc.hasNextInt()) break;

			// 增加数值
			arr = add(arr,sc.nextInt());
		}
	}

	public static int[] add(int[] arr,int value){
		// 创建比原数组长的新数组
		int[] newArr = new int[arr.length+1];
		// 遍历赋值给新数组
		for(int i = 0; i<arr.length; i++){
			newArr[i] = arr[i];
		}
		// 将值追加到新数组
		newArr[newArr.length-1] = value;

		return newArr;
	}
	public static void show(int[] arr){
		System.out.print("当前数组：");
		for(int i = 0; i < arr.length; i++){
			System.out.print(arr[i]);
			if(i != arr.length-1){
				System.out.print(",");
			}
		}
		System.out.println("");
	}

}
