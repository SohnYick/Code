using System;

class Test{
	static void Swap(ref string a,ref string b){
		string temp = a;
		a = b;
		b = temp;
	}

	static void Main(){
		string x = "x";
		string y = "y";
		Swap(ref x,ref y);
		Console.WriteLine(x);
		Console.WriteLine(y);
	}
}
