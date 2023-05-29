public class TwoDimensionalArray{
	
	public static void main(String args[]){
		
		int[][] tdarr = {
			{3,1,9,5,3},
			{2,6,5},
			{3,3,9,8,5}
		};		
		show(tdarr);	

		System.out.println("++++++++++++动态初始化++++++++++++++");
		
		int[][] arr = new int[3][];
		for(int i = 0; i < arr.length; i++){
			arr[i] = new int [i+1];
			for(int j = 0; j < arr[i].length; j++){
				arr[i][j] = i + 1;
			}
		}
		show(arr);
	}

	public static void show(int[][] tdarr){
		// 外层循环，获取二维数组中的所有一维数组
		for(int i = 0; i < tdarr.length; i++){
			// 内层循环，遍历一维数组
			for(int j = 0; j < tdarr[i].length; j++){
				System.out.print(tdarr[i][j]+"\t");
			}
			System.out.println("");
		}
	}
}
