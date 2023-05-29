import java.util.Scanner;
public class YangHui{

	public static void main(String args[]){
	
		Scanner sc = new Scanner(System.in);

		System.out.print("请输入你要打印的行数：");
		int number = sc.nextInt();
		
		int[][] tdarr = new int[number][];
		
		generate(tdarr);
		show(tdarr);
	}

	// 在给予的二维数组中，生成杨辉三角
	private static void generate(int[][] tdarr){

		for(int i = 0; i < tdarr.length; i++){
			tdarr[i] = new int[i+1];
			for(int j = 0; j < tdarr[i].length; j++){
				if( j==0 | j==tdarr[i].length-1 ){ // 每行首尾巴都是1
					tdarr[i][j] = 1;
				}else{
					tdarr[i][j] = 
						tdarr[i-1][j] + // 同列上一行的数字
						tdarr[i-1][j-1]; // 同列上一行的前一个数字
				}
			}	
		}
	}	

	// 展示：还有专门为杨辉三角的排版
	private static void show(int[][] tdarr){
		String mytab = "\t";
		// 外层循环，获取二维数组中的所有一维数组
		for(int i = 0; i < tdarr.length; i++){
			// 打印tab，排版
			for(int t = 0; t < tdarr.length - i; t++){
				System.out.print(mytab);
			}
			// 内层循环，遍历一维数组
			for(int j = 0; j < tdarr[i].length; j++){
				System.out.print(mytab+tdarr[i][j]+mytab);
			}
			System.out.println("");
		}
	}
}
