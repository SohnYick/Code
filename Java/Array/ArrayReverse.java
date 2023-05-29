public class ArrayReverse{

	public static void main(String args[]){
		int[] arr = {1,2,3,4,5,6,7};
		reverse(arr);
		show(arr);
	}

	public static void reverse(int[] arr){
		int temp = 0;
		int headIndex = 0;
		int tailIndex = arr.length-1;
		while( headIndex < tailIndex){
			// 交换两数
			temp = arr[headIndex];
			arr[headIndex] = arr[tailIndex];
			arr[tailIndex] = temp;
			// 移动指向
			headIndex++;
			tailIndex--;
		}
	}

	public static void show(int[] arr){
		for(int i = 0; i < arr.length; i++){
			System.out.print(arr[i]);
			if(i != arr.length-1){
				System.out.print(",");
			}
		}
	}
}
